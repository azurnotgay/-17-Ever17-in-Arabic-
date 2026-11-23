
void MAYBEHASSMTHTODO_00415b1f
               (uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
               uint param_6,undefined4 param_7,HGDIOBJ param_8,undefined8 param_9,int param_10,
               undefined4 param_11)

{
  int iVar1;
  uint uVar2;
  code *unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  undefined4 in_stack_0000004c;
  int in_stack_00000054;
  HDC in_stack_00000058;
  HDC in_stack_00000060;
  byte *in_stack_00000064;
  uint in_stack_00000068;
  
code_r0x00415b1f:
  PrintMaybe_00439fb0(0xffffff,0,0);
  OPCODES____0042e6a0(0x3d,&stack0x0000004c);
  in_stack_00000054 = param_5;
LAB_00415b55:
  param_10 = param_10 - unaff_EDI;
  param_2 = param_2 - unaff_EDI;
  *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) - unaff_EDI;
  param_5 = in_stack_00000054;
LAB_00415b7d:
  do {
    while( true ) {
      param_10 = param_10 + param_1;
      param_2 = param_2 + param_1;
      *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) + param_1;
      if (in_stack_00000068 <= param_6 + 1) {
        SelectObject(in_stack_00000060,param_8);
        return;
      }
      param_9._0_1_ = *in_stack_00000064;
      if (((byte)param_9 & 0x80) == 0) {
        param_9._1_4_ = (uint)param_9._2_3_ << 8;
        param_6 = param_6 + 1;
        in_stack_00000064 = in_stack_00000064 + 1;
      }
      else {
        param_9._1_4_ = CONCAT31(param_9._2_3_,in_stack_00000064[1]);
        param_6 = param_6 + 2;
        in_stack_00000064 = in_stack_00000064 + 2;
      }
      iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044c838);
      if (iVar1 != 0) break;
      iVar1 = 0;
LAB_004154a1:
      SetRect((LPRECT)&stack0x0000003c,iVar1,0,0x1e,0x1e);
      FUN_0042da10(0x2c,&stack0x0000003c);
    }
    iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044c834);
    if (iVar1 != 0) {
      iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044c830);
      if (iVar1 == 0) {
        SetRect((LPRECT)&stack0x0000003c,0x3c,0,0x1e,0x1e);
        FUN_0042da10(0x2c,&stack0x0000003c);
      }
      else {
        iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044c82c);
        if (iVar1 == 0) {
          iVar1 = 0x5a;
          goto LAB_004154a1;
        }
        iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044c828);
        if (iVar1 == 0) {
          SetRect((LPRECT)&stack0x0000003c,0x78,0,0x1e,0x1e);
          FUN_0042da10(0x2c,&stack0x0000003c);
        }
        else {
          iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044ba18);
          if (iVar1 == 0) {
            SetRect((LPRECT)&stack0x0000003c,0x96,0,0xf,0x1e);
          }
          else {
            iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044ba14);
            if (iVar1 == 0) {
              SetRect((LPRECT)&stack0x0000003c,0xa5,0,0xf,0x1e);
            }
            else {
              iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044ba10);
              if (iVar1 != 0) {
                iVar1 = lstrcmpA((LPCSTR)&param_9,(LPCSTR)&lpString2_0044c824);
                if (iVar1 == 0) {
                  SetRect((LPRECT)&stack0x0000003c,0xc3,0,0x1e,0x1e);
                  FUN_0042da10(0x2c,&stack0x0000003c);
                }
                else {
                  iVar1 = lstrcmpA((LPCSTR)&param_9,&lpString2_00446e3c);
                  if (iVar1 != 0) {
                    if ((byte)param_9 == 0x81) {
                      if (param_9._1_1_ == 0x5c) {
                        if (DAT_007ca344 == '\0') {
                          param_10 = param_2 + 2;
                          in_stack_0000004c = 2;
                          param_11 = param_7;
                          uVar2 = param_1 - 4;
                          iVar1 = param_5 + -8;
                          in_stack_00000054 = param_5 + -8;
                        }
                        else {
                          uVar2 = param_1 - 2;
                          iVar1 = param_5 + -4;
                          if (DAT_007ca344 != '\0') {
                            param_10 = param_2 + 2;
                            in_stack_0000004c = 4;
                            param_11 = param_7;
                            uVar2 = param_1 - 4;
                            iVar1 = param_5 + -8;
                            in_stack_00000054 = param_5 + -4;
                          }
                        }
                        param_5 = iVar1;
                        param_1 = uVar2;
                        DAT_007ca344 = DAT_007ca344 + '\x01';
                        FUN_0042d6f0(0x3d,(int *)0x0,0x80,0x80,0x80);
                        (*unaff_EBX)(in_stack_00000060,0);
                        TextOutA(in_stack_00000058,4,4,(LPCSTR)&param_7,2);
                        (*unaff_EBX)(in_stack_00000058,0xffffff);
                        TextOutA(in_stack_00000060,0,0,(LPCSTR)&param_9,2);
                        OPCODES____0042e6a0(0x3d,&stack0x0000004c);
                        goto LAB_00415b7d;
                      }
                      if (((((param_9._1_1_ == 0x43) || (param_9._1_1_ == 0x44)) ||
                           ((param_9._1_1_ == 0x48 ||
                            ((param_9._1_1_ == 0x49 || (param_9._1_1_ == 0x5e)))))) ||
                          (param_9._1_1_ == 0x66)) ||
                         ((((param_9._1_1_ == 0x69 || (param_9._1_1_ == 0x6a)) ||
                           (param_9._1_1_ == 0x7c)) ||
                          ((param_9._1_1_ == 0x83 || (param_9._1_1_ == 0x84)))))) break;
                    }
                    else if ((((byte)param_9 == 0x82) && (0x4e < param_9._1_1_)) &&
                            (param_9._1_1_ < 0x9b)) {
                      DAT_007ca344 = '\0';
                      unaff_EDI = param_1 >> 1;
                      in_stack_00000054 = unaff_EDI * 2;
                      if (param_9._1_1_ < 0x5a) {
                        param_9._0_1_ = param_9._1_1_ - 0x1f;
                      }
                      else if (param_9._1_1_ < 0x7b) {
                        param_9._0_1_ = param_9._1_1_ - 0x1f;
                      }
                      else {
                        param_9._0_1_ = param_9._1_1_ - 0x20;
                      }
                      param_9._1_4_ = (uint)param_9._2_3_ << 8;
                      FUN_0042d6f0(0x3d,(int *)0x0,0x80,0x80,0x80);
                      (*unaff_EBX)(in_stack_00000060,0);
                      TextOutA(in_stack_00000058,4,4,(LPCSTR)&param_7,1);
                      (*unaff_EBX)(in_stack_00000058,0xffffff);
                      TextOutA(in_stack_00000060,0,0,(LPCSTR)&param_9,1);
                      OPCODES____0042e6a0(0x3d,&stack0x0000004c);
                      in_stack_00000054 = param_5;
                      goto LAB_00415b55;
                    }
                    if ((((byte)param_9 & 0x80) == 0) || (param_9._1_1_ == 0)) {
                      unaff_EDI = param_1 >> 1;
                      in_stack_00000054 = unaff_EDI * 2;
                      DAT_007ca344 = '\0';
                      FUN_0042d6f0(0x3d,(int *)0x0,0x80,0x80,0x80);
                      PrintMaybe_00439fb0(0,4,4);
                      if (DAT_00459e3c == 0) {
                        PrintMaybe_00439fb0(0,1,3);
                        PrintMaybe_00439fb0(0,-1,3);
                        FUN_00439fe0(0xfffffffe,0xfffffffe);
                        return;
                      }
                      goto code_r0x00415b1f;
                    }
                    DAT_007ca344 = '\0';
                    FUN_0042d6f0(0x3d,(int *)0x0,0x80,0x80,0x80);
                    (*unaff_EBX)(in_stack_00000060,0);
                    TextOutA(in_stack_00000058,4,4,(LPCSTR)&param_7,2);
                    (*unaff_EBX)(in_stack_00000058,0xffffff);
                    TextOutA(in_stack_00000060,0,0,(LPCSTR)&param_9,2);
                    OPCODES____0042e6a0(0x3d,&stack0x0000004c);
                    goto LAB_00415b7d;
                  }
                  uVar2 = param_1 >> 1;
                  param_10 = param_10 - uVar2;
                  param_2 = param_2 - uVar2;
                  *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) - uVar2;
                }
                goto LAB_00415b7d;
              }
              SetRect((LPRECT)&stack0x0000003c,0xb4,0,0xf,0x1e);
            }
          }
          FUN_0042da10(0x2c,&stack0x0000003c);
          uVar2 = param_1 >> 1;
          param_10 = param_10 - uVar2;
          *(uint *)(unaff_EBP + 0x13c) = *(int *)(unaff_EBP + 0x13c) - uVar2;
          param_2 = param_2 - uVar2;
        }
      }
      goto LAB_00415b7d;
    }
    SetRect((LPRECT)&stack0x0000003c,0x1e,0,0x1e,0x1e);
    FUN_0042da10(0x2c,&stack0x0000003c);
  } while( true );
  DAT_007ca344 = '\0';
  unaff_EDI = param_1 >> 1;
  in_stack_00000054 = unaff_EDI * 2;
  switch(param_9._1_4_ & 0xff) {
  case 0x43:
    param_9._0_1_ = 0x2c;
    break;
  case 0x44:
    param_9._0_1_ = 0x2e;
    break;
  case 0x48:
    param_9._0_1_ = 0x3f;
    break;
  case 0x49:
    param_9._0_1_ = 0x21;
    break;
  case 0x5e:
    param_9._0_1_ = 0x2f;
    break;
  case 0x66:
    param_9._0_1_ = 0x27;
    break;
  case 0x69:
    param_9._0_1_ = 0x28;
    break;
  case 0x6a:
    param_9._0_1_ = 0x29;
    break;
  case 0x7c:
    param_9._0_1_ = 0x2d;
    break;
  case 0x83:
    param_9._0_1_ = 0x3c;
    break;
  case 0x84:
    param_9._0_1_ = 0x3e;
  }
  param_9._1_4_ = (uint)param_9._2_3_ << 8;
  FUN_0042d6f0(0x3d,(int *)0x0,0x80,0x80,0x80);
  (*unaff_EBX)(in_stack_00000060,0);
  TextOutA(in_stack_00000058,4,4,(LPCSTR)&param_7,1);
  (*unaff_EBX)(in_stack_00000058,0xffffff);
  TextOutA(in_stack_00000060,0,0,(LPCSTR)&param_9,1);
  OPCODES____0042e6a0(0x3d,&stack0x0000004c);
  in_stack_00000054 = param_5;
  goto LAB_00415b55;
}

