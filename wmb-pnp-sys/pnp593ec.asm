.386p
model use16 small
ideal

dataseg
; device driver header
hdrlnk dd 0FFFFFFFFh
hdratr dw 8080h
hdrstr dw offset(strategy)
hdridc dw 0
hdrnam db "$$STUB$$"
hdrres db 8 dup(0)

codeseg
proc strategy far
; set init failure status code
  mov ax,8115h ; error/done/quiet
  mov [es:bx+3],ax ; status code
; prepare unload device driver
  sub ax,ax ; ensure zeroes
  mov [es:bx+13],al ; data byte
  mov [es:bx+14],ax ; code size
  mov [es:bx+16],ax ; data size
; return hardware absent
  inc ax ; return code
  ret ; return
endp strategy
end
