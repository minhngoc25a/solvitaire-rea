// Function: FUN_0041f9e0
// Entry: 0041f9e0
// Size: 108 bytes
// Thunk: false
// External: false


uint FUN_0041f9e0(int *param_1,uint *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD local_4;
  
  local_4 = 0;
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[1] != 0) {
        uVar2 = FUN_004787f0(puVar1,param_2,param_3);
        return uVar2;
      }
      WriteFile((HANDLE)*puVar1,param_2,param_3,&local_4,(LPOVERLAPPED)0x0);
    }
    return local_4;
  }
  return 0;
}


