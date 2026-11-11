// Function: FUN_0041f1a0
// Entry: 0041f1a0
// Size: 136 bytes
// Thunk: false
// External: false


void FUN_0041f1a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07((int)DAT_0054348c);
    return;
  }
  puVar2 = (undefined4 *)FUN_004258d0((int)DAT_0054348c,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    if ((LPCVOID)puVar2[1] != (LPCVOID)0x0) {
      param_1 = (int *)0x0;
      if (puVar2[5] == 0) {
        WriteFile((HANDLE)*puVar2,(LPCVOID)puVar2[1],puVar2[2] - puVar2[3],(LPDWORD)&param_1,
                  (LPOVERLAPPED)0x0);
        puVar2[3] = puVar2[2];
      }
      HeapFree(DAT_00542264,0,(LPVOID)puVar2[1]);
    }
    CloseHandle((HANDLE)*puVar2);
    FUN_00425965(DAT_0054348c,(int)piVar1);
  }
  return;
}


