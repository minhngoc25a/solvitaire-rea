// Function: FUN_004259b4
// Entry: 004259b4
// Size: 83 bytes
// Thunk: false
// External: false


undefined4 * FUN_004259b4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  puVar1 = HeapAlloc(DAT_00542264,8,0x38);
  puVar1[4] = 0;
  *puVar1 = param_1;
  puVar1[5] = param_3;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  pvVar2 = HeapAlloc(DAT_00542264,8,param_2 << 2);
  puVar1[3] = pvVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 8));
  return puVar1;
}


