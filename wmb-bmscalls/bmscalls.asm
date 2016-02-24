.386p
model use16 small
ideal

extrn Dos16GetModName:far
extrn Dos16Write:far

cchMaxPath=260 ; bsedos.h
cchMaxText=cchMaxPath+1

dataseg
BytesWritten dw ?
ModName db cchMaxText dup(?)

codeseg
proc InitBmsCalls far
; obtain fully qualified module name
  call Dos16GetModName pascal,ax,cchMaxPath,ds,offset(ModName)
; determine module name length
  mov ax,ds ; data selector
  mov es,ax ; data selector
  mov di,offset(ModName)
  sub ax,ax ; zero terminator
  mov cx,cchMaxPath ; source
  mov dx,cchMaxText ; report
  cld ; increment index registers
  repne scasb ; find zero terminator
  mov [word(ds:di-1)],0A0Dh ; crlf
  sub dx,cx ; module name length
; report fully qualified module name
  call Dos16Write pascal,1,ds,offset(ModName),dx,ds,offset(BytesWritten)
  mov al,1 ; success
  ret ; return
endp InitBmsCalls

end InitBmsCalls
