import std/syncio, honeycomb
# 05 80 00 00
# 0B 00 04 00 0B 01
# 01 0B 01 
# 0B 00 04 00 0B 01 

#proc Parser*(scr:string, buffer:string, jsonTemp:string): void =
#let parser = npeg.peg "text":
#  bytesP <-  "\x05\x80\x00\x00"
#  finishLine <- '\x02'
#  opByte <- '\x01'
#  controlBytes <- {'\x01', '\x02'}
#  search <- @bytesP
 # captureNotFL <- >(*(!finishLine * 1 ) )
 # text <- +(search * captureNotFL ) 

#let filterP = peg "filter":
#  opByte <- '\x01'
#  capture <- >(*(!opByte * 1))
 # search <- @opByte
#  filter <- +(capture * search)

var Fname:string = "tc1c.scr"

let scrFile = readFile(Fname)

#let buffStr = parser.match(scrFile).captures

#writefile("buffScr.txt", $buffStr)
#var jsonStr:string
#echo buffstr





#=============================================================================

#=============================================================================
