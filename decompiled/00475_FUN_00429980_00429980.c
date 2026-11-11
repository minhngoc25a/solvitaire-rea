// Function: FUN_00429980
// Entry: 00429980
// Size: 247 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00429980(int param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,
            uint param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (param_2 < 0.0) {
      uVar1 = *(uint *)(param_1 + 0x24);
      uVar2 = *(uint *)(param_1 + 0x20);
      if ((0 < (int)uVar1) || (param_2 = DAT_0050c314, -1 < (int)uVar1)) {
        if (uVar2 == 0 && uVar1 == 0) {
          param_2 = *(float *)(param_1 + 0xc);
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x18);
          param_2 = *(float *)(param_1 + 0x10);
          if ((uVar1 < *(uint *)(param_1 + 0x1c)) ||
             ((uVar1 == *(uint *)(param_1 + 0x1c) && (uVar2 < uVar3)))) {
            param_2 = (param_2 - *(float *)(param_1 + 0xc)) *
                      ((float)((double)(int)uVar2 + (double)(&DAT_0050c3d0)[-((int)uVar2 >> 0x1f)])
                      / (float)((double)(int)uVar3 + (double)(&DAT_0050c3d0)[-((int)uVar3 >> 0x1f)])
                      ) + *(float *)(param_1 + 0xc);
          }
        }
      }
    }
    if (param_5 != 0) {
      param_4 = 0xffffffff;
    }
    if ((-1 < param_7) && ((0 < param_7 || (0x7fffffff < param_6)))) {
      param_6 = 0x7fffffff;
      param_7 = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = param_4;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(float *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x20) = -param_6;
    *(uint *)(param_1 + 0x24) = -(param_7 + (uint)(param_6 != 0));
  }
  return;
}


