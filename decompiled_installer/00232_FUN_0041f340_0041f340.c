// Function: FUN_0041f340
// Entry: 0041f340
// Size: 193 bytes
// Thunk: false
// External: false


uint * FUN_0041f340(uint *param_1,LPCWSTR param_2)

{
  uint *puVar1;
  HANDLE pvVar2;
  LPVOID pvVar3;
  uint *puVar4;
  
  puVar1 = (uint *)FUN_0042583b(DAT_0054348c,(int)param_1);
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  pvVar2 = CreateFileW(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  puVar4 = (uint *)(-(uint)(pvVar2 != (HANDLE)0xffffffff) & (uint)pvVar2);
  if (puVar4 != (uint *)0x0) {
    if (DAT_0053fb88 == 0) {
      pvVar3 = (LPVOID)0x0;
    }
    else {
      pvVar3 = HeapAlloc(DAT_00542264,0,DAT_0053fb88);
    }
    puVar1[1] = (uint)pvVar3;
    *puVar1 = (uint)puVar4;
    puVar1[2] = DAT_0053fb88;
    puVar1[3] = 0;
    puVar1[5] = 1;
    puVar1[6] = 2;
    puVar1[7] = 0;
    if (param_1 == (uint *)0xffffffff) {
      return puVar1;
    }
    return puVar4;
  }
  if (param_1 != (uint *)0xffffffff) {
    puVar1 = param_1;
  }
  FUN_00425965(DAT_0054348c,(int)puVar1);
  return (uint *)0x0;
}


