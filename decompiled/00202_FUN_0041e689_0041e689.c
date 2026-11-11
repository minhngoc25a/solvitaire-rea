// Function: FUN_0041e689
// Entry: 0041e689
// Size: 91 bytes
// Thunk: false
// External: false


void FUN_0041e689(int *param_1,UINT_PTR param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    for (puVar1 = (undefined4 *)puVar2[0x11]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == param_2) {
        KillTimer((HWND)*puVar2,param_2);
        FUN_004257fb(puVar2 + 0x11,(int)(puVar1 + 2));
        FUN_0047790e(0x3336,param_2,(int)param_1,-1);
        return;
      }
    }
  }
  return;
}


