moucalls.dll: moucalls.def moucalls.obj
  link386 /a:16 /map /nod /nos moucalls,moucalls.dll,moucalls,os2,moucalls
  @pause

moucalls.obj: moucalls.asm moucalls.mak
  tasm /la /m /oi moucalls.asm,moucalls.obj
