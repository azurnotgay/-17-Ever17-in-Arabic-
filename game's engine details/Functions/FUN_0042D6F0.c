
undefined4 FUN_0042d6f0(int param_1,int *param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  HDC hdc;
  int iVar1;
  HBRUSH h;
  HPEN h_00;
  HGDIOBJ h_01;
  HGDIOBJ h_02;
  uint color;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    local_c = 0;
    local_10 = 0;
    local_8 = *(int *)(&DAT_0045d020)[param_1];
    iVar1 = ((int *)(&DAT_0045d020)[param_1])[1];
  }
  else {
    local_10 = *param_2;
    local_c = param_2[1];
    local_8 = param_2[2];
    iVar1 = param_2[3];
  }
  hdc = *(HDC *)((&DAT_0045d020)[param_1] + 0x448);
  color = (uint)CONCAT11(param_5,param_4) << 8 | param_3 & 0xff;
  h = CreateSolidBrush(color);
  h_00 = CreatePen(0,0,color);
  h_01 = SelectObject(hdc,h);
  h_02 = SelectObject(hdc,h_00);
  Rectangle(hdc,local_10,local_c,local_8 + local_10,iVar1 + local_c);
  SelectObject(hdc,h_01);
  SelectObject(hdc,h_02);
  DeleteObject(h_00);
  DeleteObject(h);
  return 1;
}

