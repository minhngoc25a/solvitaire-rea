// Function: FUN_0047771c
// Entry: 0047771c
// Size: 285 bytes
// Thunk: false
// External: false


HWND FUN_0047771c(HWND param_1)

{
  HWND hWnd;
  undefined4 *puVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  LONG LVar6;
  wchar_t local_64 [50];
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  puVar5 = puVar1 + 3;
  puVar2 = puVar1;
  if (puVar1[4] != 0) {
    puVar2 = (undefined4 *)*puVar5;
  }
  hWnd = (HWND)*puVar2;
  if (param_1 != (HWND)0x0) {
    FUN_0041e2d9(local_64,L"PB_GadgetStack_%i");
    if (hWnd != (HWND)0x0) {
      pvVar3 = GetPropW(hWnd,local_64);
      *(undefined4 *)((int)pvVar3 + 4) = *puVar1;
      *(undefined4 *)((int)pvVar3 + 8) = *puVar5;
      *(undefined4 *)((int)pvVar3 + 0xc) = puVar1[4];
      *(undefined4 *)((int)pvVar3 + 0x10) = puVar1[5];
      *puVar5 = 0;
    }
    pvVar3 = GetPropW(param_1,local_64);
    pvVar4 = (LPVOID)*puVar5;
    if (pvVar3 == (HANDLE)0x0) {
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = HeapAlloc(DAT_00542264,8,0x28);
        *puVar5 = pvVar4;
        puVar1[5] = 10;
      }
      puVar1[4] = 0;
      *puVar1 = param_1;
      puVar5 = HeapAlloc(DAT_00542264,8,0x18);
      *puVar5 = param_1;
      SetPropW(param_1,local_64,puVar5);
      LVar6 = SetWindowLongW(param_1,-4,0x477839);
      puVar5[5] = LVar6;
    }
    else {
      if (pvVar4 != (LPVOID)0x0) {
        HeapFree(DAT_00542264,0,pvVar4);
      }
      *puVar1 = *(undefined4 *)((int)pvVar3 + 4);
      puVar1[3] = *(undefined4 *)((int)pvVar3 + 8);
      puVar1[4] = *(undefined4 *)((int)pvVar3 + 0xc);
      puVar1[5] = *(undefined4 *)((int)pvVar3 + 0x10);
      *(undefined4 *)((int)pvVar3 + 8) = 0;
    }
    puVar1[1] = 0;
  }
  return hWnd;
}


