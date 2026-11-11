// Function: FUN_004bc88f
// Entry: 004bc88f
// Size: 83 bytes
// Thunk: false
// External: false


void FUN_004bc88f(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9,undefined1 param_10)

{
  undefined1 *puVar1;
  int iVar2;
  
  for (; param_9 != 0; param_9 = param_9 + -1) {
    puVar1 = (undefined1 *)
             (*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 4 + 3);
    iVar2 = param_8;
    if (0 < param_8) {
      do {
        *puVar1 = param_10;
        puVar1 = puVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_5 = param_5 + 1;
  }
  return;
}


