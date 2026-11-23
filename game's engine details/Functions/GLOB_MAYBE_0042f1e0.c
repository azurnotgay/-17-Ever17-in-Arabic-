
void FUN_0042f1e0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_00458664;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (DAT_0045cf60 != 0xff) {
    DAT_00458804 = 0x80;
    if (DAT_0045cfe0 != 0) {
      DAT_00458804 = 0x81;
    }
    if (1 < DAT_0045cfe0) {
      DAT_00458804 = DAT_00458804 | 2;
    }
    joyGetPosEx(0,(LPJOYINFOEX)&pji_00458800);
    uVar2 = DAT_00458820;
    if (1 < DAT_0045cfe0) {
      if ((ushort)DAT_00458808 < DAT_0045879a) {
        DAT_00458664._0_1_ = 0x80;
      }
      if (DAT_00458798 < (ushort)DAT_00458808) {
        DAT_00458664._1_1_ = 0x80;
      }
      if ((ushort)DAT_0045880c < DAT_0045879e) {
        DAT_00458664._2_1_ = 0x80;
      }
      if (DAT_0045879c < (ushort)DAT_0045880c) {
        DAT_00458664._3_1_ = 0x80;
      }
    }
    uVar4 = 1;
    uVar1 = 0;
    do {
      if ((uVar4 & uVar2) != 0) {
        (&DAT_00458668)[uVar1] = 0x80;
      }
      uVar4 = uVar4 << 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 9);
  }
  if (DAT_0045cf64 != 0xff) {
    DAT_00458804 = 0x80;
    if (DAT_0045cfe4 != 0) {
      DAT_00458804 = 0x81;
    }
    if (1 < DAT_0045cfe4) {
      DAT_00458804 = DAT_00458804 | 2;
    }
    joyGetPosEx(1,(LPJOYINFOEX)&pji_00458800);
    if (1 < DAT_0045cfe4) {
      if ((ushort)DAT_00458808 < DAT_004587a2) {
        DAT_00458674 = 0x80;
      }
      if (DAT_004587a0 < (ushort)DAT_00458808) {
        DAT_00458675 = 0x80;
      }
      if ((ushort)DAT_0045880c < DAT_004587a6) {
        DAT_00458676 = 0x80;
      }
      if (DAT_004587a4 < (ushort)DAT_0045880c) {
        DAT_00458677 = 0x80;
      }
    }
    uVar2 = 0;
    uVar1 = DAT_00458820 | 1;
    do {
      if (uVar1 != 0) {
        (&DAT_00458678)[uVar2] = 0x80;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 9);
  }
  return;
}

