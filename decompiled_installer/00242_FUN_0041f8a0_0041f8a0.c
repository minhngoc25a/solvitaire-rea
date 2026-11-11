// Function: FUN_0041f8a0
// Entry: 0041f8a0
// Size: 105 bytes
// Thunk: false
// External: false


undefined8 FUN_0041f8a0(int *param_1)

{
  undefined4 *puVar1;
  uint local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      FUN_004781f0(puVar1,&local_8,8);
      return CONCAT44(local_4,local_8);
    }
    ReadFile((HANDLE)*puVar1,&local_8,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  }
  return CONCAT44(local_4,local_8);
}


