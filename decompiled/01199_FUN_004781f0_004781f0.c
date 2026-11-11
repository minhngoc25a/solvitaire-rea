// Function: FUN_004781f0
// Entry: 004781f0
// Size: 292 bytes
// Thunk: false
// External: false


uint FUN_004781f0(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *nNumberOfBytesToRead;
  
  puVar2 = param_1;
  if (param_1[5] == 0) {
    FUN_0041f150(param_1);
    puVar2[5] = 1;
    puVar2[3] = 0;
  }
  uVar3 = param_3;
  uVar1 = puVar2[3];
  puVar4 = (uint *)((puVar2[1] - uVar1) + puVar2[4]);
  if ((int)uVar1 < (int)param_3) {
    FUN_0044c490(param_2,puVar4,uVar1);
    param_2 = (uint *)((int)param_2 + uVar1);
    nNumberOfBytesToRead = (undefined4 *)(uVar3 - uVar1);
    if ((int)puVar2[2] <= (int)nNumberOfBytesToRead) {
      ReadFile((HANDLE)*puVar2,param_2,(DWORD)nNumberOfBytesToRead,(LPDWORD)&param_1,
               (LPOVERLAPPED)0x0);
      puVar2[3] = 0;
      return (int)param_1 + uVar1;
    }
    ReadFile((HANDLE)*puVar2,(LPVOID)puVar2[1],puVar2[2],(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    puVar2[3] = param_1;
    puVar2[4] = param_1;
    if ((int)param_1 < (int)nNumberOfBytesToRead) {
      nNumberOfBytesToRead = param_1;
    }
    FUN_0044c490(param_2,(uint *)puVar2[1],(uint)nNumberOfBytesToRead);
    puVar2[3] = puVar2[3] - (int)nNumberOfBytesToRead;
    return (int)nNumberOfBytesToRead + uVar1;
  }
  if (param_3 == 1) {
    *(char *)param_2 = (char)*puVar4;
    puVar2[3] = puVar2[3] + -1;
    return 1;
  }
  if (param_3 != 2) {
    if (param_3 != 4) {
      FUN_0044c490(param_2,puVar4,param_3);
      puVar2[3] = puVar2[3] - uVar3;
      return uVar3;
    }
    *param_2 = *puVar4;
    puVar2[3] = puVar2[3] + -4;
    return 4;
  }
  *(short *)param_2 = (short)*puVar4;
  puVar2[3] = puVar2[3] + -2;
  return 2;
}


