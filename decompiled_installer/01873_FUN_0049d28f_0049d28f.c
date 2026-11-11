// Function: FUN_0049d28f
// Entry: 0049d28f
// Size: 160 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049d28f(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  DWORD DVar5;
  
  iVar1 = FUN_004c58b7(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_00544378 + 0x98) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_00544378 + 0x60) & 1) != 0)))) {
      iVar1 = FUN_004c58b7(2);
      iVar2 = FUN_004c58b7(1);
      if (iVar2 == iVar1) goto LAB_0049d2a5;
    }
    hObject = (HANDLE)FUN_004c58b7(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_0049d2f7;
    }
  }
LAB_0049d2a5:
  DVar5 = 0;
LAB_0049d2f7:
  FUN_004c5b64(param_1);
  *(undefined1 *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) = 0;
  if (DVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_0042479a(DVar5,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


