kbd101ec.exe: kbd101ec.def kbd101ec.obj
  link386 /a:16 /map /nod /nos kbd101ec,kbd101ec.exe,kbd101ec,os2,kbd101ec
  @pause

kbd101ec.obj: kbd101ec.asm kbd101ec.mak kbd103us.inc kbd274br.inc
  tasm /la /m /oi kbd101ec.asm,kbd101ec.obj
