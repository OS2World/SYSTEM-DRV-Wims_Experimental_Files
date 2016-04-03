pnp593ec.sys: pnp593ec.def pnp593ec.obj
  link /a:2 /map /nod pnp593ec,pnp593ec.sys,,os2,pnp593ec
  pause

pnp593ec.obj: pnp593ec.asm pnp593ec.mak
  tasm /la /oi pnp593ec.asm,pnp593ec.obj
