// Function: FUN_004787f0
// Entry: 004787f0
// Size: 288 bytes
// Thunk: false
// External: false


uint FUN_004787f0(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint nNumberOfBytesToWrite;
  uint *puVar2;
  int local_4;
  
  puVar1 = param_1;
  param_1 = (undefined4 *)0x0;
  if (puVar1[7] != 0) {
    return 0;
  }
  if (puVar1[5] == 1) {
    local_4 = (int)-puVar1[3] >> 0x1f;
    SetFilePointer((HANDLE)*puVar1,-puVar1[3],&local_4,1);
    puVar1[5] = 0;
    puVar1[3] = puVar1[2];
  }
  nNumberOfBytesToWrite = param_3;
  if ((int)param_3 < (int)puVar1[3]) {
    puVar2 = (uint *)((puVar1[1] - puVar1[3]) + puVar1[2]);
    if (param_3 == 1) {
      *(char *)puVar2 = (char)*param_2;
      puVar1[3] = puVar1[3] + -1;
      return 1;
    }
    if (param_3 == 2) {
      *(short *)puVar2 = (short)*param_2;
      puVar1[3] = puVar1[3] + -2;
      return 2;
    }
    if (param_3 == 4) {
      *puVar2 = *param_2;
      puVar1[3] = puVar1[3] + -4;
      return 4;
    }
  }
  else {
    FUN_0041f150(puVar1);
    if ((int)puVar1[2] <= (int)nNumberOfBytesToWrite) {
      WriteFile((HANDLE)*puVar1,param_2,nNumberOfBytesToWrite,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      return (uint)param_1;
    }
    puVar2 = (uint *)((puVar1[1] - puVar1[3]) + puVar1[2]);
  }
  FUN_0044c490(puVar2,param_2,nNumberOfBytesToWrite);
  puVar1[3] = puVar1[3] - nNumberOfBytesToWrite;
  return nNumberOfBytesToWrite;
}


