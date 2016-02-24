bmscalls.dll: bmscalls.def bmscalls.obj
  link386 /a:16 /map /nod /nos bmscalls,bmscalls.dll,bmscalls,os2,bmscalls
  @pause

bmscalls.obj: bmscalls.asm bmscalls.mak
  tasm /la /m /oi bmscalls.asm,bmscalls.obj
