// Function: FUN_00476299
// Entry: 00476299
// Size: 262 bytes
// Thunk: false
// External: false


undefined4 * FUN_00476299(int param_1)

{
  HBITMAP pHVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  HDC hdc;
  HDC hdc_00;
  int iVar4;
  int iVar5;
  HIMAGELIST p_Var6;
  UINT UVar7;
  int iVar8;
  int iVar9;
  
  puVar2 = HeapAlloc(DAT_00542264,0,0x14);
  puVar2[4] = 0x19;
  puVar2[3] = 0;
  pvVar3 = HeapAlloc(DAT_00542264,8,400);
  puVar2[2] = pvVar3;
  if (DAT_0054396c == (HBITMAP)0x0) {
    hdc = CreateDCW(L"DISPLAY",(LPCWSTR)0x0,(LPCWSTR)0x0,(DEVMODEW *)0x0);
    if (hdc != (HDC)0x0) {
      hdc_00 = CreateCompatibleDC((HDC)0x0);
      if (hdc_00 != (HDC)0x0) {
        iVar4 = GetSystemMetrics(0x32);
        iVar5 = GetSystemMetrics(0x31);
        DAT_0054396c = FUN_00476681(hdc,hdc_00,iVar5,iVar4);
        iVar4 = GetSystemMetrics(0xc);
        iVar5 = GetSystemMetrics(0xb);
        DAT_00543970 = FUN_00476681(hdc,hdc_00,iVar5,iVar4);
        DeleteDC(hdc_00);
      }
      DeleteDC(hdc);
    }
  }
  iVar9 = 1;
  iVar8 = 1;
  UVar7 = 0x21;
  iVar4 = GetSystemMetrics(0x32);
  iVar5 = GetSystemMetrics(0x31);
  p_Var6 = ImageList_Create(iVar5,iVar4,UVar7,iVar8,iVar9);
  pHVar1 = DAT_0054396c;
  *puVar2 = p_Var6;
  ImageList_AddMasked(p_Var6,pHVar1,0);
  if (param_1 == 0) {
    puVar2[1] = 0;
  }
  else {
    iVar9 = 1;
    iVar8 = 1;
    UVar7 = 0x21;
    iVar4 = GetSystemMetrics(0xc);
    iVar5 = GetSystemMetrics(0xb);
    p_Var6 = ImageList_Create(iVar5,iVar4,UVar7,iVar8,iVar9);
    pHVar1 = DAT_00543970;
    puVar2[1] = p_Var6;
    ImageList_AddMasked(p_Var6,pHVar1,0);
  }
  return puVar2;
}


