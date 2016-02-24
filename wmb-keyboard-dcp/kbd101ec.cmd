/* add SysGetMessage RexxUtil function */
call RxFuncAdd 'SysGetMessage','RexxUtil','SysGetMessage'

'kbd101ec.exe'
if RC<>0 then say SysGetMessage(RC, "OSO001.MSG")
else say 'The kbd101ec.dcp file has been written.'
'@pause'
