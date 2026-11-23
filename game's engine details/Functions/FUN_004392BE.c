
void FUN_004392be(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,uint param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined4 param_13,
                 undefined4 param_14,int *param_15,undefined4 param_16,int *param_17)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  LPCSTR in_stack_00000070;
  
  iVar2 = 0;
  pCVar3 = in_stack_00000070;
  while (cVar1 = pCVar3[iVar2], cVar1 != '\0') {
    if (cVar1 == -0x5c) {
      if ((DAT_004591a0._1_1_ & 2) == 0) {
        cVar1 = 'o';
      }
      else {
        cVar1 = -1;
      }
    }
    else if (cVar1 == -8) {
      if ((DAT_004591a0._1_1_ & 2) == 0) {
        cVar1 = 'O';
      }
      else {
        cVar1 = -1;
      }
    }
    else if (cVar1 == -0x5d) {
      if ((DAT_004591a0._1_1_ & 4) == 0) {
        cVar1 = 'C';
      }
      else {
        cVar1 = 'K';
      }
    }
    else if (cVar1 == -0x5e) {
      if ((DAT_004591a0._1_1_ & 4) == 0) {
        cVar1 = 'c';
      }
      else {
        cVar1 = 'k';
      }
    }
    if (cVar1 == -1) {
      iVar2 = iVar2 + 1;
    }
    else {
      *pCVar3 = cVar1;
      pCVar3 = pCVar3 + 1;
    }
  }
  while ((char)iVar2 != '\0') {
    iVar2 = iVar2 + -1;
    pCVar3[iVar2] = '\0';
  }
  iVar2 = lstrlenA(in_stack_00000070);
  if (iVar2 == 0) {
    return;
  }
  DAT_007c9ac0 = DAT_007c9ac0 + iVar2;
  lstrcatA(&lpBuffer_007c92c0,in_stack_00000070);
  RenderTextFunc_0041524c
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  return;
}

