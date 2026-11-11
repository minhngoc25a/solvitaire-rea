// Function: FUN_004225d0
// Entry: 004225d0
// Size: 58 bytes
// Thunk: false
// External: false


int FUN_004225d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  
  if ((((param_1 != (undefined1 (*) [16])0x0) && (param_2 != (undefined1 (*) [16])0x0)) &&
      (*(short *)*param_1 != 0)) && (*(short *)*param_2 != 0)) {
    pauVar1 = FUN_0047ce20(param_1,param_2);
    if (pauVar1 != (undefined1 (*) [16])0x0) {
      return ((int)pauVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return 0;
}


