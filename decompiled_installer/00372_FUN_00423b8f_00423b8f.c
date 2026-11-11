// Function: FUN_00423b8f
// Entry: 00423b8f
// Size: 65 bytes
// Thunk: false
// External: false


void FUN_00423b8f(int *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07((int)DAT_0054357c);
  }
  else {
    puVar1 = (undefined4 *)FUN_004258d0((int)DAT_0054357c,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      FreeLibrary((HMODULE)*puVar1);
      FUN_00425965(DAT_0054357c,(int)param_1);
    }
  }
  return;
}


