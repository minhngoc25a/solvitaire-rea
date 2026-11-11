// Function: FUN_004e93d0
// Entry: 004e93d0
// Size: 116 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004e93d0(int *param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_4 == 1) {
    if (((*param_3 & 0xc0) == 0) && (*param_3 < 0x29)) {
      puVar1 = (uint *)FUN_0049b270(0x60,param_2);
      if (puVar1 == (uint *)0x0) {
        return 5;
      }
      if (*param_3 == 0x28) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *param_3 & 1 | 2;
        *puVar1 = uVar2;
        uVar2 = uVar2 << ((*param_3 >> 1) + 0xb & 0x1f);
      }
      *puVar1 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *param_1 = (int)puVar1;
      return 0;
    }
  }
  return 8;
}


