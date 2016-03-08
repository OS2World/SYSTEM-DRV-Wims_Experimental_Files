cty593ec.exe: cty593ec.def cty593ec.obj
  link386 /a:16 /map /nod /nos cty593ec,cty593ec.exe,cty593ec,os2,cty593ec
  @pause

cty593ec.obj: cty593ec.asm cty593ec.inc cty593ec.mak
  tasm /la /m /oi cty593ec.asm,cty593ec.obj
