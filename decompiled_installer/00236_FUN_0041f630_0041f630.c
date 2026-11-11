// Function: FUN_0041f630
// Entry: 0041f630
// Size: 93 bytes
// Thunk: false
// External: false


void FUN_0041f630(int *param_1,LONG param_2,LONG param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      if (puVar1[5] != 1) {
        FUN_0041f150(puVar1);
      }
      puVar1[5] = 1;
      puVar1[3] = 0;
    }
    SetFilePointer((HANDLE)*puVar1,param_2,&param_3,0);
  }
  return;
}


