// Function: FUN_0041f840
// Entry: 0041f840
// Size: 83 bytes
// Thunk: false
// External: false


uint FUN_0041f840(int *param_1)

{
  undefined4 *puVar1;
  uint local_4;
  
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      FUN_004781f0(puVar1,&local_4,4);
      return local_4;
    }
    ReadFile((HANDLE)*puVar1,&local_4,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  }
  return local_4;
}


