
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041524c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,uint param_9,
                 int param_10,HGDIOBJ param_11,undefined8 param_12,int param_13,int param_14,
                 undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  char cVar4;
  int iVar5;
  uint unaff_EDI;
  code *pcVar6;
  LONG in_stack_00000058;
  uint in_stack_00000060;
  HDC in_stack_0000006c;
  byte *in_stack_00000070;
  uint in_stack_00000074;
  undefined4 uVar7;
  
  iVar5 = DAT_00459144;
  iVar2 = DAT_00458dd4;
  if (DAT_007ca340 <= unaff_EDI) {
    param_5 = *(uint *)(unaff_EBP + 0x13c);
    iVar2 = *(int *)(unaff_EBP + 0x140);
    goto LAB_00415328;
  }
  if ((&DAT_00458f00)[DAT_00459144] == 0) {
    DAT_00459144 = DAT_00459144 + 1;
    return;
  }
  (&DAT_00458fe0)[DAT_00458dd4] = in_stack_00000074;
  (&DAT_00458f60)[iVar2] = iVar5;
  iVar2 = FUN_00432644();
  if (iVar2 == 0) {
    iVar2 = FUN_00432644();
    if (iVar2 != 0) {
      iVar2 = (&DAT_00458fe0)[DAT_00458dd4] + -1;
      goto LAB_004152d1;
    }
  }
  else {
    iVar2 = (&DAT_00458fe0)[DAT_00458dd4] + -4;
LAB_004152d1:
    (&DAT_00458fe0)[DAT_00458dd4] = iVar2;
  }
  param_5 = 0x2d0 - ((&DAT_00458fe0)[DAT_00458dd4] * param_4 >> 1) >> 1;
  iVar2 = DAT_00458dd4 * 0x1e;
  DAT_00459144 = DAT_00459144 + 1;
  DAT_00458dd4 = DAT_00458dd4 + 1;
LAB_00415328:
  iVar5 = param_8 * 0x40;
  _DAT_0045996c = *(undefined4 *)(&DAT_0044c448 + iVar5);
  DAT_00459968 = *(int *)(&DAT_0044c480 + iVar5) * in_stack_00000074;
  DAT_00459960 = (*(uint *)(DAT_004599e0 + 0x80) >> 0x10) + param_5;
  DAT_00459964 = (*(uint *)(DAT_004599e0 + 0x84) >> 0x10) + iVar2;
  param_10 = iVar2;
  FUN_00428d60(&DAT_00459960);
  _DAT_00458c24 = DAT_00459968 + param_5;
  _DAT_00458c2c = iVar2;
  if (0x2cf < _DAT_00458c24) {
    _DAT_00458c24 = 0;
    _DAT_00458c2c = *(int *)(&DAT_0044c448 + iVar5) + iVar2;
  }
  cVar4 = (-(1 < DAT_007ca340) & 2U) + 0x29;
  FUN_0042d550(0x3d,&stack0x0000006c);
  param_11 = SelectObject(in_stack_0000006c,*(HGDIOBJ *)(&DAT_007c9ae0 + param_8 * 4));
  SetBkMode(in_stack_0000006c,1);
  pcVar6 = SetRect_exref;
  param_12._1_2_ = (ushort)param_12._1_1_;
  param_8 = param_4 * 2;
  SetRect((LPRECT)&stack0x00000058,0,0,param_8,param_9 * 2);
  SetRect((LPRECT)&param_13,param_5,param_10,0,0);
  param_9 = 0;
  if (in_stack_00000074 != 0) {
    do {
      param_12._0_1_ = *in_stack_00000070;
      if (((byte)param_12 & 0x80) == 0) {
        param_12._1_4_ = (uint)param_12._2_3_ << 8;
        in_stack_00000070 = in_stack_00000070 + 1;
      }
      else {
        param_9 = param_9 + 1;
        param_12._1_4_ = CONCAT31(param_12._2_3_,in_stack_00000070[1]);
        in_stack_00000070 = in_stack_00000070 + 2;
      }
      iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044c838);
      if (iVar2 == 0) {
        uVar7 = 0;
LAB_004154a1:
        (*pcVar6)(&param_17,uVar7,0,0x1e,0x1e);
        FUN_0042da10(0x2c,&param_17,cVar4,&param_13);
      }
      else {
        iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044c834);
        if (iVar2 == 0) {
          (*pcVar6)(&param_17,0x1e,0,0x1e,0x1e);
          FUN_0042da10(0x2c,&param_17,cVar4,&param_13);
        }
        else {
          iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044c830);
          if (iVar2 == 0) {
            (*pcVar6)(&param_17,0x3c,0,0x1e,0x1e);
            FUN_0042da10(0x2c,&param_17,cVar4,&param_13);
          }
          else {
            iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044c82c);
            if (iVar2 == 0) {
              uVar7 = 0x5a;
              goto LAB_004154a1;
            }
            iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044c828);
            if (iVar2 == 0) {
              (*pcVar6)(&param_17,0x78,0,0x1e,0x1e);
              FUN_0042da10(0x2c,&param_17,cVar4,&param_13);
            }
            else {
              iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044ba18);
              if (iVar2 == 0) {
                (*pcVar6)(&param_17,0x96,0,0xf,0x1e);
              }
              else {
                iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044ba14);
                if (iVar2 == 0) {
                  (*pcVar6)(&param_17,0xa5,0,0xf,0x1e);
                }
                else {
                  iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044ba10);
                  if (iVar2 != 0) {
                    iVar2 = lstrcmpA((LPCSTR)&param_12,(LPCSTR)&lpString2_0044c824);
                    if (iVar2 == 0) {
                      (*pcVar6)(&param_17,0xc3,0,0x1e,0x1e);
                      FUN_0042da10(0x2c,&param_17,cVar4,&param_13);
                    }
                    else {
                      iVar2 = lstrcmpA((LPCSTR)&param_12,&lpString2_00446e3c);
                      if (iVar2 == 0) {
                        uVar3 = param_4 >> 1;
                        param_13 = param_13 - uVar3;
                        param_5 = param_5 - uVar3;
                        *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) - uVar3;
                      }
                      else {
                        if ((byte)param_12 == 0x81) {
                          if (param_12._1_1_ == 0x5c) {
                            if (DAT_007ca344 == '\0') {
                              param_13 = param_5 + 2;
                              in_stack_00000058 = 2;
                              param_14 = param_10;
                              uVar3 = param_4 - 4;
                              uVar1 = param_8 - 8;
                              in_stack_00000060 = param_8 - 8;
                            }
                            else {
                              uVar3 = param_4 - 2;
                              uVar1 = param_8 - 4;
                              if (DAT_007ca344 != '\0') {
                                param_13 = param_5 + 2;
                                in_stack_00000058 = 4;
                                param_14 = param_10;
                                uVar3 = param_4 - 4;
                                uVar1 = param_8 - 8;
                                in_stack_00000060 = param_8 - 4;
                              }
                            }
                            param_8 = uVar1;
                            param_4 = uVar3;
                            DAT_007ca344 = DAT_007ca344 + '\x01';
                            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
                            SetTextColor(in_stack_0000006c,0);
                            TextOutA(in_stack_0000006c,4,4,(LPCSTR)&param_12,2);
                            SetTextColor(in_stack_0000006c,0xffffff);
                            TextOutA(in_stack_0000006c,0,0,(LPCSTR)&param_12,2);
                            FUN_0042e6a0(0x3d,&stack0x00000058,cVar4,&param_13,param_7,param_6);
                            goto LAB_00415b7d;
                          }
                          if (((((param_12._1_1_ != 0x43) && (param_12._1_1_ != 0x44)) &&
                               ((param_12._1_1_ != 0x48 &&
                                ((param_12._1_1_ != 0x49 && (param_12._1_1_ != 0x5e)))))) &&
                              (param_12._1_1_ != 0x66)) &&
                             ((((param_12._1_1_ != 0x69 && (param_12._1_1_ != 0x6a)) &&
                               (param_12._1_1_ != 0x7c)) &&
                              ((param_12._1_1_ != 0x83 && (param_12._1_1_ != 0x84))))))
                          goto LAB_00415a20;
                          DAT_007ca344 = '\0';
                          in_stack_00000060 = param_4 & 0xfffffffe;
                          switch(param_12._1_4_ & 0xff) {
                          case 0x43:
                            param_12._0_1_ = 0x2c;
                            break;
                          case 0x44:
                            param_12._0_1_ = 0x2e;
                            break;
                          case 0x48:
                            param_12._0_1_ = 0x3f;
                            break;
                          case 0x49:
                            param_12._0_1_ = 0x21;
                            break;
                          case 0x5e:
                            param_12._0_1_ = 0x2f;
                            break;
                          case 0x66:
                            param_12._0_1_ = 0x27;
                            break;
                          case 0x69:
                            param_12._0_1_ = 0x28;
                            break;
                          case 0x6a:
                            param_12._0_1_ = 0x29;
                            break;
                          case 0x7c:
                            param_12._0_1_ = 0x2d;
                            break;
                          case 0x83:
                            param_12._0_1_ = 0x3c;
                            break;
                          case 0x84:
                            param_12._0_1_ = 0x3e;
                          }
                          param_12._1_4_ = (uint)param_12._2_3_ << 8;
                          FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
                          SetTextColor(in_stack_0000006c,0);
                          TextOutA(in_stack_0000006c,4,4,(LPCSTR)&param_12,1);
                          SetTextColor(in_stack_0000006c,0xffffff);
                          TextOutA(in_stack_0000006c,0,0,(LPCSTR)&param_12,1);
                          FUN_0042e6a0(0x3d,&stack0x00000058,cVar4,&param_13,param_7,param_6);
                          in_stack_00000060 = param_8;
                        }
                        else if ((((byte)param_12 == 0x82) && (0x4e < param_12._1_1_)) &&
                                (param_12._1_1_ < 0x9b)) {
                          DAT_007ca344 = '\0';
                          in_stack_00000060 = param_4 & 0xfffffffe;
                          if (param_12._1_1_ < 0x5a) {
                            param_12._0_1_ = param_12._1_1_ - 0x1f;
                          }
                          else if (param_12._1_1_ < 0x7b) {
                            param_12._0_1_ = param_12._1_1_ - 0x1f;
                          }
                          else {
                            param_12._0_1_ = param_12._1_1_ - 0x20;
                          }
                          param_12._1_4_ = (uint)param_12._2_3_ << 8;
                          FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
                          SetTextColor(in_stack_0000006c,0);
                          TextOutA(in_stack_0000006c,4,4,(LPCSTR)&param_12,1);
                          SetTextColor(in_stack_0000006c,0xffffff);
                          TextOutA(in_stack_0000006c,0,0,(LPCSTR)&param_12,1);
                          FUN_0042e6a0(0x3d,&stack0x00000058,cVar4,&param_13,param_7,param_6);
                          in_stack_00000060 = param_8;
                        }
                        else {
LAB_00415a20:
                          if ((((byte)param_12 & 0x80) != 0) && (param_12._1_1_ != 0)) {
                            DAT_007ca344 = '\0';
                            FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
                            SetTextColor(in_stack_0000006c,0);
                            TextOutA(in_stack_0000006c,4,4,(LPCSTR)&param_12,2);
                            SetTextColor(in_stack_0000006c,0xffffff);
                            TextOutA(in_stack_0000006c,0,0,(LPCSTR)&param_12,2);
                            FUN_0042e6a0(0x3d,&stack0x00000058,cVar4,&param_13,param_7,param_6);
                            goto LAB_00415b7d;
                          }
                          in_stack_00000060 = param_4 & 0xfffffffe;
                          DAT_007ca344 = '\0';
                          FUN_0042d6f0(0x3d,0,0x80,0x80,0x80);
                          FUN_00439fb0(0,4,4);
                          if (DAT_00459e3c == 0) {
                            FUN_00439fb0(0,1,3);
                            FUN_00439fb0(0,0xffffffff,3);
                            FUN_00439fe0(0xfffffffe,0xfffffffe);
                            return;
                          }
                          FUN_00439fb0();
                          FUN_0042e6a0(0x3d,&param_15,cVar4,&param_8,param_1,0xffffff);
                          param_17 = param_2;
                        }
                        pcVar6 = SetRect_exref;
                        uVar3 = param_4 >> 1;
                        param_13 = param_13 - uVar3;
                        param_5 = param_5 - uVar3;
                        *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) - uVar3;
                      }
                    }
                    goto LAB_00415b7d;
                  }
                  (*pcVar6)(&param_17,0xb4,0,0xf,0x1e);
                }
              }
              FUN_0042da10(0x2c,&param_17,cVar4,&param_13);
              uVar3 = param_4 >> 1;
              param_13 = param_13 - uVar3;
              *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) - uVar3;
              param_5 = param_5 - uVar3;
            }
          }
        }
      }
LAB_00415b7d:
      param_13 = param_13 + param_4;
      param_5 = param_5 + param_4;
      *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) + param_4;
      param_9 = param_9 + 1;
    } while (param_9 < in_stack_00000074);
  }
  SelectObject(in_stack_0000006c,param_11);
  return;
}

