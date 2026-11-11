// Function: FUN_004b809f
// Entry: 004b809f
// Size: 203 bytes
// Thunk: false
// External: false


void FUN_004b809f(undefined4 *param_1,uint param_2)

{
  param_1[0x3a] = param_2 & 0x8000;
  param_1[0x34] = param_2;
  param_1[0x36] = 0;
  param_1[0x35] = ((param_2 & 0x60) != 0) + 3;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xff000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x10] = FUN_004b94e8;
  *param_1 = FUN_004b9549;
  param_1[8] = FUN_004bbe2b;
  param_1[0xf] = &LAB_004bbce0;
  param_1[0x12] = &LAB_004b9805;
  param_1[1] = &LAB_004b9b90;
  param_1[2] = &LAB_004b9c6c;
  param_1[0xe] = &LAB_004bafd1;
  param_1[5] = &LAB_004ba046;
  param_1[6] = &LAB_004ba053;
  param_1[7] = &LAB_004ba060;
  param_1[0x1a] = FUN_004b81d3;
  param_1[0x1b] = FUN_004b82a0;
  param_1[0x2d] = &LAB_004bbfd1;
  param_1[0x2e] = &LAB_004bbfd6;
  FUN_004bbe2b((int)param_1,0);
  return;
}


