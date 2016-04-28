.386p
model use16 small
ideal

dataseg
; device driver header
hdrlnk dd 0FFFFFFFFh
hdratr dw 8080h
hdrstr dw offset(strategy)
hdridc dw 0
hdrnam db "TESTCFG$"
hdrres db 8 dup(0)

dataseg
; device helper
devhlp dd 0

codeseg
proc ObtainBios c near
uses bx,ds,es ; workers
; check parm buffer size
  cmp [word(es:bx+25)],10
  jb EndObtain ; failure
; access parameter buffer
  lfs si,[dword(es:bx+15)]
; obtain copy data length
  mov cx,[word(fs:si+8)]
; check data buffer size
  cmp [word(es:bx+27)],cx
  jnb EndFixLength ; ok
  mov cx,[word(es:bx+27)]
  mov [word(fs:si+8)],cx
label EndFixLength near
; address rom data target
  les di,[dword(es:bx+19)]
; address rom data source
  mov ax,[word(fs:si+6)]
  mov bx,[word(fs:si+4)]
; check physical address
  cmp ax,0Ch ; minimum
  jb EndObtain ; failure
  cmp ax,0Fh ; maximum
  ja EndObtain ; failure
; respect 1MB boundary
  jne ProperLength
  mov dx,bx ; offset
  add dx,cx ; length
  jnc ProperLength
  sbb cx,dx ; adjust
label ProperLength near
  mov dx,0015h ; phystovirt
  call [devhlp] ; helper
  mov ax,810Ch ; error/done/general
  jc EndObtain ; failure
  cld ; increment indexes
  rep movsb ; copy rom data
; set success status code
  mov ax,0100h ; ok/done
label EndObtain near
  ret ; return
endp ObtainBios

codeseg
proc strategy far
; set parm failure status code
  mov ax,8113h ; error/done/parm
; obtain driver request code
  mov cl,[es:bx+02] ; request
; handle dosdevioctl request
  cmp cl,10h ; dosdevioctl
  jne NotDosDevIoctl ; other
; switch function/category
  mov dx,[word(es:bx+13)]
  cmp dx,4080h
  jne EndStrategy
label DoMemory near
  call ObtainBios
  jmp EndStrategy
label NotDosDevIoctl near
; handle initialization
  cmp cl,00h ; initialize
  je Initialize ; once
label EndStrategy near
; return status code
  mov [es:bx+03],ax
  ret ; return
endp strategy

codeseg
; end of code segment
label EndCode near

dataseg
; end of data segment
label EndData byte

codeseg
proc Initialize near
; save devhlp entry point
  mov ax,[es:bx+14]
  mov [word(devhlp+00)],ax
  mov ax,[es:bx+16]
  mov [word(devhlp+02)],ax
; reduce module size
  mov ax,offset(EndCode)
  mov [es:bx+14],ax
  mov ax,offset(EndData)
  mov [es:bx+16],ax
; set success status code
  mov ax,0100h ; ok/done
  jmp EndStrategy
endp Initialize

end
