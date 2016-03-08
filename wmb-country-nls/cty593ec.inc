; 1st table - header
h1 db 255,'COUNTRY',1,0,0,0,0,0,0,0,1,0,1,t1-h1,0,0,0
vendor db '@#W.M.Brul:0.20160308#@cty593ec.sys',0
t1 dw t1records ; (size,country,codepage,offset)
; 1st table - Ecuador
  dw 12,593,437,0,0,ec1-h1,0
; 1st table - Ecuador
  dw 12,593,850,0,0,ec2-h1,0
; 1st table - Netherlands
  dw 12,031,437,0,0,nl1-h1,0
; 1st table - Netherlands
  dw 12,031,850,0,0,nl2-h1,0
; 1st table - United States
  dw 12,001,437,0,0,us1-h1,0
; 1st table - United States
  dw 12,001,850,0,0,us2-h1,0
t1records=($-t1)/(12+2)

; 2nd table - Ecuador
ec1 dw ec1entries ; (size,type,offset)
  dw 6,1,ec437-h1,0 ; country information
  dw 6,6,cs437-h1,0 ; collating sequence
  dw 6,2,cm437-h1,0 ; upper case mapping
  dw 6,4,cm437-h1,0 ; upper case mapping
  dw 6,5,fv-h1,0 ; filename verification
  dw 6,7,ev-h1,0 ; environmental vector
ec1entries=($-ec1)/(6+2)
; 2nd table - Ecuador
ec2 dw ec2entries ; (size,type,offset)
  dw 6,1,ec850-h1,0 ; country information
  dw 6,6,cs850-h1,0 ; collating sequence
  dw 6,2,cm850-h1,0 ; upper case mapping
  dw 6,4,cm850-h1,0 ; upper case mapping
  dw 6,5,fv-h1,0 ; filename verification
  dw 6,7,ev-h1,0 ; environmental vector
ec2entries=($-ec2)/(6+2)
; 2nd table - Netherlands
nl1 dw nl1entries ; (size,type,offset)
  dw 6,1,nl437-h1,0 ; country information
  dw 6,6,cs437-h1,0 ; collating sequence
  dw 6,2,cm437-h1,0 ; upper case mapping
  dw 6,4,cm437-h1,0 ; upper case mapping
  dw 6,5,fv-h1,0 ; filename verification
  dw 6,7,ev-h1,0 ; environmental vector
nl1entries=($-nl1)/(6+2)
; 2nd table - Netherlands
nl2 dw nl2entries ; (size,type,offset)
  dw 6,1,nl850-h1,0 ; country information
  dw 6,6,cs850-h1,0 ; collating sequence
  dw 6,2,cm850-h1,0 ; upper case mapping
  dw 6,4,cm850-h1,0 ; upper case mapping
  dw 6,5,fv-h1,0 ; filename verification
  dw 6,7,ev-h1,0 ; environmental vector
nl2entries=($-nl2)/(6+2)
; 2nd table - United States
us1 dw us1entries ; (size,type,offset)
  dw 6,1,us437-h1,0 ; country information
  dw 6,6,cs437-h1,0 ; collating sequence
  dw 6,2,cm437-h1,0 ; upper case mapping
  dw 6,4,cm437-h1,0 ; upper case mapping
  dw 6,5,fv-h1,0 ; filename verification
  dw 6,7,ev-h1,0 ; environmental vector
us1entries=($-us1)/(6+2)
; 2nd table - United States
us2 dw us2entries ; (size,type,offset)
  dw 6,1,us850-h1,0 ; country information
  dw 6,6,cs850-h1,0 ; collating sequence
  dw 6,2,cm850-h1,0 ; upper case mapping
  dw 6,4,cm850-h1,0 ; upper case mapping
  dw 6,5,fv-h1,0 ; filename verification
  dw 6,7,ev-h1,0 ; environmental vector
us2entries=($-us2)/(6+2)

;------------------------------------------------------------------------------
; CTYINFO - Country Information - DosGetCtryInfo()
;------------------------------------------------------------------------------
; country information - Equador
ec437 db 255,'CTYINFO',ec437size,0
  dw 593,437 ; country,codepage
  dw 1 ; date format <dd/mm/yy>
  db '$',0,0,0,0 ; currency
  db '.',0 ; thousands separator
  db ',',0 ; decimal separator
  db '/',0 ; date separator
  db ':',0 ; time separator
  db 2 ; currency format
  db 2 ; decimal place
  db 1 ; time format <24-hour>
  dw 2 dup(0) ; reserved
  db ';',0 ; data list separator
  dw 5 dup(0) ; reserved
ec437size=$-ec437-10
; country information - Equador
ec850 db 255,'CTYINFO',ec850size,0
  dw 593,850 ; country,codepage
  dw 1 ; date format <dd/mm/yy>
  db '$',0,0,0,0 ; currency
  db '.',0 ; thousands separator
  db ',',0 ; decimal separator
  db '/',0 ; date separator
  db ':',0 ; time separator
  db 2 ; currency format
  db 2 ; decimal place
  db 1 ; time format <24-hour>
  dw 2 dup(0) ; reserved
  db ';',0 ; data list separator
  dw 5 dup(0) ; reserved
ec850size=$-ec850-10
; country information - Netherlands
nl437 db 255,'CTYINFO',nl437size,0
  dw 031,437 ; country,codepage
  dw 1 ; date format <dd/mm/yy>
  db 'Ÿ',0,0,0,0 ; currency
  db '.',0 ; thousands separator
  db ',',0 ; decimal separator
  db '-',0 ; date separator
  db ':',0 ; time separator
  db 2 ; currency format
  db 2 ; decimal place
  db 1 ; time format <24-hour>
  dw 2 dup(0) ; reserved
  db ';',0 ; data list separator
  dw 5 dup(0) ; reserved
nl437size=$-nl437-10
; country information - Netherlands
nl850 db 255,'CTYINFO',nl850size,0
  dw 031,850 ; country,codepage
  dw 1 ; date format <dd/mm/yy>
  db 'Ÿ',0,0,0,0 ; currency
  db '.',0 ; thousands separator
  db ',',0 ; decimal separator
  db '-',0 ; date separator
  db ':',0 ; time separator
  db 2 ; currency format
  db 2 ; decimal place
  db 1 ; time format <24-hour>
  dw 2 dup(0) ; reserved
  db ';',0 ; data list separator
  dw 5 dup(0) ; reserved
nl850size=$-nl850-10
; country information - United States
us437 db 255,'CTYINFO',us437size,0
  dw 001,437 ; country,codepage
  dw 0 ; date format <mm/dd/yy>
  db '$',0,0,0,0 ; currency
  db ',',0 ; thousands separator
  db '.',0 ; decimal separator
  db '-',0 ; date separator
  db ':',0 ; time separator
  db 0 ; currency format
  db 2 ; decimal place
  db 0 ; time format <12-hour>
  dw 2 dup(0) ; reserved
  db ',',0 ; data list separator
  dw 5 dup(0) ; reserved
us437size=$-us437-10
; country information - United States
us850 db 255,'CTYINFO',us437size,0
  dw 001,850 ; country,codepage
  dw 0 ; date format <mm/dd/yy>
  db '$',0,0,0,0 ; currency
  db ',',0 ; thousands separator
  db '.',0 ; decimal separator
  db '-',0 ; date separator
  db ':',0 ; time separator
  db 0 ; currency format
  db 2 ; decimal place
  db 0 ; time format <12-hour>
  dw 2 dup(0) ; reserved
  db ',',0 ; data list separator
  dw 5 dup(0) ; reserved
us850size=$-us850-10

;------------------------------------------------------------------------------
; COLLATE - Collating Sequence - DosGetCollate()
;------------------------------------------------------------------------------
cs437 db 255,'COLLATE',00h,01h ; 256 bytes
  db 00h,'','','','','','','','',09h,0Ah,'','',0Dh,'','' ; 000-015
  db '','','','','','','','','','','','','','','','' ; 016-031
  db ' ','!','"','#','$','%','&',"'",'(',')','*','+',',','-','.','/' ; 032-047
  db '0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?' ; 048-063
  db '@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O' ; 064-079
  db 'P','Q','R','S','T','U','V','W','X','Y','Z','[','\',']','^','_' ; 080-095
  db '`','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O' ; 096-111
  db 'P','Q','R','S','T','U','V','W','X','Y','Z','{','|','}','~','' ; 112-127
  db 'C','U','E','A','A','A','A','C','E','E','E','I','I','I','A','A' ; 128-143
  db 'E','A','A','O','O','O','U','U','Y','O','U','$','$','$','$','$' ; 144-159
  db 'A','I','O','U','N','N','¦','§','?','©','ª','«','¬','!','"','"' ; 160-175
  db '°','±','²','³','´','µ','¶','·','¸','¹','º','»','¼','½','¾','¿' ; 176-191
  db 'À','Á','Â','Ã','Ä','Å','Æ','Ç','È','É','Ê','Ë','Ì','Í','Î','Ï' ; 192-207
  db 'Ğ','Ñ','Ò','Ó','Ô','Õ','Ö','×','Ø','Ù','Ú','Û','Ü','İ','Ş','ß' ; 208-223
  db 'à','S','â','ã','ä','å','æ','ç','è','é','ê','ë','ì','í','î','ï' ; 224-239
  db 'ğ','ñ','ò','ó','ô','õ','ö','÷','ø','ù','ú','û','ü','ı','ş','ÿ' ; 240-255
cs850 db 255,'COLLATE',00h,01h ; 256 bytes
  db 00h,'','','','','','','','',09h,0Ah,'','',0Dh,'','' ; 000-015
  db '','','','','','','','','','','','','','','','' ; 016-031
  db ' ','!','"','#','$','%','&',"'",'(',')','*','+',',','-','.','/' ; 032-047
  db '0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?' ; 048-063
  db '@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O' ; 064-079
  db 'P','Q','R','S','T','U','V','W','X','Y','Z','[','\',']','^','_' ; 080-095
  db '`','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O' ; 096-111
  db 'P','Q','R','S','T','U','V','W','X','Y','Z','{','|','}','~','' ; 112-127
  db 'C','U','E','A','A','A','A','C','E','E','E','I','I','I','A','A' ; 128-143
  db 'E','A','A','O','O','O','U','U','Y','O','U','O','$','O','','$' ; 144-159
  db 'A','I','O','U','N','N','¦','§','?','©','ª','«','¬','!','"','"' ; 160-175
  db '°','±','²','³','´','A','A','A','¸','¹','º','»','¼','$','$','¿' ; 176-191
  db 'À','Á','Â','Ã','Ä','Å','A','A','È','É','Ê','Ë','Ì','Í','Î','$' ; 192-207
  db 'D','D','E','E','E','$','I','I','I','Ù','Ú','Û','Ü','İ','I','ß' ; 208-223
  db 'O','S','O','O','O','O','æ','è','è','U','U','U','Y','Y','î','ï' ; 224-239
  db 'ğ','ñ','ò','ó','ô','õ','ö','÷','ø','ù','ú','û','ü','ı','ş','ÿ' ; 240-255

;------------------------------------------------------------------------------
; UCASE - Case Map - DosCaseMap()
;------------------------------------------------------------------------------
cm437 db 255,'UCASE  ',80h,00h ; 128 bytes
  db '€','š','','A','','A','','€','E','E','E','I','I','I','','' ; 128-143
  db '','’','’','O','™','O','U','U','Y','™','š','›','œ','','','Ÿ' ; 144-159
  db 'A','I','O','U','¥','¥','¦','§','¨','©','ª','«','¬','­','®','¯' ; 160-175
  db '°','±','²','³','´','µ','¶','·','¸','¹','º','»','¼','½','¾','¿' ; 176-191
  db 'À','Á','Â','Ã','Ä','Å','Æ','Ç','È','É','Ê','Ë','Ì','Í','Î','Ï' ; 192-207
  db 'Ğ','Ñ','Ò','Ó','Ô','Õ','Ö','×','Ø','Ù','Ú','Û','Ü','İ','Ş','ß' ; 208-223
  db 'à','á','â','ã','ä','å','æ','ç','è','é','ê','ë','ì','í','î','ï' ; 224-239
  db 'ğ','ñ','ò','ó','ô','õ','ö','÷','ø','ù','ú','û','ü','ı','ş','ÿ' ; 240-255
cm850 db 255,'UCASE  ',80h,00h ; 128 bytes
  db '€','š','','¶','','·','','€','Ò','Ó','Ô','Ø','×','Ş','','' ; 128-143
  db '','’','’','â','™','ã','ê','ë','Y','™','š','','œ','','','Ÿ' ; 144-159
  db 'µ','Ö','à','é','¥','¥','¦','§','¨','©','ª','«','¬','­','®','¯' ; 160-175
  db '°','±','²','³','´','µ','¶','·','¸','¹','º','»','¼','½','¾','¿' ; 176-191
  db 'À','Á','Â','Ã','Ä','Å','Ç','Ç','È','É','Ê','Ë','Ì','Í','Î','Ï' ; 192-207
  db 'Ñ','Ñ','Ò','Ó','Ô','Õ','Ö','×','Ø','Ù','Ú','Û','Ü','İ','Ş','ß' ; 208-223
  db 'à','á','â','ã','å','å','æ','è','è','é','ê','ë','í','í','î','ï' ; 224-239
  db 'ğ','ñ','ò','ó','ô','õ','ö','÷','ø','ù','ú','û','ü','ı','ş','ÿ' ; 240-255

;------------------------------------------------------------------------------
; FUCASE - Filename Upper Case - Case Preserving!
;------------------------------------------------------------------------------
fu db 255,'FUCASE ',80h,00h ; 128 bytes
  db '€','','‚','ƒ','„','…','†','‡','ˆ','‰','Š','‹','Œ','','','' ; 128-143
  db '','‘','’','“','”','•','–','—','˜','™','š','›','œ','','','Ÿ' ; 144-159
  db ' ','¡','¢','£','¤','¥','¦','§','¨','©','ª','«','¬','­','®','¯' ; 160-175
  db '°','±','²','³','´','µ','¶','·','¸','¹','º','»','¼','½','¾','¿' ; 176-191
  db 'À','Á','Â','Ã','Ä','Å','Æ','Ç','È','É','Ê','Ë','Ì','Í','Î','Ï' ; 192-207
  db 'Ğ','Ñ','Ò','Ó','Ô','Õ','Ö','×','Ø','Ù','Ú','Û','Ü','İ','Ş','ß' ; 208-223
  db 'à','á','â','ã','ä','å','æ','ç','è','é','ê','ë','ì','í','î','ï' ; 224-239
  db 'ğ','ñ','ò','ó','ô','õ','ö','÷','ø','ù','ú','û','ü','ı','ş','ÿ' ; 240-255

;------------------------------------------------------------------------------
; FCHAR - Filename Character - Verification
;------------------------------------------------------------------------------
fv db 255,'FCHAR  ',16h,00h ; 22 bytes
  dw 001,255 ; minimum,maximum possible
  db 00h,20h ; minimum,maximum forbidden
  db 02h,014 ; version,count forbidden
  db '."/\[]:|<>+=;,' ; characters

;------------------------------------------------------------------------------
; DBCS - Environmental Vector - DosGetDBCSEv()
;------------------------------------------------------------------------------
ev db 255,'DBCS   ',02h,00h ; 2 bytes
  db 00h,00h ; delimiter

