
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAKING_chrs____0041439a(void)

{
  byte bVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int *unaff_EBX;
  code *unaff_EBP;
  uint *unaff_ESI;
  undefined4 *puVar14;
  byte *pbVar15;
  int unaff_EDI;
  bool bVar16;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  LONG in_stack_00000020;
  LONG in_stack_00000024;
  byte in_stack_00000028;
  undefined4 uVar17;
  
code_r0x0041439a:
  piVar7 = (int *)unaff_ESI[99];
  bVar13 = (byte)unaff_EBX;
  (&stack0x00000028)[unaff_EDI] = bVar13;
  if ((piVar7 == unaff_EBX) &&
     ((iVar8 = lstrcmpiA((LPCSTR)&stack0x00000028,(LPCSTR)&lpString2_0044c7b8), iVar8 == 0 ||
      (iVar8 = lstrcmpiA((LPCSTR)&stack0x00000028,(LPCSTR)&lpString2_0044ba20), iVar8 == 0)))) {
    pbVar15 = (byte *)unaff_ESI[8];
    bVar1 = *pbVar15;
    while (0x18 < bVar1) {
      (&stack0x00000028)[unaff_EDI] = bVar1;
      bVar1 = (&stack0x00000028)[unaff_EDI];
      iVar8 = unaff_EDI + 1;
      unaff_ESI[8] = (uint)(pbVar15 + 1);
      if ((bVar1 & 0x80) != 0) {
        (&stack0x00000029)[unaff_EDI] = pbVar15[1];
        iVar8 = unaff_EDI + 2;
        unaff_ESI[8] = (uint)(pbVar15 + 2);
      }
      pbVar15 = (byte *)unaff_ESI[8];
      unaff_EDI = iVar8;
      bVar1 = *pbVar15;
    }
    (&stack0x00000028)[unaff_EDI] = bVar13;
  }
  unaff_ESI[0x51] = unaff_ESI[0x4a];
  iVar8 = lstrcmpiA((LPCSTR)&stack0x00000028,(LPCSTR)&lpString2_00443e34);
  if (iVar8 == 0) {
    if (*(char *)unaff_ESI[8] == -0x7f) {
      do {
        puVar2 = (undefined1 *)unaff_ESI[8];
        (&stack0x00000028)[unaff_EDI] = *puVar2;
        unaff_ESI[8] = (uint)(puVar2 + 1);
        (&stack0x00000029)[unaff_EDI] = puVar2[1];
        unaff_EDI = unaff_EDI + 2;
        unaff_ESI[8] = (uint)(puVar2 + 2);
        if (puVar2[2] != -0x7f) break;
      } while (puVar2[3] == '@');
    }
    uVar10 = unaff_ESI[0x4a];
    (&stack0x00000028)[unaff_EDI] = bVar13;
    unaff_ESI[0x51] = uVar10 >> 1;
  }
  do {
    unaff_ESI[99] = 1;
    if ((DAT_007ca340 == (int *)0x3) && ((int *)(&DAT_00458f00)[(int)DAT_00459144] == unaff_EBX)) {
      DAT_00459144 = (int *)((int)DAT_00459144 + 1);
    }
    else {
      FUN_004150b0();
    }
    if (*(byte *)unaff_ESI[8] < 0x13) {
      return;
    }
switchD_004141c8_default:
    puVar2 = (undefined1 *)unaff_ESI[8];
    switch(*puVar2) {
    case 0:
      uVar10 = unaff_ESI[0xb];
      DAT_007ca344 = bVar13;
      *unaff_ESI = *unaff_ESI ^ 0x80000000;
      unaff_ESI[0xb] = uVar10 - 1;
      unaff_ESI[8] = unaff_ESI[uVar10 + 0xb];
      unaff_ESI[5] = unaff_ESI[uVar10 + 0x13];
      unaff_ESI[99] = (uint)unaff_EBX;
      DAT_00457e10 = unaff_EBX;
      DAT_007ca340 = unaff_EBX;
      return;
    case 1:
      unaff_ESI[0x4f] = unaff_ESI[0x4e];
      unaff_ESI[0x50] = unaff_ESI[0x50] + 0x1e;
      unaff_ESI[8] = unaff_ESI[8] + 1;
      DAT_00457e10 = (int *)0x1;
      if ((DAT_007ca340 == (int *)0x3) && ((int *)(&DAT_00458f00)[(int)DAT_00459144] == unaff_EBX))
      {
        DAT_00457e10 = (int *)0x1;
        return;
      }
      (*unaff_EBP)(&lpBuffer_007c92c0,&lpBuffer_0044c280);
      (*unaff_EBP)(&lpBuffer_007c9b20,&lpBuffer_0044c280);
      if (DAT_007ca340 != unaff_EBX) {
        return;
      }
      DAT_0044c754 = 1;
      return;
    case 2:
      iVar8 = FUN_00414e70();
      if (iVar8 != 0) {
        _DAT_007ca9a4 = unaff_EBX;
        _DAT_007cc164 = unaff_EBX;
      }
      iVar8 = FUN_00432320(0x151);
      if (iVar8 != 0) {
        FUN_00432350(0x151);
      }
      puVar3 = DAT_00459bd8;
      iVar8 = FUN_00402510(DAT_00457e18);
      puVar3[0x20] = puVar3[0x55] + iVar8 * 4;
      iVar8 = FUN_00402470(DAT_00457e18);
      *puVar3 = *puVar3 | 0x400000;
      puVar3[0x21] = puVar3[0x56] + iVar8 * 4;
      puVar4 = DAT_00459bdc;
      iVar8 = FUN_00402510(DAT_00457e18 >> 1);
      iVar9 = FUN_00402470(DAT_00457e18 * 4);
      iVar8 = (iVar9 * (iVar8 / 2)) / 2;
      puVar4[0x20] = puVar3[0x20] + ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) * 0xe;
      iVar8 = FUN_00402470(DAT_00457e18 >> 1);
      iVar9 = FUN_00402470(DAT_00457e18 * 4);
      iVar8 = (iVar9 * (iVar8 / 2)) / 2;
      uVar10 = puVar3[0x21];
      *puVar4 = *puVar4 | 0x400000;
      puVar4[0x21] = uVar10 + ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) * 0xe;
      iVar8 = FUN_00402510(DAT_00457e18 * 4);
      if (iVar8 < 1) {
        puVar4[0x22] = 0x160;
      }
      else {
        puVar4[0x22] = 0x15c;
      }
      puVar3 = DAT_00459bd8;
      DAT_00457e18 = DAT_00457e18 + 0x100;
      if (unaff_ESI[0x4b] == 0) {
        iVar12 = (*(int *)(DAT_004599e0 + 0x84) >> 0x10) + unaff_ESI[0x50];
        iVar9 = *(int *)(DAT_004599e0 + 0x80) >> 0x10;
        iVar8 = iVar9 + unaff_ESI[0x4f];
        if (unaff_ESI[0x4f] == 0x2d0) {
          iVar12 = iVar12 + 0x1e;
          iVar8 = iVar9;
        }
        DAT_00459bd8[0x20] = iVar8 << 0x10;
        puVar3[0x55] = iVar8 << 0x10;
        puVar3[0x21] = iVar12 << 0x10;
        puVar3[0x56] = iVar12 << 0x10;
        if (*(char *)(unaff_ESI[8] + 1) == '\x03') {
          _DAT_0045bb30 = (int *)0x2;
          FUN_00432350(0,1);
          iVar8 = FUN_00432320(0x25);
          if (iVar8 != 0) {
            FUN_00417c50();
            FUN_00432350(0x25,0);
          }
          uVar17 = 1;
          uVar5 = 1;
        }
        else {
          _DAT_0045bb30 = (int *)0x1;
          FUN_00432350(0,1);
          FUN_00432350(1,0);
          iVar8 = FUN_00432320(0x25);
          if (iVar8 == 0) goto LAB_004149c7;
          FUN_00417c50();
          uVar17 = 0;
          uVar5 = 0x25;
        }
        FUN_00432350(uVar5,uVar17);
LAB_004149c7:
        unaff_ESI[0x4b] = 1;
        return;
      }
      if (((DAT_00459ac0 != 1) && (DAT_0044c758 != 0)) && (iVar8 = FUN_00414e70(), iVar8 != 0)) {
        DAT_0044c758 = DAT_0044c758 + -1;
      }
      if ((((byte)DAT_00458fb0 & 0x10) == 0) && (DAT_0045c724 != (int *)0x1)) {
        if (DAT_00459ac0 == 1) {
          return;
        }
        if (DAT_00459fb0 == 0) {
          return;
        }
        if (DAT_0044c758 != 0) {
          return;
        }
      }
      if (DAT_00459e38 < 3) {
        if (DAT_00459fb0 == 1) {
          DAT_0044c758 = 200;
          goto LAB_0041475b;
        }
        if (DAT_00459fb0 == 2) {
          DAT_0044c758 = 100;
          goto LAB_0041475b;
        }
      }
      else {
        if (DAT_00459fb0 == 1) {
          DAT_0044c758 = 300;
          goto LAB_0041475b;
        }
        if (DAT_00459fb0 == 2) {
          DAT_0044c758 = 0x96;
          goto LAB_0041475b;
        }
      }
      if (DAT_00459fb0 == 3) {
        DAT_0044c758 = 0x32;
      }
LAB_0041475b:
      DAT_00459980 = 0;
      _DAT_007ca9a4 = (int *)0x0;
      _DAT_007cc164 = (int *)0x0;
      DAT_00457e08 = 1;
      FUN_00432350(0,0);
      FUN_00432350(1,0);
      unaff_ESI[0x65] = 8;
      unaff_ESI[8] = unaff_ESI[8] + 1;
      unaff_ESI[0x4b] = 0;
      _DAT_0045bb30 = (int *)0x0;
      DAT_007cc160 = 10;
      DAT_007c92b0 = 0;
      unaff_ESI[0x4a] = *(uint *)(&DAT_0044c284 + DAT_00459e38 * 4);
      if (*(char *)(unaff_ESI[8] + 1) == '\x03') {
        _DAT_00459ab8 = 0xff;
      }
      if (DAT_0045a1cc == (int *)0x1) {
        FUN_004169e0(0);
      }
      iVar8 = FUN_00432320(0x25);
      if (iVar8 == 0) {
        return;
      }
      FUN_00417c50();
      FUN_00432350(0x25,0);
      return;
    case 3:
      DAT_0044c750 = 1;
      _DAT_00459ab8 = 0xff;
      unaff_ESI[0x4e] = (uint)unaff_EBX;
      unaff_ESI[0x4f] = (uint)unaff_EBX;
      unaff_ESI[0x66] = (uint)unaff_EBX;
      unaff_ESI[0x50] = (uint)unaff_EBX;
      unaff_ESI[0x4b] = (uint)unaff_EBX;
      DAT_00457e10 = (int *)0x3;
      if (DAT_0045a1cc == unaff_EBX) {
        iVar8 = 0x96;
      }
      else if ((int)DAT_0045a1cc - (int)unaff_EBX == 1) {
        iVar8 = 0x186;
      }
      else {
        if ((int)DAT_0045a1cc - (int)unaff_EBX != 2) goto LAB_00414a60;
        iVar8 = 0x96;
      }
      SetRect((LPRECT)&stack0x00000018,(int)unaff_EBX,(int)unaff_EBX,0x2d0,iVar8);
LAB_00414a60:
      DAT_00459964 = in_stack_0000001c;
      DAT_00459960 = in_stack_00000018;
      DAT_00459968 = in_stack_00000020;
      _DAT_0045996c = in_stack_00000024;
      FUN_0042d6f0(0x29,&stack0x00000018,(uint)unaff_EBX,bVar13,bVar13);
      DAT_00459960 = DAT_00459960 + (*(uint *)(DAT_004599e0 + 0x80) >> 0x10);
      DAT_00459964 = DAT_00459964 + (*(uint *)(DAT_004599e0 + 0x84) >> 0x10);
      FUN_00428d60(&DAT_00459960);
      unaff_ESI[99] = (uint)unaff_EBX;
      unaff_ESI[8] = unaff_ESI[8] + 1;
      if (DAT_0045c720 == unaff_EBX) {
        FUN_0042b370();
      }
      else {
        DAT_007ca9a8 = 0;
        FUN_004057b0(1,(uint)(DAT_00459f6c * DAT_00459f60 * 0x5a) / 10000);
        DAT_004588b8 = unaff_EBX;
        DAT_0045bc44 = unaff_EBX;
      }
      (*unaff_EBP)(&lpBuffer_007c92c0,&lpBuffer_0044c280);
      (*unaff_EBP)(&lpBuffer_007c9b20,&lpBuffer_0044c280);
      FUN_004169e0();
      return;
    case 4:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      FUN_004018d0();
      if (DAT_00459988 != 1) {
        Sleep((int)(in_stack_00000010 * 1000) / 0x3c);
      }
      goto switchD_004141c8_default;
    case 5:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      FUN_004018d0();
      unaff_ESI[0x4c] = in_stack_00000010;
      wsprintfA((LPSTR)&stack0x00000028,s_f_d__d_0044c7f4,DAT_007c9ac0,in_stack_00000010);
      (*unaff_EBP)(&lpBuffer_007c9b20,&stack0x00000028);
      FUN_00432350(0x151,1);
      goto switchD_004141c8_default;
    case 6:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      FUN_004018d0();
      FUN_004018d0();
      unaff_ESI[0x46] = in_stack_00000010;
      unaff_ESI[0x47] = in_stack_00000014;
      goto switchD_004141c8_default;
    case 7:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      FUN_004018d0();
      FUN_004018d0();
      unaff_ESI[0x4f] = in_stack_00000010;
      unaff_ESI[0x50] = in_stack_00000014;
      goto switchD_004141c8_default;
    case 9:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      FUN_004018d0();
      unaff_ESI[0x4e] = in_stack_00000010;
      goto switchD_004141c8_default;
    case 10:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      FUN_004018d0();
      if (in_stack_00000010 == 0xffffffff) {
        unaff_ESI[0x52] = (uint)unaff_EBX;
      }
      else {
        unaff_ESI[0x52] = 1;
        unaff_ESI[0x49] = in_stack_00000010;
      }
      goto switchD_004141c8_default;
    case 0xb:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      DAT_007ca340 = (int *)((byte)puVar2[1] + 1);
      uVar10 = unaff_ESI[8];
      unaff_ESI[8] = uVar10 + 1;
      if (DAT_007ca340 == (int *)0x1) {
        DAT_007c9ac8 = (uint)*(byte *)(uVar10 + 1);
        unaff_ESI[8] = unaff_ESI[8] + 2;
        puVar14 = &DAT_00458f60;
        for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar14 = 0xff;
          puVar14 = puVar14 + 1;
        }
        puVar14 = &DAT_00458fe0;
        DAT_00459144 = unaff_EBX;
        for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        puVar14 = &DAT_00458d80;
        DAT_00458dd4 = unaff_EBX;
        for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar14 = 0xff;
          puVar14 = puVar14 + 1;
        }
        puVar14 = &DAT_00458f00;
        DAT_00459c24 = unaff_EBX;
        for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar14 = 1;
          puVar14 = puVar14 + 1;
        }
        iVar8 = -1;
        pbVar15 = &lpBuffer_007c92c0;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar1 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar1 != 0);
        DAT_007c9ac4 = unaff_EBX;
        if (iVar8 == -2) {
          lpBuffer_007c9b20._0_1_ = bVar13;
          FUN_0042d6f0(0x2b,unaff_EBX,(uint)unaff_EBX,bVar13,bVar13);
        }
        else {
          (*unaff_EBP)(&lpBuffer_007c92c0,&lpBuffer_0044c280);
          (*unaff_EBP)(&lpBuffer_007c9b20,&lpBuffer_0044c280);
          FUN_004169e0();
          FUN_0042d6f0(0x2b,unaff_EBX,(uint)unaff_EBX,bVar13,bVar13);
        }
      }
      else {
        _DAT_00457e04 = 1;
        uVar5 = FUN_004059d0((int)DAT_007c9ac4 + DAT_007c9ac8);
        (&DAT_00458d80)[(int)DAT_007c9ac4] = uVar5;
        DAT_007c9ac4 = (int *)((int)DAT_007c9ac4 + 1);
      }
      if (DAT_007ca340 == (int *)0x3) {
        FUN_004018d0();
        (&DAT_00458f00)[(int)DAT_00459144] = in_stack_00000010;
      }
      if (((int *)0x1 < DAT_007ca340) && ((&DAT_00458f00)[(int)DAT_00459144] == 1)) {
        if ((lpBuffer_007c92c0 == 0xd) && (DAT_007c92c1 == '\n')) {
          lpBuffer_007c92c0 = bVar13;
          lpBuffer_007c9b20._0_1_ = bVar13;
        }
        uVar10 = unaff_ESI[0x4c];
        DAT_007c9ac0 = unaff_EBX;
        iVar8 = lstrlenA((LPCSTR)&lpBuffer_007c92c0);
        wsprintfA((LPSTR)&stack0x00000028,s_s_d__d_0044c7ec,iVar8 + DAT_007ca9b4,uVar10);
        (*unaff_EBP)(&lpBuffer_007c9b20,&stack0x00000028);
        (*unaff_EBP)();
      }
      goto switchD_004141c8_default;
    case 0xc:
      iVar8 = FUN_00414e70();
      if ((iVar8 == 0) || (DAT_00458c28 != (int *)0x1)) {
        if ((((byte)DAT_00458fb0 & 0x10) == 0) && (DAT_0045c724 != (int *)0x1)) {
          if (DAT_00458c28 == unaff_EBX) {
            if (DAT_00457e14 == bVar13) {
              DAT_00457e14 = 100;
              return;
            }
            bVar16 = DAT_00457e14 != 1;
            if (!bVar16) {
              unaff_ESI[8] = unaff_ESI[8] + 1;
              _DAT_0045bb30 = unaff_EBX;
            }
            DAT_00457e14 = DAT_00457e14 - 1;
            if ((int *)(uint)bVar16 != unaff_EBX) {
              return;
            }
          }
        }
        else {
          unaff_ESI[8] = unaff_ESI[8] + 1;
          _DAT_0045bb30 = unaff_EBX;
          unaff_ESI[0x4a] = *(uint *)(&DAT_0044c284 + DAT_00459e38 * 4);
        }
      }
      else {
        unaff_ESI[8] = unaff_ESI[8] + 1;
        _DAT_0045bb30 = unaff_EBX;
        unaff_ESI[0x4a] = *(uint *)(&DAT_0044c284 + DAT_00459e38 * 4);
      }
      goto switchD_004141c8_default;
    case 0xd:
      if ((int)unaff_EBX < DAT_007ca9a8) {
        return;
      }
      _DAT_007cc164 = (int *)0x1;
      uVar10 = unaff_ESI[8];
      unaff_ESI[8] = uVar10 + 1;
      lstrcpyA((LPSTR)&stack0x00000028,(LPCSTR)(uVar10 + 1));
      iVar8 = lstrlenA((LPCSTR)unaff_ESI[8]);
      unaff_ESI[8] = unaff_ESI[8] + iVar8 + 1;
      iVar8 = FUN_00414e90(&stack0x00000028);
      if (iVar8 != 0) {
        if (DAT_00459fb0 == 1) {
          DAT_0044c758 = 0x32;
        }
        else if (DAT_00459fb0 == 2) {
          DAT_0044c758 = 0x1e;
        }
        else if (DAT_00459fb0 == 3) {
          DAT_0044c758 = 0x14;
        }
      }
      if (((DAT_00459e30 & 4) != 0) && (DAT_00458c28 == (int *)0x1)) {
        FUN_00414e40();
      }
      (*unaff_EBP)(&lpBuffer_007c9b20,&lpString2_0044c7e0);
      (*unaff_EBP)(&lpBuffer_007c9b20,&stack0x00000020);
      (*unaff_EBP)(&lpBuffer_007c9b20,&lpString2_0044c7dc);
      goto switchD_004141c8_default;
    case 0xe:
      puVar6 = puVar2;
      if (DAT_00457e10 != (int *)0x1) {
        _DAT_00457e04 = 1;
        if (DAT_00459a2c == unaff_EBX) {
          iVar8 = DAT_0045c428;
          if (DAT_004599ac == unaff_EBX) {
            DAT_00458afc = unaff_ESI[unaff_ESI[0xb] + 0xb] - DAT_0045c428;
            DAT_0045c470 = unaff_EBX;
          }
          else if ((int)DAT_004599ac - (int)unaff_EBX == 1) {
            DAT_00458afc = unaff_ESI[unaff_ESI[0xb] + 0xb] - DAT_0045c42c;
            DAT_0045c470 = (int *)(unaff_ESI[unaff_ESI[0xb] + 10] - DAT_0045c428);
            iVar8 = DAT_0045c42c;
          }
          else {
            if ((int)DAT_004599ac - (int)unaff_EBX != 2) goto LAB_00414147;
            DAT_00458afc = unaff_ESI[unaff_ESI[0xb] + 0xb] - DAT_0045c428;
            DAT_0045c470 = (int *)(unaff_ESI[unaff_ESI[0xb] + 10] - DAT_0045c428);
          }
          DAT_0045ba04 = unaff_ESI[8] - iVar8;
        }
LAB_00414147:
        unaff_ESI[8] = unaff_ESI[8] + 1;
        goto switchD_004141c8_default;
      }
switchD_004141c8_caseD_0:
      unaff_ESI[8] = (uint)(puVar6 + 1);
      goto switchD_004141c8_default;
    case 0x10:
      puVar6 = puVar2 + 1;
      unaff_ESI[8] = (uint)puVar6;
      switch(*puVar6) {
      case 0:
      case 1:
        goto switchD_004141c8_caseD_0;
      case 2:
        unaff_ESI[8] = (uint)(puVar2 + 2);
        uVar10 = (uint)*(ushort *)(puVar2 + 2);
        unaff_ESI[0x67] = uVar10;
        unaff_ESI[8] = (uint)(puVar2 + 4);
        uVar11 = (uint)*(ushort *)(puVar2 + 4);
        unaff_ESI[8] = (uint)(puVar2 + 6);
        unaff_ESI[0x68] = uVar11;
        wsprintfA((LPSTR)&stack0x00000028,s_e_d__d__d_0044c7c4,DAT_007c9ac0,uVar10,uVar11);
        (*unaff_EBP)(&lpBuffer_007c9b20,&stack0x00000028);
        goto switchD_004141c8_default;
      case 3:
        unaff_ESI[0x67] = (uint)unaff_EBX;
        unaff_ESI[8] = (uint)(puVar2 + 2);
        unaff_ESI[0x68] = (uint)unaff_EBX;
        wsprintfA((LPSTR)&stack0x00000028,s_e_d_0_0_0044c7bc,DAT_007c9ac0);
        (*unaff_EBP)(&lpBuffer_007c9b20,&stack0x00000028);
        goto switchD_004141c8_default;
      case 4:
        unaff_ESI[8] = (uint)(puVar2 + 2);
        DAT_007ca9b0 = 1;
        (*unaff_EBP)(&lpBuffer_007c92c0,&lpBuffer_0044c280);
        (*unaff_EBP)(&lpBuffer_007c9b20,&lpBuffer_0044c280);
        FUN_004169e0();
        goto switchD_004141c8_default;
      case 5:
        unaff_ESI[8] = (uint)(puVar2 + 2);
        FUN_004018d0();
        _DAT_00459ab8 = in_stack_00000010;
        goto switchD_004141c8_default;
      case 6:
        iVar8 = FUN_00414e70();
        if ((((iVar8 == 0) && (((byte)DAT_00459148 & 0x10) == 0)) && (DAT_0045c724 != (int *)0x1))
           && (DAT_007c92b0 != 1)) {
          unaff_ESI[8] = unaff_ESI[8] - 1;
        }
        else {
          unaff_ESI[8] = unaff_ESI[8] + 1;
          _DAT_00457e00 = (int *)0x1;
          _DAT_0045bb30 = unaff_EBX;
        }
        goto switchD_004141c8_default;
      case 7:
        unaff_ESI[8] = (uint)(puVar2 + 2);
        _DAT_00457e00 = unaff_EBX;
      default:
        goto switchD_004141c8_default;
      }
    case 0x11:
      unaff_ESI[8] = (uint)(puVar2 + 1);
      in_stack_00000010 = (uint)(byte)puVar2[1];
      unaff_ESI[8] = (uint)(puVar2 + 2);
      unaff_ESI[0x66] = in_stack_00000010;
      wsprintfA((LPSTR)&stack0x00000028,s_b_d__d_0044c7d0,DAT_007c9ac0,in_stack_00000010);
      (*unaff_EBP)(&lpBuffer_007c9b20,&stack0x00000028);
      goto switchD_004141c8_default;
    case 0x12:
      goto switchD_00413bd9_caseD_12;
    }
    if (DAT_007ca340 == unaff_EBX) {
      _DAT_007ca9a4 = (int *)0x1;
    }
    if ((unaff_EBX < (int *)unaff_ESI[0x51]) && (DAT_007ca340 == unaff_EBX)) {
      piVar7 = (int *)((int)unaff_ESI[0x51] - 1);
      unaff_ESI[0x51] = (uint)piVar7;
      if ((piVar7 != unaff_EBX) && (DAT_0045c724 == unaff_EBX)) {
        return;
      }
      unaff_ESI[0x51] = (uint)unaff_EBX;
    }
    if (((((int *)unaff_ESI[0x4a] != unaff_EBX) && (DAT_007c92b0 != 1)) &&
        (DAT_0045c724 != (int *)0x1)) && (DAT_007ca340 <= unaff_EBX)) goto code_r0x00414370;
    pbVar15 = (byte *)unaff_ESI[8];
    in_stack_00000028 = bVar13;
    iVar8 = 0;
    bVar1 = *pbVar15;
    while (0x18 < bVar1) {
      (&stack0x00000028)[iVar8] = bVar1;
      bVar1 = (&stack0x00000028)[iVar8];
      iVar8 = iVar8 + 1;
      unaff_ESI[8] = (uint)(pbVar15 + 1);
      if ((bVar1 & 0x80) != 0) {
        FUN_004393e0();
        return;
      }
      if ((DAT_007ca340 == unaff_EBX) && (unaff_ESI[0x46] <= unaff_ESI[0x4f] + iVar8)) break;
      pbVar15 = (byte *)unaff_ESI[8];
      bVar1 = *pbVar15;
    }
    (&stack0x00000028)[iVar8] = bVar13;
  } while( true );
switchD_00413bd9_caseD_12:
  (*unaff_EBP)(&lpBuffer_007c9b20,&lpString2_0044c7d8);
  unaff_ESI[8] = unaff_ESI[8] + 1;
  unaff_ESI[0x4f] = unaff_ESI[0x4f] + 0xf;
  goto switchD_004141c8_default;
code_r0x00414370:
  unaff_EDI = 1;
  in_stack_00000028 = *(byte *)unaff_ESI[8];
  unaff_ESI[8] = (uint)((byte *)unaff_ESI[8] + 1);
  if ((in_stack_00000028 & 0x80) != 0) {
    FUN_00439490();
    return;
  }
  goto code_r0x0041439a;
}

