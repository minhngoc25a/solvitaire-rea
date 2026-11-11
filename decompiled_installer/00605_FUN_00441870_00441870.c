// Function: FUN_00441870
// Entry: 00441870
// Size: 702 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00441870(int param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x38);
  }
  FUN_004277a0(iVar4,4,0x52b3a8);
  pHVar1 = LoadLibraryA("user32.dll");
  if (pHVar1 == (HMODULE)0x0) {
    FUN_004277a0(iVar4,3,0x52b3c0);
    *(undefined4 *)(param_1 + 0x150) = 0;
    return 0xfffffe70;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  *(HMODULE *)(param_1 + 0x150) = pHVar1;
  FUN_004277a0(iVar4,4,0x52b410);
  pFVar2 = GetProcAddress(pHVar1,"GetForegroundWindow");
  if (pFVar2 == (FARPROC)0x0) {
    FUN_004277a0(iVar4,2,0x52b424);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  *(FARPROC *)(param_1 + 0x154) = pFVar2;
  pHVar1 = *(HMODULE *)(param_1 + 0x150);
  FUN_004277a0(iVar4,4,0x52b410);
  pFVar2 = GetProcAddress(pHVar1,"GetDesktopWindow");
  if (pFVar2 == (FARPROC)0x0) {
    FUN_004277a0(iVar4,2,0x52b424);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  *(FARPROC *)(param_1 + 0x158) = pFVar2;
  FUN_004277a0(iVar4,4,0x52b3a8);
  pHVar1 = LoadLibraryA("advapi32.dll");
  if (pHVar1 == (HMODULE)0x0) {
    FUN_004277a0(iVar4,3,0x52b3c0);
    *(undefined4 *)(param_1 + 0x15c) = 0;
    return 0xfffffe70;
  }
  *(HMODULE *)(param_1 + 0x15c) = pHVar1;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),pHVar1,"RegOpenKeyExA");
  *(FARPROC *)(param_1 + 0x160) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x15c),"RegCloseKey");
  *(FARPROC *)(param_1 + 0x164) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x15c),"RegQueryValueExA");
  iVar4 = *(int *)(param_1 + 0x38);
  *(FARPROC *)(param_1 + 0x168) = pFVar2;
  FUN_004277a0(iVar4,4,0x52b3a8);
  pHVar1 = LoadLibraryA("ole32.dll");
  if (pHVar1 == (HMODULE)0x0) {
    FUN_004277a0(iVar4,3,0x52b3c0);
    *(undefined4 *)(param_1 + 0x130) = 0;
    return 0xfffffe70;
  }
  *(HMODULE *)(param_1 + 0x130) = pHVar1;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),pHVar1,"CoInitialize");
  *(FARPROC *)(param_1 + 0x134) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x130),"CoInitializeEx");
  *(FARPROC *)(param_1 + 0x138) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x130),"CoUninitialize");
  *(FARPROC *)(param_1 + 0x13c) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x130),"CoCreateInstance");
  *(FARPROC *)(param_1 + 0x140) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x130),"CoTaskMemFree");
  *(FARPROC *)(param_1 + 0x144) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x130),"PropVariantClear");
  *(FARPROC *)(param_1 + 0x148) = pFVar2;
  pFVar2 = FUN_00435a50(*(int *)(param_1 + 0x38),*(HMODULE *)(param_1 + 0x130),"StringFromGUID2");
  *(FARPROC *)(param_1 + 0x14c) = pFVar2;
  if (*(code **)(param_1 + 0x138) != (code *)0x0) {
    uVar3 = (**(code **)(param_1 + 0x138))(0);
    *(undefined4 *)(param_1 + 0x16c) = uVar3;
    return 0;
  }
  uVar3 = (**(code **)(param_1 + 0x134))(0);
  *(undefined4 *)(param_1 + 0x16c) = uVar3;
  return 0;
}


