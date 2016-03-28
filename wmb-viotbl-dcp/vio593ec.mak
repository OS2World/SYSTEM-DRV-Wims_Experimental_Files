vio593ec.exe: vio593ec.def vio593ec.obj
  link386 /a:16 /map /nod /nos vio593ec,vio593ec.exe,vio593ec,os2,vio593ec
  @pause

vio593ec.obj: vio593ec.asm vio593ec.inc vio593ec.mak
  tasm /la /m /oi vio593ec.asm,vio593ec.obj
