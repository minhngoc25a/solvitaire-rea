// Function: FUN_00493d30
// Entry: 00493d30
// Size: 293 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00493d30(uint *param_1,uint param_2,uint param_3,char *param_4)

{
  uint uVar1;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar1 = *param_1;
  if (uVar1 < 0xcad11ca) {
    if ((uVar1 != 0xcad11c9) && ((uVar1 != 0xdeb0c5 && (uVar1 != 0xbadb0c5)))) {
LAB_00493e2d:
      FUN_00493e60("PROGRAMMER ERROR: Function ");
      FUN_00493e60(param_4);
      FUN_00493e60(" invoked with invalid archive handle.\n");
                    /* WARNING: Subroutine does not return */
      thunk_FUN_0047d96c();
    }
  }
  else if ((uVar1 != 0xb0c5c0de) && (uVar1 != 0xc001b0c5)) goto LAB_00493e2d;
  if (uVar1 != param_2) {
    FUN_00487380((int)param_1,0xffffffff,0x52fc30);
    param_1[1] = 0x8000;
    return 0xffffffe2;
  }
  if ((param_3 & param_1[1]) != 0) {
    return 0;
  }
  if (param_1[1] != 0x8000) {
    FUN_00493eb0(local_80,param_3);
    FUN_00493eb0(local_40,param_1[1]);
    FUN_00487380((int)param_1,0xffffffff,0x52fdc8);
  }
  param_1[1] = 0x8000;
  return 0xffffffe2;
}


