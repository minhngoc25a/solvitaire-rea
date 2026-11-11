// Function: FUN_004775f1
// Entry: 004775f1
// Size: 97 bytes
// Thunk: false
// External: false


void FUN_004775f1(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0046a600(DAT_00543a18);
  puVar2 = (undefined4 *)FUN_0046a560(DAT_00543a18);
  while (puVar2 != (undefined4 *)0x0) {
    if (puVar2[1] == param_1) {
      puVar2 = (undefined4 *)*puVar2;
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        HeapFree(DAT_00542264,0,puVar2);
        puVar2 = puVar1;
      }
      FUN_004b7850(DAT_00543a18);
    }
    puVar2 = (undefined4 *)FUN_0046a560(DAT_00543a18);
  }
  return;
}


