
void FUN_00415c60(undefined4 param_1,int param_2,undefined4 param_3,byte *param_4,uint param_5,
                 HDC hdcVar)

{
  HDC WHDC;
  int iVar1;
  HGDIOBJ h;
  int iVar2;
  int iVar3;
  uint local_4c;
  int local_44;
  uint local_40;
  byte local_38;
  uint local_37;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  bool boolvar;
  
  if (hdcVar < (HDC)200) {
    if (hdcVar < (HDC)100) {
      boolvar = true;
      local_4c = (uint)(byte)hdcVar[0x1130a8].fnvn;
      WHDC = hdcVar;
    }
    else {
      boolvar = false;
      local_4c = (byte)hdcVar[0x11308f].fnvn + 2;
      WHDC = hdcVar + -0x19;
    }
  }
  else {
    boolvar = true;
    local_4c = (byte)hdcVar[0x113076].fnvn + 10;
    WHDC = hdcVar + -0x32;
  }
  iVar1 = (int)WHDC * 6;
  iVar3 = (uint)CONCAT11((&DAT_0044c2d4)[iVar1],(&DAT_0044c2d5)[iVar1]) * 0x100 +
          (uint)(byte)(&DAT_0044c2d6)[iVar1];
  iVar1 = (uint)CONCAT11((&DAT_0044c2d7)[iVar1],(&DAT_0044c2d8)[iVar1]) * 0x100 +
          (uint)(byte)(&DAT_0044c2d9)[iVar1];
  FUN_0042d550(0x3d,&hdcVar);
  h = SelectObject(hdcVar,*(HGDIOBJ *)(&DAT_007c9ae0 + local_4c * 4));
  SetBkMode(hdcVar,1);
  local_37._0_2_ = (ushort)(byte)local_37;
  local_10 = 0;
  local_c = 0;
  if (local_4c < 10) {
    if (local_4c < 2) {
      local_8 = 0x3c;
      local_4 = 0x3c;
    }
    else {
      local_8 = 0x20;
      local_4 = 0x20;
    }
  }
  else {
    local_8 = 0x28;
    local_4 = 0x28;
  }
  local_20 = param_2;
  local_1c = param_3;
  local_40 = 0;
  if (param_5 != 0) {
    do {
      local_44 = 1;
      local_38 = *param_4;
      if ((local_38 & 0x80) == 0) {
        local_37 = (uint)local_37._1_3_ << 8;
        param_4 = param_4 + 1;
        local_40 = local_40 + 1;
      }
      else {
        local_37 = CONCAT31(local_37._1_3_,param_4[1]);
        local_44 = 2;
        param_4 = param_4 + 2;
        local_40 = local_40 + 2;
      }
      iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c838);
      if (iVar2 == 0) {
        if (local_4c < 2) {
          local_30 = 0;
          local_28 = 0x1e;
          local_2c = 0;
          local_24 = 0x1e;
        }
        else {
          local_30 = 0;
LAB_00415e29:
          local_24 = 0x10;
          local_2c = 0x1e;
          local_28 = 0x10;
        }
LAB_00415e3e:
        FUN_0042da10(0x2c,&local_30,param_1,&local_20);
LAB_00416815:
        if (local_4c < 10) {
          if (local_4c < 2) {
            local_44 = local_44 * 0xf;
          }
          else {
            local_44 = local_44 * 8;
          }
        }
        else {
          local_44 = local_44 * 10;
        }
LAB_00416866:
        local_20 = local_20 + local_44;
        param_2 = param_2 + local_44;
      }
      else {
        iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c834);
        if (iVar2 == 0) {
          if (local_4c < 2) {
            local_24 = 0x1e;
            local_2c = 0;
            local_30 = 0x1e;
            local_28 = 0x1e;
          }
          else {
            local_24 = 0x10;
            local_2c = 0x1e;
            local_30 = 0x10;
            local_28 = 0x10;
          }
          FUN_0042da10(0x2c,&local_30,param_1,&local_20);
          goto LAB_00416815;
        }
        iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c830);
        if (iVar2 == 0) {
          if (local_4c < 2) {
            local_24 = 0x1e;
            local_30 = 0x3c;
            local_28 = 0x1e;
            local_2c = 0;
          }
          else {
            local_24 = 0x10;
            local_30 = 0x20;
            local_28 = 0x10;
            local_2c = 0x1e;
          }
          FUN_0042da10(0x2c,&local_30,param_1,&local_20);
          goto LAB_00416815;
        }
        iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c82c);
        if (iVar2 == 0) {
          if (1 < local_4c) {
            local_30 = 0x30;
            goto LAB_00415e29;
          }
          local_24 = 0x1e;
          local_30 = 0x5a;
          local_28 = 0x1e;
          local_2c = 0;
          goto LAB_00415e3e;
        }
        iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c828);
        if (iVar2 == 0) {
          if (local_4c < 2) {
            local_24 = 0x1e;
            local_30 = 0x78;
            local_28 = 0x1e;
            local_2c = 0;
          }
          else {
            local_24 = 0x10;
            local_30 = 0x40;
            local_28 = 0x10;
            local_2c = 0x1e;
          }
          FUN_0042da10(0x2c,&local_30,param_1,&local_20);
          goto LAB_00416815;
        }
        iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044ba18);
        if (iVar2 == 0) {
          if (1 < local_4c) {
            local_8 = local_8 / 2;
            DAT_007ca344 = 0;
            local_38 = 0x61;
            local_37 = local_37 & 0xffffff00;
            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
            goto joined_r0x004161d0;
          }
          local_30 = 0x96;
LAB_0041615b:
          local_28 = 0xf;
          local_2c = 0;
          local_24 = 0x1e;
          FUN_0042da10(0x2c,&local_30,param_1,&local_20);
          goto LAB_00416815;
        }
        iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044ba14);
        if (iVar2 != 0) {
          iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044ba10);
          if (iVar2 == 0) {
            if (local_4c < 2) {
              local_30 = 0xb4;
              goto LAB_0041615b;
            }
            local_8 = local_8 / 2;
            DAT_007ca344 = 0;
            local_38 = 0x75;
            local_37 = local_37 & 0xffffff00;
            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
            goto joined_r0x004161d0;
          }
          iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c824);
          if (iVar2 == 0) {
            if (local_4c < 2) {
              local_28 = 0x1e;
              local_24 = 0x1e;
              local_30 = 0xc3;
              local_2c = 0;
              FUN_0042da10(0x2c,&local_30,param_1,&local_20);
            }
            goto LAB_00416815;
          }
          if (local_38 == 0x81) {
            if ((byte)local_37 == 0x5c) {
              FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
              if (local_4c < 10) {
                if (local_4c < 2) {
                  if (DAT_007ca344 == 0) {
                    local_8 = 0x38;
LAB_004162db:
                    local_10 = 2;
                    local_20 = param_2 + 2;
                    local_1c = param_3;
                  }
                  else if (DAT_007ca344 != 0) {
                    local_10 = 4;
                    local_8 = 0x38;
                    local_20 = param_2;
                    local_1c = param_3;
                  }
                }
                else {
                  if (DAT_007ca344 == 0) {
                    local_8 = 0x1c;
                    goto LAB_004162db;
                  }
                  if (DAT_007ca344 != 0) {
                    local_10 = 4;
                    local_20 = param_2 + (uint)DAT_007ca344 * -2;
                    local_8 = 0x1c;
                    local_1c = param_3;
                  }
                }
              }
              else {
                if (DAT_007ca344 == 0) {
                  local_8 = 0x24;
                  goto LAB_004162db;
                }
                if (DAT_007ca344 != 0) {
                  local_10 = 4;
                  local_8 = 0x24;
                  local_20 = param_2;
                  local_1c = param_3;
                }
              }
              DAT_007ca344 = DAT_007ca344 + 1;
              if (boolvar) {
                SetTextColor(hdcVar,0);
                TextOutA(hdcVar,4,4,(LPCSTR)&local_38,2);
              }
              SetTextColor(hdcVar,0xffffff);
              iVar2 = 2;
LAB_004167ea:
              TextOutA(hdcVar,0,0,(LPCSTR)&local_38,iVar2);
LAB_004167fa:
              FUN_0042e6a0(0x3d,&local_10,param_1,&local_20,iVar3,iVar1);
              goto LAB_00416815;
            }
            if ((((((((byte)local_37 != 0x43) && ((byte)local_37 != 0x44)) &&
                   ((byte)local_37 != 0x48)) &&
                  (((byte)local_37 != 0x49 && ((byte)local_37 != 0x5e)))) &&
                 (((byte)local_37 != 0x66 && (((byte)local_37 != 0x69 && ((byte)local_37 != 0x6a))))
                 )) && ((byte)local_37 != 0x7c)) &&
               (((byte)local_37 != 0x83 && ((byte)local_37 != 0x84)))) goto LAB_00416614;
            local_8 = local_8 / 2;
            DAT_007ca344 = 0;
            switch(local_37 & 0xff) {
            case 0x43:
              local_38 = 0x2c;
              break;
            case 0x44:
              local_38 = 0x2e;
              break;
            case 0x48:
              local_38 = 0x3f;
              break;
            case 0x49:
              local_38 = 0x21;
              break;
            case 0x5e:
              local_38 = 0x2f;
              break;
            case 0x66:
              local_38 = 0x27;
              break;
            case 0x69:
              local_38 = 0x28;
              break;
            case 0x6a:
              local_38 = 0x29;
              break;
            case 0x7c:
              local_38 = 0x2d;
              break;
            case 0x83:
              local_38 = 0x3c;
              break;
            case 0x84:
              local_38 = 0x3e;
            }
            local_37 = (uint)local_37._1_3_ << 8;
            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
            if (boolvar) {
              SetTextColor(hdcVar,0);
              TextOutA(hdcVar,4,4,(LPCSTR)&local_38,1);
            }
            SetTextColor(hdcVar,0xffffff);
            TextOutA(hdcVar,0,0,(LPCSTR)&local_38,1);
            FUN_0042e6a0(0x3d,&local_10,param_1,&local_20,iVar3,iVar1);
            if (local_4c < 10) {
              iVar2 = 0xf;
              if (local_4c < 2) goto LAB_004165f0;
              goto LAB_004165eb;
            }
            iVar2 = 10;
            goto LAB_004165f0;
          }
          if (((local_38 == 0x82) && (0x4e < (byte)local_37)) && ((byte)local_37 < 0x9b)) {
            DAT_007ca344 = 0;
            local_8 = local_8 / 2;
            if ((byte)local_37 < 0x5a) {
              local_38 = (byte)local_37 - 0x1f;
            }
            else if ((byte)local_37 < 0x7b) {
              local_38 = (byte)local_37 - 0x1f;
            }
            else {
              local_38 = (byte)local_37 - 0x20;
            }
            local_37 = (uint)local_37._1_3_ << 8;
            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
            if (boolvar) {
              SetTextColor(hdcVar,0);
              TextOutA(hdcVar,4,4,(LPCSTR)&local_38,1);
            }
            SetTextColor(hdcVar,0xffffff);
            TextOutA(hdcVar,0,0,(LPCSTR)&local_38,1);
            FUN_0042e6a0(0x3d,&local_10,param_1,&local_20,iVar3,iVar1);
            if (local_4c < 10) {
              iVar2 = 0xf;
              if (1 < local_4c) {
                iVar2 = 8;
              }
            }
            else {
              iVar2 = 10;
            }
            local_20 = local_20 + iVar2;
            param_2 = param_2 + iVar2;
            local_8 = local_8 * 2;
            goto LAB_0041687a;
          }
LAB_00416614:
          iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c864);
          if ((iVar2 != 0) && (iVar2 = lstrcmpA((LPCSTR)&local_38,&lpString2_00446e3c), iVar2 != 0))
          {
            if (((local_38 == 0x28) || ((local_38 == 0x29 || (local_38 == 0x2f)))) ||
               ((local_38 == 0x5b || (local_38 == 0x5d)))) {
              FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
              local_28 = local_28 / 2;
              if (boolvar) {
                SetTextColor(hdcVar,0);
                TextOutA(hdcVar,4,4,(LPCSTR)&local_38,1);
              }
              SetTextColor(hdcVar,0xffffff);
              iVar2 = 1;
              goto LAB_004167ea;
            }
            iVar2 = lstrcmpA((LPCSTR)&local_38,(LPCSTR)&lpString2_0044c860);
            if (iVar2 == 0) {
              iVar1 = (param_4[1] - 0x210) + (uint)*param_4 * 10;
              local_4c = (uint)(byte)(&DAT_0044c2a0)[iVar1];
              SelectObject(hdcVar,*(HGDIOBJ *)(&DAT_007c9ae0 + local_4c * 4));
              iVar1 = iVar1 * 6;
              iVar3 = (uint)CONCAT11((&DAT_0044c2d4)[iVar1],(&DAT_0044c2d5)[iVar1]) * 0x100 +
                      (uint)(byte)(&DAT_0044c2d6)[iVar1];
              iVar1 = (uint)CONCAT11((&DAT_0044c2d7)[iVar1],(&DAT_0044c2d8)[iVar1]) * 0x100 +
                      (uint)(byte)(&DAT_0044c2d9)[iVar1];
              local_40 = local_40 + 2;
              param_4 = param_4 + 2;
              goto LAB_0041687a;
            }
            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
            if (boolvar) {
              SetTextColor(hdcVar,0);
              TextOutA(hdcVar,4,4,(LPCSTR)&local_38,local_44);
            }
            SetTextColor(hdcVar,0xffffff);
            TextOutA(hdcVar,0,0,(LPCSTR)&local_38,local_44);
            local_28 = local_28 / local_44;
            goto LAB_004167fa;
          }
          if (local_4c < 10) {
            local_44 = 0xf;
            if (1 < local_4c) {
              local_44 = 8;
            }
          }
          else {
            local_44 = 10;
          }
          goto LAB_00416866;
        }
        if (local_4c < 2) {
          local_30 = 0xa5;
          goto LAB_0041615b;
        }
        local_8 = local_8 / 2;
        DAT_007ca344 = 0;
        local_38 = 0x6f;
        local_37 = local_37 & 0xffffff00;
        FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
joined_r0x004161d0:
        if (boolvar) {
          SetTextColor(hdcVar,0);
          TextOutA(hdcVar,4,4,(LPCSTR)&local_38,1);
        }
        SetTextColor(hdcVar,0xffffff);
        TextOutA(hdcVar,0,0,(LPCSTR)&local_38,1);
        FUN_0042e6a0(0x3d,&local_10,param_1,&local_20,iVar3,iVar1);
        iVar2 = 10;
        if (local_4c < 10) {
LAB_004165eb:
          iVar2 = 8;
        }
LAB_004165f0:
        local_20 = local_20 + iVar2;
        param_2 = param_2 + iVar2;
        local_8 = local_8 * 2;
      }
LAB_0041687a:
    } while (local_40 < param_5);
  }
  SelectObject(hdcVar,h);
  return;
}

