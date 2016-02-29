.386p
model flat
ideal

extrn DosClose:near
extrn DosExit:near
extrn DosOpen:near
extrn DosWrite:near

stack 8192

dataseg
szOutput db 'kbd101ec.dcp'
fhOutput dd 0

udataseg
ActionTaken dd ?
BytesDone dd ?

codeseg
proc MainRoutine c near
arg @@Mod,@@Nul,@@Env,@@Arg
; open default code page file
  call DosOpen c,offset(szOutput),offset(fhOutput),offset(ActionTaken),0,0,012h,0191h,0
  test eax,eax ; return code
  jnz ReportResult ; error
; write default code page file
  call DosWrite c,[fhOutput],offset(dcpStart),dcpTotal,offset(BytesDone)
; close default code page file
  mov ebx,eax ; return code
  call DosClose c,[fhOutput]
  mov eax,ebx ; return code
label ReportResult near
; return result and exit
  call DosExit c,1,eax
endp MainRoutine

struc entry
; index table entry
sf dw ? ; size/linkage flags
cc dw ? ; country/language code
cs db '104 ' ; country suffix
w1 dw 1 dup(0) ; reserved
cp dw ? ; code page number
kt dw 1 ; enhanced keyboard
ho dd ? ; header offset
ends entry

dataseg
dcpStart dd dcpCount-dcpStart
vendor db '@#W.M.Brul:1.20160229#@kbd101ec.dcp',0
dcpCount dw (dcpEmpty-Entry1)/18 ; index entries
Entry1 entry {sf=12h,cc='BR',cs='274',cp=437,ho=Table1-dcpStart}
Entry2 entry {sf=00h,cc='BR',cs='274',cp=850,ho=Table2-dcpStart}
Entry3 entry {sf=01h,cc='US',cs='103',cp=437,ho=Table3-dcpStart}
Entry4 entry {sf=01h,cc='US',cs='103',cp=850,ho=Table4-dcpStart}
dcpEmpty dw 0 ; end of index

struc header
; xlate table header
cp dw ? ; code page number
tf dd ? ; xlate table flags
kt dd 1 ; enhanced keyboard
ts dw 40+173*7 ; xlate table size
ec dw 127 ; xlate table entry count
ew dw 7 ; xlate table entry width
cc dw ? ; country/language code
tt dw 1 ; xlate table type OS/2
cs db '104 ' ; country suffix
w8 dw 8 dup(0) ; reserved
ends header

dataseg
; default br274 table for codepage 437
Table1 header {cp=437,cc='BR',cs='274',tf=50h}
include 'kbd274br.inc'
; default br274 table for codepage 850
Table2 header {cp=850,cc='BR',cs='274',tf=54h}
include 'kbd274br.inc'
; default us103 table for codepage 437
Table3 header {cp=437,cc='US',cs='103',tf=10h}
include 'kbd103us.inc'
; default us103 table for codepage 850
Table4 header {cp=850,cc='US',cs='103',tf=14h}
include 'kbd103us.inc'
dcpTotal=$-dcpStart

end MainRoutine
