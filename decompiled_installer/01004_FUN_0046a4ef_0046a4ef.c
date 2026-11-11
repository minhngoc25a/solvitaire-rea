// Function: FUN_0046a4ef
// Entry: 0046a4ef
// Size: 105 bytes
// Thunk: false
// External: false


void __fastcall FUN_0046a4ef(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *lpMem;
  
  if (param_3 != (undefined4 *)0x0) {
    FUN_004a3a36(param_1,param_2,param_3);
    FUN_00478a3d((undefined4 *)param_3[7]);
    *(undefined4 *)param_3[9] = 0;
    *(undefined4 *)(param_3[9] + 4) = 0;
    lpMem = (undefined4 *)param_3[8];
    while (lpMem != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*lpMem;
      HeapFree(DAT_00542264,0,lpMem);
      lpMem = puVar1;
    }
    if (*(char *)((int)param_3 + 0x32) != '\0') {
      HeapFree(DAT_00542264,0,(LPVOID)param_3[9]);
    }
    HeapFree(DAT_00542264,0,param_3);
  }
  return;
}


