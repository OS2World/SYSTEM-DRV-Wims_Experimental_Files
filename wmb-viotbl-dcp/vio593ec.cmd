/* add SysGetMessage RexxUtil function */
call RxFuncAdd 'SysGetMessage','RexxUtil','SysGetMessage'

'vio593ec.exe'
if RC<>0 then say SysGetMessage(RC, "OSO001.MSG")
else say 'The vio593ec.dcp file has been written.'
'@pause'
