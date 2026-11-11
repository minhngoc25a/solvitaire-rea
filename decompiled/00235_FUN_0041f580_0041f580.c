// Function: FUN_0041f580
// Entry: 0041f580
// Size: 176 bytes
// Thunk: false
// External: false


void FUN_0041f580(int *param_1,SIZE_T param_2)

{
  undefined4 *puVar1;
  int lDistanceToMove;
  LPVOID pvVar2;
  int local_4;
  
  if (param_1 != (int *)0xffffffff) {
    puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[1] != 0) {
        if ((puVar1[5] == 1) && (0 < (int)puVar1[3])) {
          lDistanceToMove = -puVar1[3];
          local_4 = lDistanceToMove >> 0x1f;
          SetFilePointer((HANDLE)*puVar1,lDistanceToMove,&local_4,1);
        }
        FUN_0041f150(puVar1);
        HeapFree(DAT_00542264,0,(LPVOID)puVar1[1]);
        puVar1[1] = 0;
      }
      if (0 < (int)param_2) {
        pvVar2 = HeapAlloc(DAT_00542264,0,param_2);
        puVar1[1] = pvVar2;
        puVar1[2] = param_2;
        puVar1[3] = 0;
        puVar1[5] = 1;
      }
    }
    return;
  }
  DAT_0053fb88 = param_2;
  return;
}


