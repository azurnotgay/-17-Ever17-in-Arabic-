
void OPCODES____0042e6a0(int param_1,int *param_2,int param_3,int *param_4,uint param_5,uint param_6
                        )

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  byte *local_340;
  int *local_33c;
  uint local_334;
  uint local_330;
  int local_310 [4];
  byte local_300 [768];
  
  iVar10 = param_2[3];
  local_340 = (byte *)((param_5 & 0xff) * 0x10000);
  iVar3 = (param_6 & 0xff) * 0x10000;
  uVar16 = param_5 & 0xff0000;
  iVar4 = (param_6 & 0xff0000) - uVar16;
  iVar9 = (param_5 & 0xff00) * 0x100;
  iVar17 = (param_6 & 0xff00) * 0x100;
  iVar13 = iVar10 + -1;
  iVar1 = iVar10 + -1;
  iVar5 = 0;
  if (iVar1 != 0) {
    pbVar14 = local_300 + 1;
    local_33c = (int *)iVar1;
    do {
      pbVar14[-1] = (byte)((uint)local_340 >> 0x10);
      *pbVar14 = (byte)((uint)iVar9 >> 0x10);
      pbVar14[1] = (byte)(uVar16 >> 0x10);
      uVar16 = uVar16 + iVar4 / iVar13;
      iVar9 = iVar9 + (int)(iVar17 + (param_5 & 0xff00) * -0x100) / iVar13;
      local_340 = (byte *)((int)local_340 + (int)(iVar3 + (param_5 & 0xff) * -0x10000) / iVar13);
      local_33c = (int *)((int)local_33c + -1);
      iVar5 = iVar1;
      pbVar14 = pbVar14 + 3;
    } while (local_33c != (int *)0x0);
  }
  iVar5 = iVar5 * 3;
  local_300[iVar5] = (byte)((uint)iVar3 >> 0x10);
  local_300[iVar5 + 1] = (byte)((uint)iVar17 >> 0x10);
  local_300[iVar5 + 2] = (byte)((param_6 & 0xff0000) >> 0x10);
  iVar1 = param_2[2];
  iVar5 = *(int *)((&DAT_0045d020)[param_1] + 0x440);
  iVar3 = *(int *)((&DAT_0045d020)[param_3] + 0x440);
  piVar11 = (int *)(param_2[1] * iVar5 + *param_2 * 4 + *(int *)((&DAT_0045d020)[param_1] + 0x438));
  local_33c = (int *)(param_4[1] * iVar3 + *(int *)((&DAT_0045d020)[param_3] + 0x438) + *param_4 * 4
                     );
  if (0 < iVar10) {
    local_340 = local_300 + 1;
    local_330 = iVar10 + 1U >> 1;
    do {
      piVar2 = local_33c;
      if (0 < iVar1) {
        puVar15 = (undefined4 *)((int)piVar11 + iVar5);
        local_334 = iVar1 + 1U >> 1;
        piVar12 = piVar11;
        do {
          local_310[1] = *(undefined4 *)((4 - iVar5) + (int)puVar15);
          local_310[0] = *piVar12;
          iVar4 = 0;
          local_310[3] = puVar15[1];
          iVar10 = 0;
          local_310[2] = *puVar15;
          piVar6 = local_310;
          iVar9 = 4;
          do {
            if (*piVar6 == 0) {
              iVar10 = iVar10 + 1;
            }
            else if (*piVar6 == 0xffffff) {
              iVar4 = iVar4 + 1;
            }
            piVar6 = piVar6 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar16 = iVar10 + iVar4;
          iVar9 = uVar16 * 0x40;
          if (iVar9 == 0x100) {
            iVar9 = 0xff;
          }
          iVar13 = 0;
          if (iVar4 != 0) {
            if (iVar10 == 0) {
              uVar7 = (uint)local_340[-1];
              uVar8 = (uint)*local_340;
              uVar16 = (uint)local_340[1];
            }
            else {
              uVar7 = ((uint)local_340[-1] * iVar4) / uVar16;
              uVar8 = ((uint)*local_340 * iVar4) / uVar16;
              uVar16 = ((uint)local_340[1] * iVar4) / uVar16;
            }
            iVar13 = (uVar16 * 0x100 + uVar8) * 0x100 + uVar7;
          }
          piVar12 = piVar12 + 2;
          puVar15 = puVar15 + 2;
          *local_33c = iVar9 * 0x1000000 + iVar13;
          local_33c = local_33c + 1;
          local_334 = local_334 - 1;
        } while (local_334 != 0);
      }
      local_340 = local_340 + 6;
      piVar11 = (int *)((int)piVar11 + iVar5 * 2);
      local_33c = (int *)((int)piVar2 + iVar3);
      local_330 = local_330 - 1;
    } while (local_330 != 0);
  }
  return;
}

