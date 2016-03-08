.386p
model flat
ideal

extrn DosClose:near
extrn DosExit:near
extrn DosOpen:near
extrn DosWrite:near

stack 8192

dataseg
szOutput db 'cty593ec.sys'
fhOutput dd 0

udataseg
ActionTaken dd ?
BytesDone dd ?

codeseg
proc MainRoutine c near
arg @@Mod,@@Nul,@@Env,@@Arg
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
sysStart=$
include 'cty593ec.inc'
sysTotal=$-sysStart

end MainRoutine
