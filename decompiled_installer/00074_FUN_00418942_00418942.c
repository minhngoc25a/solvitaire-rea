// Function: FUN_00418942
// Entry: 00418942
// Size: 64 bytes
// Thunk: false
// External: false


void FUN_00418942(int *param_1)

{
  undefined4 *puVar1;
  int unaff_retaddr;
  
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07((int)DAT_00542930);
  }
  else {
    puVar1 = (undefined4 *)FUN_004258d0((int)DAT_00542930,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1[1]);
      FUN_00425965(DAT_00542930,unaff_retaddr);
    }
  }
  return;
}


