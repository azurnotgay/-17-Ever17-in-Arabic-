import winim;
import npeg;


{.passC: "-Iminhook/src".}
{.passC: "-Iminhook/src/hde".}
{.passC: "-Iminhook/include".}
{.compile: "minhook/src/buffer.c".}
{.compile: "minhook/src/hook.c".}
{.compile: "minhook/src/trampoline.c".}
{.compile: "minhook/src/hde/hde32.c".}
{.passL: "-L. libfribidi.a".};
# ======================================================================================

# ======================================================================================



# ======================================================================================

type
  FriBidiChar* = uint32
  FriBidiParType* = uint32
  FriBidiStrIndex* = cint
  FriBidiFlags* = uint32
  FriBidiLevel* = cchar
  FriBidiArProps* = uint8
  FriBidiJoiningType* = uint8



const
  FRIBIDI_PAR_RTL*: FriBidiParType = 0x00000010
  FRIBIDI_PAR_LTR*: FriBidiParType = 0x00000020
  FRIBIDI_PAR_ON*: FriBidiParType = 0x00000040
  FRIBIDI_FLAGS_ARABIC*: FriBidiParType = 0x00000006

proc fribidi_shape_arabic*(flags: FriBidiFlags, embedding_levels: ptr FriBidiLevel, len: FriBidiStrIndex, ar_props: ptr FriBidiArProps, str: ptr FriBidiChar) {.cdecl, importc: "fribidi_shape_arabic".}

proc fribidi_log2vis*(STR: ptr FriBidiChar, len: FriBidiStrIndex, pbase_dir: ptr FriBidiParType, visual_str: ptr FriBidiChar, positions_L_to_V: ptr FriBidiStrIndex, positions_V_to_L: ptr FriBidiStrIndex, embedded_levels: ptr FriBidiLevel): FriBidiLevel {.importc, cdecl.}

proc fribidi_shape*(flags: FriBidiFlags, embedding_levels: ptr FriBidiLevel, len: FriBidiStrIndex, ar_props: ptr FriBidiArProps, str: ptr FriBidiChar): void {.cdecl, importc: "fribidi_shape".}





# ======================================================================================

type
  MH_STATUS* {.size: sizeof(cint).} = enum
    MH_OK = 0
    MH_UNKNOWN = -1
    MH_ERROR_ALREADY_INITIALIZED
    MH_ERROR_NOT_INITIALIZED
    MH_ERROR_ALREADY_CREATED
    MH_ERROR_NOT_CREATED
    MH_ERROR_DISABLED
    MH_ERROR_NOT_EXECUTABLE
    MH_ERROR_ENABLED
    MH_ERROR_UNSUPPORTED_FUNCTION
    MH_ERROR_MEMORY_ALLOC
    MH_ERROR_MEMORY_PROTECT
    MH_ERROR_MODULE_NOT_FOUND
    MH_ERROR_FUNCTION_NOT_FOUND





proc MH_Initialize*(): MH_STATUS {.importc: "MH_Initialize", header: "MinHook.h", stdcall.}
proc MH_CreateHook*(pTarget: pointer, pDetour: pointer, ppOriginal: ptr pointer): MH_STATUS {.importc: "MH_CreateHook", header: "MinHook.h", stdcall.}
proc MH_EnableHook*(pTarget: pointer): MH_STATUS {.importc: "MH_EnableHook", header: "MinHook.h", stdcall.}

# ===========================================================================================

discard MH_Initialize()
#type
#  originalFunc = proc(p1:uint32, p2:ptr int, p3, p4:uint32, p5:uint32, p6:uint32, p7:uint32, p8:uint32, p9:uint32, p10:int32, p11:HGDIOBJ , p12, p13:int32, p14:int32, p15:ptr int32, p16, p17:ptr int32): void {.cdecl.}


# ===========================================================================================

# ===========================================================================================
proc ANSItoWide*(text: cstring): seq[WCHAR] =
  if text.len == 0:
    return @[WCHAR(0)]
  let charCount:int32 = MultiByteToWideChar(1256, 0, text, -1, nil, 0)
  if charCount == 0:
    raise newException(ValueError, "ERROR")
  result = newSeq[WCHAR](charCount + 1)

  MultiByteToWideChar(1256, 0, text, text.len.cint , cast[LPWSTR](addr result[0]), charCount)

  result[charCount] = WCHAR(0)




proc Utf32to16*(utf32Seq: seq[FriBidiChar]): seq[WCHAR] =
  var resultSeq = newSeq[WCHAR]()


  var i = 0
  let SeqLen = utf32Seq.len
  while i < SeqLen:
    var codePoint: uint32 = utf32Seq[i]
    if codePoint <= 0xFFFF:
      resultSeq.add(uint16(codePoint))
    elif codePoint > 0xFFFF:
      let adjusted = codePoint - 0x10000
      let highSurrogate = uint16((adjusted shr 10) + 0xD800)
      let lowSurrogate = uint16((adjusted and 0x3FF) + 0xDC00)
      resultSeq.add(highSurrogate)
      resultSeq.add(lowSurrogate)
  
  return resultSeq
      



proc shapingLetters*(textformed: seq[WCHAR]): seq[WCHAR] =
  var resultSeq: seq[FriBidiChar] = @[]
  var i:int32 = 0
  while i < textformed.len:
    var unit1: uint16 = textformed[i]
    if unit1 >= 0xD800 and unit1 <= 0xDBFF and i + 1 < textformed.len:
      var unit2:uint16 = textformed[i + 1]
      if unit2 >= 0xDC00 and unit2 <= 0xDFFF:
        let highSurrogate = FriBidiChar(unit1 - 0xD800)
        let LowSurrogate = FriBidiChar(unit2 - 0xDC00)
        let codePoint: FriBidiChar = (highSurrogate shl 10) + LowSurrogate + 0x10000
        resultSeq.add(codepoint)
        i += 2
      else:
        raise newException(ValueError, "FUCK AI")
    else:
       resultSeq.add(unit1)
       i += 1
  let textLen = resultSeq.len
  if textLen == 0:
    return @[]

  var Buffer_shapedstr = newSeq[FriBidiChar](textLen)
 
  var base_dir = FRIBIDI_PAR_RTL
  let log2visSUCCESS = fribidi_log2vis(resultSeq[0].addr, textLen.cint , base_dir.addr , Buffer_shapedstr[0].addr, cast[ptr FriBidiStrIndex](nil), cast[ptr FriBidiStrIndex](nil), cast[ptr FriBidiLevel](nil))
  fribidi_shape(0, cast[ptr FriBidiLevel](nil), textLen.cint, cast[ptr FriBidiArProps](nil), Buffer_shapedstr[0].addr)

  

  return Utf32to16(Buffer_shapedstr)



#proc MH_log(status: MH_STATUS): string =
#  case status
#  of MH_OK: "MH_OK"
#  of MH_UNKNOWN: "MH_UNKNOWN"
#  of MH_ERROR_ALREADY_INITIALIZED: "MH_ERROR_ALREADY_INITIALIZED"
#  of MH_ERROR_NOT_INITIALIZED: "MH_ERROR_NOT_INITIALIZED"
#  of MH_ERROR_ALREADY_CREATED: "MH_ERROR_ALREADY_CREATED"
#  of MH_ERROR_NOT_CREATED: "MH_ERROR_NOT_CREATED"
#  of MH_ERROR_DISABLED: "MH_ERROR_DISABLED"
#  of MH_ERROR_NOT_EXECUTABLE: "MH_ERROR_NOT_EXECUTABLE"
#  of MH_ERROR_ENABLED: "MH_ERROR_ENABLED"
#  of MH_ERROR_UNSUPPORTED_FUNCTION: "MH_ERROR_UNSUPPORTED_FUNCTION"
#  of MH_ERROR_MEMORY_ALLOC: "MH_ERROR_MEMORY_ALLOC"
#  of MH_ERROR_MEMORY_PROTECT: "MH_ERROR_MEMORY_PROTECT"
#  of MH_ERROR_MODULE_NOT_FOUND: "MH_ERROR_MODULE_NOT_FOUND"
#  of MH_ERROR_FUNCTION_NOT_FOUND: "MH_ERROR_FUNCTION_NOT_FOUND"
  




let baseAddress = cast[UINT_PTR](GetModuleHandleA(nil)) 

#type
#  FUN_0042d6f0 = proc(p1:int32, p2:ptr int32, p3:byte, p4:byte, p5:byte): uint32 {.cdecl.}

# proc CallFUN_0042d6f0(p1: int32, p2:ptr int32, p3:byte, p4:byte, p5:byte): uint32 = 

#  let funcOffset:int32 = 0x0042d6f0 - 0x400000
#  let FUN_0042d6f0_Address:int32 =  int32(funcOffset + baseAddress)
#  
#  let FUNC_0042d6f0 = cast[FUN_0042d6f0](FUN_0042d6f0_Address)
#  let resultFunc = FUNC_0042d6f0(p1,p2,p3,p4,p5)
#  return resultFunc
  




# let originalFuncaddr:ptr int32 = cast[ptr int32](baseAddress + 0x1524c)
# proc MyRenderLoop*(p1:uint32, p2:ptr int, p3, p4:uint32, p5:uint32, p6:uint32, p7:uint32, p8:uint32, p9:uint32, p10:int32, p11:var HGDIOBJ , p12, p13:int32, p14:int32, p15:ptr int32, p16, p17:ptr int32): void =
#  asm """
#  PUSH EDI
#  PUSH EBP
#  """

#  let DAT_00458dd4:ptr int32 = cast[ptr int32]((0x00458dd4 - 0x00400000) + baseAddress)
#  let DAT_007ca340:ptr int32 = cast[ptr int32]((0x007ca340 - 0x00400000) + baseAddress)
#  let DAT_00458f00:ptr int32 = cast[ptr int32]((0x00458f00 - 0x00400000) + baseAddress)
#  let DAT_00458fe0:ptr int32 = cast[ptr int32]((0x00458fe0 - 0x00400000) + baseAddress)
#  let DAT_00458f60:ptr int32 = cast[ptr int32]((0x00458f60 - 0x00400000) + baseAddress)
#  let DAT_0045996c:ptr int32 = cast[ptr int32]((0x0045996c - 0x00400000) + baseAddress)
#  let DAT_00459968:ptr int32 = cast[ptr int32]((0x00459968 - 0x00400000) + baseAddress)
#  let DAT_00459960:ptr int32 = cast[ptr int32]((0x00459960 - 0x00400000) + baseAddress)
#  let DAT_00459964:ptr int32 = cast[ptr int32]((0x00459964 - 0x00400000) + baseAddress)
#  let DAT_00458c24:ptr int32 = cast[ptr int32]((0x00458c24 - 0x00400000) + baseAddress)
#  let DAT_00458c2c:ptr int32 = cast[ptr int32]((0x00458c2c - 0x00400000) + baseAddress)
#  let DAT_007c9ae0:ptr int32 = cast[ptr int32]((0x007c9ae0 - 0x00400000) + baseAddress)
#  let DAT_0044c448:ptr int32 = cast[ptr int32]((0x0044c448 - 0x00400000) + baseAddress)
#  let DAT_007ca344: ptr byte = cast[ptr byte ]((0x007ca344 - 0x00400000) + baseAddress)
#  let DAT_00459e3c:ptr int32 = cast[ptr int32]((0x00459e3c - 0x00400000) + baseAddress)
#  let DAT_00459144:ptr int32 = cast[ptr int32]((0x00459144 - 0x00400000) + baseAddress) 
#
#  var uVar1:uint32
# # var iVar2:int32
#  var uVar3:uint32
#  var EBPvar: int32 
#  asm """
#  mov `EBPvar`, EBP
#  """
#  var cVar4:char
#  var iVar5:int32
#  var EDIvar:uint32
#  asm """
#  mov `EDIvar`, EDI
#  """
#  var pcVar6:pointer
#  var pointer2stack_00000058:LONG32
#  asm """
#  MOV `pointer2stack_00000058`, [ESP + 0x58]
#  """
#  var pointer2stack_00000060:uint32
#  asm """
#  MOV `pointer2stack_00000060`, [ESP + 0x60]
#  """
#  var HandleIn_stack:HDC 
#  asm """
#  MOV `HandleIn_stack`, [ESP + 0x6C]
#  """
#  var BUFFER_StringStack:ptr byte
#  asm """
#  MOV `BUFFER_StringStack`, dword ptr [ESP + 0x70]
#  """
#  var in_Stack00000074:uint32
#  asm """
#  MOV `in_Stack00000074`, [ESP + 0x74]
#  """
#  var iVar7:int32
#  var BUFFER_STRING: cstring = cast[cstring](BUFFER_StringStack)


  

  
#  var WideLine = ANSItoWide(BUFFER_STRING)
#  let ShapedArabicLine = shapingLetters(WideLine)



#  DAT_007ca344[] = DAT_007ca344[] + 0x01.byte   
#  discard CallFUN_0042d6f0(0x3D, cast[ptr int32](nil), 0x80, 0x80, 0x80)
#  discard wingdi.SetTextColor(HandleIn_stack, 0)
#  var size: SIZE 
#  discard GetTextExtentPoint32W(HandleIn_stack, ShapedArabicLine[0].addr, ShapedArabicLine.len.cint, size.addr)


# =====================================================================
# =====================================================================

# 02 03 0E 05 80 00 00

# As far as the eye could see, a sheet of water


let TargetedHook: pointer = cast[pointer](baseAddress + 0x15b28)
let returnTarget: pointer = cast[pointer](baseAddress + 0x15b89)
let targetedhook2:pointer = cast[pointer](baseAddress + 0x15af0)

proc ShapeBuffer(): void {.stdcall.} =
  let BufferAddr:ptr int32 = cast[ptr int32](0x0046CC04 + 0x00000020)
  let currentChar: cchar = cast[ptr ptr cchar](BufferAddr)[][]
  let buffer:cstring = cast[ptr ptr cstring](BufferAddr)[][]

  var StrEN:cstring
  let WideLine = ANSItoWide(StrEN)
  let ArabicShapedBuffer = shapingLetters(WideLine)
  let retaddr = cast[ptr int32](baseaddress + 0x15abb)



  
  asm """
  JMP `retaddr`
  """


discard MH_CreateHook(TargetedHook, returnTarget, nil)
discard MH_CreateHook(targetedhook2, returnTarget, nil)
discard MH_EnableHook(TargetedHook)
discard MH_EnableHook(targetedhook2)