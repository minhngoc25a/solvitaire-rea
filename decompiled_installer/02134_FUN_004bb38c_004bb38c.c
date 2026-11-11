// Function: FUN_004bb38c
// Entry: 004bb38c
// Size: 48 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004bb38c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc4) + param_3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (((int)puVar1[1] < param_2) && (param_2 < (int)puVar1[2])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}


