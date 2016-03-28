h0 dd cp437cga-h0
  dw 8,(vendor-$)/4 ; total number of tables
  dd cp437cga-h0,cp437ega-h0,cp437ego-h0,cp437vga-h0,cp437vgo-h0 ; 5 tables
  dd cp850cga-h0,cp850ega-h0,cp850ego-h0,cp850vga-h0,cp850vgo-h0 ; 5 tables
vendor db '@#W.M.Brul:0.20160327#@vio593ec.dcp',0

; code page 437 - font 8*08 cga
cp437cga dw 24+256*08,24,437,0,0,8+256*08,0,24,256*08,256,0,255
  db 256*08 dup(?) ; cp437cga.rom

; code page 437 - font 8*14 ega
cp437ega dw 24+256*14,24,437,0,0,8+256*14,0,24,256*14,256,0,255
  db 256*14 dup(?) ; cp437ega.rom

; code page 437 - font 9*14 ego
cp437ego dw 24+1*15,24,437,0,3,9+256*14,8+256*14,24,1*15,1,0,255
  db 255,14 dup(0) ; overlay highest code point

; code page 437 - font 8*16 vga
cp437vga dw 24+256*16,24,437,0,0,8+256*16,0,24,256*16,256,0,255
  db 256*16 dup(?) ; cp437ega.rom

; code page 437 - font 9*16 vgo
cp437vgo dw 24+1*17,24,437,0,3,9+256*16,8+256*16,24,1*17,1,0,255
  db 255,16 dup(0) ; overlay highest code point

; code page 850 - font 8*08 cga
cp850cga dw 24+256*08,24,850,0,0,8+256*08,0,24,256*08,256,0,255
  db 256*08 dup(?) ; cp850cga.rom

; code page 850 - font 8*14 ega
cp850ega dw 24+256*14,24,850,0,0,8+256*14,0,24,256*14,256,0,255
  db 256*14 dup(?) ; cp850ega.rom

; code page 850 - font 9*14 ego
cp850ego dw 24+1*15,24,850,0,3,9+256*14,8+256*14,24,1*15,1,0,255
  db 255,14 dup(0) ; overlay highest code point

; code page 850 - font 8*16 vga
cp850vga dw 24+256*16,24,850,0,0,8+256*16,0,24,256*16,256,0,255
  db 256*16 dup(?) ; cp850ega.rom

; code page 850 - font 9*16 vgo
cp850vgo dw 24+1*17,24,850,0,3,9+256*16,8+256*16,24,1*17,1,0,255
  db 255,16 dup(0) ; overlay highest code point
