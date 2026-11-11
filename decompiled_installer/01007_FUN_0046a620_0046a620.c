// Function: FUN_0046a620
// Entry: 0046a620
// Size: 109 bytes
// Thunk: false
// External: false


void FUN_0046a620(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *lpMem;
  
  if (param_1 != (int *)0x0) {
    FUN_004a3aa0(param_1);
    FUN_00478a3d((undefined4 *)param_1[0xe]);
    HeapFree(DAT_00542264,0,(LPVOID)param_1[1]);
    HeapFree(DAT_00542264,0,(LPVOID)param_1[3]);
    lpMem = (undefined4 *)param_1[0xd];
    while (lpMem != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*lpMem;
      HeapFree(DAT_00542264,0,lpMem);
      lpMem = puVar1;
    }
    *(undefined4 *)param_1[0xc] = 0;
    HeapFree(DAT_00542264,0,param_1);
  }
  return;
}


