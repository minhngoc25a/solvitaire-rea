// Function: FUN_00405ee0
// Entry: 00405ee0
// Size: 589 bytes
// Thunk: false
// External: false


HBITMAP FUN_00405ee0(LPCWSTR param_1)

{
  HMODULE pHVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  HBITMAP pHVar6;
  SHFILEINFOW *pSVar7;
  longlong lVar8;
  int local_2d0;
  int *local_2cc;
  HICON local_2c8;
  int local_2c4;
  SHFILEINFOW local_2c0;
  
  FUN_00423f50();
  FUN_00424040(&param_1,param_1);
  local_2d0 = 0;
  pSVar7 = &local_2c0;
  for (iVar3 = 0xad; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar7->hIcon = (HICON)0x0;
    pSVar7 = (SHFILEINFOW *)&pSVar7->iIcon;
  }
  local_2cc = (int *)0x0;
  local_2c8 = (HICON)0x0;
  local_2c4 = 0;
  lVar8 = FUN_0041ee68(param_1);
  uVar5 = (undefined4)((ulonglong)lVar8 >> 0x20);
  uVar4 = extraout_ECX;
  if (-1 < lVar8) {
    SHGetFileInfoW(param_1,0,&local_2c0,0x2b4,0x4000);
    pHVar1 = FUN_00423c5d((HMODULE)0xffffffff,u_shell32_dll_005370dc);
    if (pHVar1 != (HMODULE)0x0) {
      iVar3 = FUN_00423b0c(&pHVar1->unused,u_SHGetImageList_00536de0,0,&DAT_00538370,&local_2cc);
      FUN_00423b8f(&pHVar1->unused);
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_00;
      if (iVar3 != 0) goto LAB_00405fd0;
    }
    (**(code **)(*local_2cc + 0x28))(local_2cc,local_2c0.iIcon,1,&local_2c8);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX;
    if ((local_2c8 != (HICON)0x0) &&
       (pHVar6 = FUN_004208dd((HBITMAP)0xffffffff,0x20,0x20,0x20,0xffffffff),
       uVar4 = extraout_ECX_02, uVar5 = extraout_EDX_01, pHVar6 != (HBITMAP)0x0)) {
      puVar2 = FUN_00420c2a(&pHVar6->unused);
      iVar3 = FUN_00420698(puVar2);
      uVar4 = extraout_ECX_03;
      uVar5 = extraout_EDX_02;
      if (iVar3 != 0) {
        (**(code **)(*local_2cc + 0x40))(local_2cc,&local_2c4,&local_2d0);
        if ((local_2c4 < 0x21) && (local_2d0 < 0x21)) {
          FUN_004205c1(local_2c8,0x10 - local_2c4 / 2,0x10 - local_2d0 / 2);
        }
        else {
          FUN_0042057f(local_2c8,0,0,0x20,0x20);
        }
        DestroyIcon(local_2c8);
        FUN_004206fd();
        uVar4 = extraout_ECX_04;
        uVar5 = extraout_EDX_03;
      }
      goto LAB_00405fd2;
    }
  }
LAB_00405fd0:
  pHVar6 = (HBITMAP)0x0;
LAB_00405fd2:
  FUN_00424120(uVar4,uVar5,param_1);
  return pHVar6;
}


