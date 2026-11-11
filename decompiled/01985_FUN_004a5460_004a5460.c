// Function: FUN_004a5460
// Entry: 004a5460
// Size: 45 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a5460(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(undefined4 *)(param_2 + 0x94) = uVar1;
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_3 + 1);
  }
  return;
}


