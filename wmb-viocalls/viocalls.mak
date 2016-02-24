viocalls.dll: viocalls.def viocalls.obj
  link386 /a:16 /map /nod /nos viocalls,viocalls.dll,viocalls,os2,viocalls
  @pause

viocalls.obj: viocalls.asm viocalls.mak
  tasm /la /m /oi viocalls.asm,viocalls.obj
