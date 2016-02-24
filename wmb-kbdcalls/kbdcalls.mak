kbdcalls.dll: kbdcalls.def kbdcalls.obj
  link386 /a:16 /map /nod /nos kbdcalls,kbdcalls.dll,kbdcalls,os2,kbdcalls
  @pause

kbdcalls.obj: kbdcalls.asm kbdcalls.mak
  tasm /la /m /oi kbdcalls.asm,kbdcalls.obj
