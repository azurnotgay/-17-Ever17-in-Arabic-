import std/sha1
import std/json
import std/syncio

var scr:string = "Hello"
proc encrypt*(scr:string): string =
    let digest = secureHash(scr)
    result = $digest

let scrambledtext = encrypt(scr)
let JsonNode = %* {
  scrambledtext: "Hello"
  }
let jsonString = $JsonNode
syncio.writeFile("output.json", jsonString)