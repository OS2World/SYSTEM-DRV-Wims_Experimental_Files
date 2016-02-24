bvscalls.dll: bvscalls.def bvscalls.obj
  link386 /a:16 /map /nod /nos bvscalls,bvscalls.dll,bvscalls,os2,bvscalls
  @pause

bvscalls.obj: bvscalls.asm bvscalls.mak
  tasm /la /m /oi bvscalls.asm,bvscalls.obj
