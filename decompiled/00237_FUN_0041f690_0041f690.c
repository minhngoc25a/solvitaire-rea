// Function: FUN_0041f690
// Entry: 0041f690
// Size: 130 bytes
// Thunk: false
// External: false


void FUN_0041f690(int *param_1,uint param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      if (puVar1[5] == 1) {
        uVar2 = puVar1[3];
      }
      else {
        FUN_0041f150(puVar1);
      }
      puVar1[5] = 1;
      puVar1[3] = 0;
    }
    if (param_4 == 1) {
      param_3 = (param_3 - ((int)uVar2 >> 0x1f)) - (uint)(param_2 < uVar2);
      SetFilePointer((HANDLE)*puVar1,param_2 - uVar2,&param_3,1);
      return;
    }
    SetFilePointer((HANDLE)*puVar1,param_2,&param_3,0);
  }
  return;
}


