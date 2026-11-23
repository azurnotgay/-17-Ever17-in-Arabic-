## This is a temporary document, it'll be updated or removed depending on which the plan will change.

I tried many ways to trick Ever17's Engine—Such as **Font Hijacking**—, and none of them really worked.

Now the question: How am I gonna patch it then? 

It's simple, Build a parser that parse game script's files (.scr files), and extract it in a .json files, with the layout of :
```json 
{
"Key": "Value"
}
```

When Arabizing 'keys', we place the arabized text in 'Value' place; So when our hook script stops when it needs to print Arabic, it'll read from a local buffer (which is made by the engine) and parse the current sentence, it'll search considering that 'Sentence' a "Key", then print its value.