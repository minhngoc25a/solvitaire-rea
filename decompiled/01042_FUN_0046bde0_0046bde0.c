// Function: FUN_0046bde0
// Entry: 0046bde0
// Size: 101 bytes
// Thunk: false
// External: false


undefined1 __cdecl FUN_0046bde0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_8;
  int *piVar2;
  
  local_8 = CONCAT13((char)param_2,
                     CONCAT12((char)((uint)param_2 >> 8),
                              CONCAT11((char)((uint)param_2 >> 0x10),(char)((uint)param_2 >> 0x18)))
                    );
  if ((param_1 != 0) && (*(int *)(param_1 + 0x240) != 0)) {
    piVar2 = (int *)((int)*(int **)(param_1 + 0x244) + *(int *)(param_1 + 0x240) * 5);
    do {
      piVar1 = (int *)((int)piVar2 + -5);
      if (local_8 == *piVar1) {
        return *(undefined1 *)((int)piVar2 + -1);
      }
      piVar2 = piVar1;
    } while (*(int **)(param_1 + 0x244) < piVar1);
  }
  return 0;
}


