/* add SysGetMessage RexxUtil function */
call RxFuncAdd 'SysGetMessage','RexxUtil','SysGetMessage'

'cty593ec.exe'
if RC<>0 then say SysGetMessage(RC, "OSO001.MSG")
else say 'The cty593ec.sys file has been written.'
'@pause'
