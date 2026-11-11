// Function: FUN_0042075b
// Entry: 0042075b
// Size: 363 bytes
// Thunk: false
// External: false


HICON FUN_0042075b(HICON param_1,short *param_2,int param_3)

{
  HICON pHVar1;
  HICON hIcon;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  HBITMAP pHVar7;
  int iVar8;
  ICONINFO local_2c;
  undefined1 local_18 [4];
  undefined2 local_14;
  undefined2 local_10;
  undefined1 local_6;
  
  pHVar1 = (HICON)FUN_0042583b(DAT_005434a8,(int)param_1);
  hIcon = FUN_0047a4a2(param_2);
  if (hIcon == (HICON)0x0) {
    iVar3 = FUN_00422077((int)param_2,param_3);
    pHVar1[3].unused = iVar3;
    if (iVar3 != 0) {
      uVar4 = FUN_004220f0();
      *(short *)&pHVar1[1].unused = (short)uVar4;
      uVar4 = FUN_004220ff();
      *(short *)((int)&pHVar1[1].unused + 2) = (short)uVar4;
      uVar4 = FUN_0042210e();
      *(char *)&pHVar1[2].unused = (char)uVar4;
      uVar4 = FUN_0042211d();
      *(char *)((int)&pHVar1[2].unused + 1) = (char)uVar4;
      iVar3 = FUN_0042212c();
      pHVar1[4].unused = iVar3;
      if (iVar3 < 2) {
        pHVar1[7].unused = 0;
        hIcon = (HICON)FUN_0047a3ec();
      }
      else {
        puVar5 = FUN_00420f7e(8,(undefined4 *)0x0,(int *)0x0,0);
        pHVar1[7].unused = (int)puVar5;
        if (0 < pHVar1[4].unused) {
          iVar3 = 0;
          do {
            piVar6 = FUN_00420ec6((int *)pHVar1[7].unused);
            pHVar7 = FUN_0047a3ec();
            *piVar6 = (int)pHVar7;
            iVar8 = FUN_0042213b();
            iVar3 = iVar3 + 1;
            piVar6[1] = iVar8;
          } while (iVar3 < pHVar1[4].unused);
        }
        puVar5 = FUN_0047a30e((undefined4 *)pHVar1[7].unused,0);
        pHVar1[5].unused = puVar5[1];
        hIcon = (HICON)*puVar5;
      }
      FUN_0042216a();
      if (hIcon != (HICON)0x0) goto LAB_0042089c;
    }
  }
  else {
    BVar2 = GetIconInfo(hIcon,&local_2c);
    if (BVar2 != 0) {
      GetObjectW(local_2c.hbmColor,0x18,local_18);
      *(undefined2 *)&pHVar1[1].unused = local_14;
      *(undefined2 *)((int)&pHVar1[1].unused + 2) = local_10;
      *(undefined1 *)&pHVar1[2].unused = local_6;
      *(undefined1 *)((int)&pHVar1[2].unused + 1) = local_6;
      pHVar1[3].unused = 0x4e4f4349;
      pHVar1[4].unused = 1;
      DeleteObject(local_2c.hbmMask);
      DeleteObject(local_2c.hbmColor);
LAB_0042089c:
      pHVar1->unused = (int)hIcon;
      if (param_1 != (HICON)0xffffffff) {
        return hIcon;
      }
      return pHVar1;
    }
  }
  if (param_1 != (HICON)0xffffffff) {
    pHVar1 = param_1;
  }
  FUN_00425965(DAT_005434a8,(int)pHVar1);
  return (HICON)0x0;
}


