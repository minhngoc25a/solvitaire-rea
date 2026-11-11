// Function: FUN_0041c78b
// Entry: 0041c78b
// Size: 104 bytes
// Thunk: false
// External: false


void FUN_0041c78b(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPWSTR lpString;
  uint uVar3;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(code **)(puVar1[1] + 0x18) == (code *)0x0) {
      iVar2 = GetWindowTextLengthW((HWND)*puVar1);
      lpString = (LPWSTR)FUN_0044c3e0(iVar2,param_2);
      *lpString = L'\0';
      GetWindowTextW((HWND)*puVar1,lpString,iVar2 + 1);
      uVar3 = FUN_0044be0a(lpString);
      FUN_0044c470(iVar2 - uVar3);
    }
    else {
      (**(code **)(puVar1[1] + 0x18))(puVar1,param_2);
    }
  }
  return;
}


