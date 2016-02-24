  db 08h,00h,1Bh,1Bh,00h,00h,00h ; ScanCode:01h <escape>
  db 04h,00h,'1','!','¿',00h,00h ; ScanCode:02h <1,!,¿>
  db 04h,00h,'2','@','¡',00h,00h ; ScanCode:03h <2,@,¡>
  db 04h,00h,'3','#','Ÿ',00h,00h ; ScanCode:04h <3,#,Ÿ>
  db 04h,00h,'4','$','√',00h,00h ; ScanCode:05h <4,$,√>
  db 04h,00h,'5','%','≈',00h,00h ; ScanCode:06h <5,%,≈>
  db 0Bh,00h,'6',04h,'¥',00h,00h ; ScanCode:07h <6,^,¥>
  db 04h,00h,'7','&','⁄',00h,00h ; ScanCode:08h <7,&,⁄>
  db 04h,00h,'8','*','¬',00h,00h ; ScanCode:09h <8,*,¬>
  db 04h,00h,'9','(','ø',00h,00h ; ScanCode:0Ah <9,(,ø>
  db 04h,00h,'0',')','˛',00h,00h ; ScanCode:0Bh <0,),˛>
  db 04h,00h,'-','_','ƒ',00h,00h ; ScanCode:0Ch <-,_,ƒ>
  db 04h,00h,'=','+','≥',00h,00h ; ScanCode:0Dh <=,+,≥>
  db 08h,00h,08h,7Fh,00h,00h,00h ; ScanCode:0Eh <backspace>
  db 04h,00h,09h,00h,00h,00h,00h ; ScanCode:0Fh <tab>
  db 01h,00h,'q','Q',00h,00h,00h ; ScanCode:10h <q,Q>
  db 01h,00h,'w','W',00h,00h,00h ; ScanCode:11h <w,W
  db 01h,1Eh,'e','E','’',00h,00h ; ScanCode:12h <e,E,’>
  db 01h,00h,'r','R',00h,00h,00h ; ScanCode:13h <r,R>
  db 01h,00h,'t','T',00h,00h,00h ; ScanCode:14h <t,T>
  db 01h,0Ch,'y','Y',00h,00h,00h ; ScanCode:15h <y,Y>
  db 01h,1Eh,'u','U',00h,00h,00h ; ScanCode:16h <u,U>
  db 01h,1Eh,'i','I',00h,00h,00h ; ScanCode:17h <i,I>
  db 01h,3Eh,'o','O',00h,00h,00h ; ScanCode:18h <o,O>
  db 01h,00h,'p','P',00h,00h,00h ; ScanCode:19h <p,P>
  db 04h,00h,'[','{',00h,00h,00h ; ScanCode:1Ah <[,{>
  db 04h,00h,']','}',00h,00h,00h ; ScanCode:1Bh <],}>
  db 08h,00h,0Dh,0Ah,00h,00h,00h ; ScanCode:1Ch <enter>
  db 0Ch,00h,04h,01h,04h,00h,00h ; ScanCode:1Dh <ctrl-left>
  db 01h,3Eh,'a','A',00h,00h,00h ; ScanCode:1Eh <a,A>
  db 01h,00h,'s','S',00h,00h,00h ; ScanCode:1Fh <s,S>
  db 01h,00h,'d','D',00h,00h,00h ; ScanCode:20h <d,D>
  db 01h,00h,'f','F',00h,00h,00h ; ScanCode:21h <f,F>
  db 01h,00h,'g','G',00h,00h,00h ; ScanCode:22h <g,G>
  db 01h,00h,'h','H',00h,00h,00h ; ScanCode:23h <h,H>
  db 01h,00h,'j','J',00h,00h,00h ; ScanCode:24h <j,J>
  db 01h,00h,'k','K',00h,00h,00h ; ScanCode:25h <k,K>
  db 01h,00h,'l','L',00h,00h,00h ; ScanCode:26h <l,L>
  db 04h,00h,';',':',00h,00h,00h ; ScanCode:27h <;,:>
  db 0Bh,00h,03h,02h,00h,00h,00h ; ScanCode:28h <',">
  db 0Bh,00h,01h,05h,00h,00h,00h ; ScanCode:29h <`,~>
  db 0Ch,00h,02h,00h,00h,00h,00h ; ScanCode:2Ah <shift-left>
  db 04h,00h,'\','|',00h,00h,00h ; ScanCode:2Bh <\,|>
  db 01h,00h,'z','Z',00h,00h,00h ; ScanCode:2Ch <z,Z>
  db 01h,00h,'x','X',00h,00h,00h ; ScanCode:2Dh <x,X>
  db 01h,08h,'c','C',00h,00h,00h ; ScanCode:2Eh <c,C>
  db 01h,00h,'v','V',00h,00h,00h ; ScanCode:2Fh <v,V>
  db 01h,00h,'b','B',00h,00h,00h ; ScanCode:30h <b,B>
  db 01h,20h,'n','N',00h,00h,00h ; ScanCode:31h <n,N>
  db 01h,00h,'m','M',00h,00h,00h ; ScanCode:32h <m,M>
  db 04h,00h,',','<',00h,00h,00h ; ScanCode:33h <,,<>
  db 04h,00h,'.','>',00h,00h,00h ; ScanCode:34h <.,>>
  db 04h,00h,'/','?',00h,00h,00h ; ScanCode:35h </,?>
  db 0Ch,00h,01h,00h,00h,00h,00h ; ScanCode:36h <shift-right>
  db 09h,00h,'*',72h,00h,00h,00h ; ScanCode:37h <keypad *>
  db 0Eh,00h,08h,02h,08h,00h,00h ; ScanCode:38h <alt-left>
  db 04h,3Eh,' ',' ',00h,00h,00h ; ScanCode:39h <spacebar>
  db 10h,00h,40h,40h,40h,00h,00h ; ScanCode:3Ah <capslock>
  db 06h,00h,001,00h,00h,00h,00h ; ScanCode:3Bh <F1>
  db 06h,00h,002,00h,00h,00h,00h ; ScanCode:3Ch <F2>
  db 06h,00h,003,00h,00h,00h,00h ; ScanCode:3Dh <F3>
  db 06h,00h,004,00h,00h,00h,00h ; ScanCode:3Eh <F4>
  db 06h,00h,005,00h,00h,00h,00h ; ScanCode:3Fh <F5>
  db 06h,00h,006,00h,00h,00h,00h ; ScanCode:40h <F6>
  db 06h,00h,007,00h,00h,00h,00h ; ScanCode:41h <F7>
  db 06h,00h,008,00h,00h,00h,00h ; ScanCode:42h <F8>
  db 06h,00h,009,00h,00h,00h,00h ; ScanCode:43h <F9>
  db 06h,00h,010,00h,00h,00h,00h ; ScanCode:44h <F10>
  db 0Fh,00h,20h,20h,20h,00h,00h ; ScanCode:45h <numlock>
  db 11h,00h,10h,10h,10h,00h,00h ; ScanCode:46h <scrolllock>
  db 07h,00h,00h,'7',00h,00h,00h ; ScanCode:47h <keypad><7,home>
  db 07h,00h,01h,'8',00h,00h,00h ; ScanCode:48h <keypad><8,up>
  db 07h,00h,02h,'9',00h,00h,00h ; ScanCode:49h <keypad><9,pgup>
  db 07h,00h,03h,'-',00h,00h,00h ; ScanCode:4Ah <keypad><-,->
  db 07h,00h,04h,'4',00h,00h,00h ; ScanCode:4Bh <keypad><4,left>
  db 07h,00h,05h,'5',00h,00h,00h ; ScanCode:4Ch <keypad><5>
  db 07h,00h,06h,'6',00h,00h,00h ; ScanCode:4Dh <keypad><6,right>
  db 07h,00h,07h,'+',00h,00h,00h ; ScanCode:4Eh <keypad><+,+>
  db 07h,00h,08h,'1',00h,00h,00h ; ScanCode:4Fh <keypad><1,end>
  db 07h,00h,09h,'2',00h,00h,00h ; ScanCode:50h <keypad><2,down>
  db 07h,00h,0Ah,'3',00h,00h,00h ; ScanCode:51h <keypad><3,pgdn>
  db 07h,00h,0Bh,'0',00h,00h,00h ; ScanCode:52h <keypad><0,ins>
  db 07h,00h,0Ch,'.',00h,00h,00h ; ScanCode:53h <keypad><.,del>
  db 0Ah,00h,00h,80h,80h,00h,00h ; ScanCode:54h <alt><sysrq>
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:55h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:56h
  db 06h,00h,011,00h,00h,00h,00h ; ScanCode:57h <F11>
  db 06h,00h,012,00h,00h,00h,00h ; ScanCode:58h <F12>
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:59h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:5Ah
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:5Bh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:5Ch
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:5Dh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:5Eh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:5Fh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:60h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:61h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:62h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:63h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:64h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:65h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:66h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:67h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:68h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:69h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:6Ah
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:6Bh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:6Ch
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:6Dh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:6Eh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:6Fh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:70h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:71h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:72h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:73h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:74h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:75h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:76h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:77h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:78h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:79h
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:7Ah
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:7Bh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:7Ch
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:7Dh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:7Eh
  db 00h,00h,00h,00h,00h,00h,00h ; ScanCode:7Fh
; AccentEntry:02h
  db '`',29h,4 dup(0) ; <accent><scancode>
  db 'a','Ö','e','ä','i','ç','o','ï','u','ó'
  db 'A','∑','E','‘','I','ﬁ','O','„','U','Î'
  db ' ','`',18 dup(0) ; <space><accent>
; AccentEntry:04h
  db '"',28h,4 dup(0) ; <accent><scancode>
  db 'a','Ñ','e','â','i','ã','o','î','u','Å','y','ò'
  db 'A','é','E','”','I','ÿ','O','ô','U','ö' ;
  db ' ','"',16 dup(0) ; <space><accent>
; AccentEntry:08h
  db "'",28h,4 dup(0) ; <accent><scancode>
  db 'a','†','c','á','e','Ç','i','°','o','¢','u','£','y','Ï'
  db 'A','µ','C','Ä','E','ê','I','÷','O','‡','U','È','Y','Ì'
  db ' ',"'",10 dup(0) ; <space><accent>
; AccentEntry:10h
  db '^',07h,4 dup(0) ; <accent><scancode>
  db 'a','É','e','à','i','å','o','ì','u','ñ'
  db 'A','∂','E','“','I','◊','O','‚','U','Í'
  db ' ','^',18 dup(0) ; <space><accent>
; AccentEntry:20h
  db '~',29h,4 dup(0) ; <accent><scancode>
  db 'a','∆','o','‰','n','§'
  db 'A','«','O','Â','N','•'
  db ' ','~',26 dup(0) ; <space><accent>
; AccentEntry:40h
  db 46 dup(0) ; <unused>
; AccentEntry:80h
  db 46 dup(0) ; <unused>
