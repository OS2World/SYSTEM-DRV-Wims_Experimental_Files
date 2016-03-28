viotbl.dcp with free source code. 

Supports code pages 437 and 850.
I used the Display Font Editer for OS/2 v0.02 (pmfoed002a.zip on hobbes) to edit the fonts.

When you run vio593.cmd then it invokes vio593.exe which in turn will read the six cp*.rom files and write the resultant vio593ec.dcp file. The content of the cp*.rom files is used unchanged and the added header data defines these as the 8*8, 8*14, 9*14, 8*16, 9*16 fonts for code pages 437 and 850.

cp437cga.rom and cp850cga.rom contain 8*8 rom fonts (like from a cga adapter).
cp437ega.rom and cp850ega.rom contain 8*14 rom fonts (like from a ega adapter).
cp437vga.rom and cp850vga.rom contain 8*16 rom fonts (like from a vga adapter).