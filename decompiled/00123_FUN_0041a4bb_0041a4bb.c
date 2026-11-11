// Function: FUN_0041a4bb
// Entry: 0041a4bb
// Size: 33 bytes
// Thunk: false
// External: false


void FUN_0041a4bb(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (0 < (int)puVar1[4]) {
    iVar2 = puVar1[4] + -1;
    puVar1[4] = iVar2;
    *puVar1 = *(undefined4 *)(puVar1[3] + iVar2 * 4);
  }
  return;
}


