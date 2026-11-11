// Function: FUN_004291e0
// Entry: 004291e0
// Size: 170 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004291e0(uint *param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    if ((param_1 != (uint *)0x0) && (param_2 != (void *)0x0)) {
      uVar1 = *param_1;
      if (uVar1 == 0) {
        return 0xfffffffe;
      }
      param_3[6] = (uint)param_2;
      if (uVar1 * 8 != 0) {
        _memset(param_2,0,uVar1 * 8);
      }
      param_3[3] = 0x3f800000;
      param_3[4] = (uint)param_2;
      param_3[5] = (uint)((int)param_2 + uVar1 * 4);
      uVar1 = *param_1;
      param_3[1] = param_1[1];
      uVar2 = 0;
      *param_3 = uVar1;
      param_3[2] = 0xffffffff;
      if (*param_1 != 0) {
        do {
          *(undefined4 *)(param_3[4] + uVar2 * 4) = 0x3f800000;
          *(undefined4 *)(param_3[5] + uVar2 * 4) = 0x3f800000;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
      }
      return 0;
    }
  }
  return 0xfffffffe;
}


