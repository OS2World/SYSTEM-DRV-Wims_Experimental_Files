.386p
model flat
ideal

extrn DosClose:near
extrn DosExit:near
extrn DosOpen:near
extrn DosRead:near
extrn DosWrite:near

stack 8192

dataseg
szInput1 db 'cp437cga.rom',0
szInput2 db 'cp437ega.rom',0
szInput3 db 'cp437vga.rom',0
szInput4 db 'cp850cga.rom',0
szInput5 db 'cp850ega.rom',0
szInput6 db 'cp850vga.rom',0

dataseg
szOutput db 'vio593ec.dcp'
fhOutput dd 0

udataseg
ActionTaken dd ?
BytesDone dd ?

codeseg
proc MainRoutine c near
arg @@Mod,@@Nul,@@Env,@@Arg
; load code page 437 cga rom data
  call LoadRomData c,offset(szInput1),offset(cp437cga)
  test eax,eax ; return code
  jnz ReportResult ; error
; load code page 437 ega rom data
  call LoadRomData c,offset(szInput2),offset(cp437ega)
  test eax,eax ; return code
  jnz ReportResult ; error
; load code page 437 vga rom data
  call LoadRomData c,offset(szInput3),offset(cp437vga)
  test eax,eax ; return code
  jnz ReportResult ; error
; load code page 850 cga rom data
  call LoadRomData c,offset(szInput4),offset(cp850cga)
  test eax,eax ; return code
  jnz ReportResult ; error
; load code page 850 ega rom data
  call LoadRomData c,offset(szInput5),offset(cp850ega)
  test eax,eax ; return code
  jnz ReportResult ; error
; load code page 850 vga rom data
  call LoadRomData c,offset(szInput6),offset(cp850vga)
  test eax,eax ; return code
  jnz ReportResult ; error
; open default code page file
  call DosOpen c,offset(szOutput),offset(fhOutput),offset(ActionTaken),0,0,012h,0191h,0
  test eax,eax ; return code
  jnz ReportResult ; error
; write default code page file
  call DosWrite c,[fhOutput],offset(sysStart),sysTotal,offset(BytesDone)
; close default code page file
  mov ebx,eax ; return code
  call DosClose c,[fhOutput]
  mov eax,ebx ; return code
label ReportResult near
; return result and exit
  call DosExit c,1,eax
endp MainRoutine

dataseg
fhInput dd 0

codeseg
proc LoadRomData c near
arg @@FileName,@@TableHeader
; open rom data file
  call DosOpen c,[@@FileName],offset(fhInput),offset(ActionTaken),0,0,1,01A0h,0
  test eax,eax ; return code
  jnz EndLoadData ; error
; read rom data file
  mov esi,[@@TableHeader]
  movzx eax,[word(esi+16)] ; size
  lea esi,[esi+24] ; table data pointer
  call DosRead c,[fhInput],esi,eax,offset(BytesDone)
; close rom data file
  mov ebx,eax ; return code
  call DosClose c,[fhInput]
  mov eax,ebx ; return code
label EndLoadData near
  ret ; return
endp LoadRomData


dataseg
sysStart=$
include 'vio593ec.inc'
sysTotal=$-sysStart

end MainRoutine
