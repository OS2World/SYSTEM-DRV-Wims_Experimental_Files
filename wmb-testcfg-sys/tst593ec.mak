tst593ec.sys: tst593ec.def tst593ec.obj
  link /a:2 /map /nod tst593ec,tst593ec.sys,,os2,tst593ec
  pause

tst593ec.obj: tst593ec.asm tst593ec.mak
  tasm /la /m3 /oi tst593ec.asm,tst593ec.obj
