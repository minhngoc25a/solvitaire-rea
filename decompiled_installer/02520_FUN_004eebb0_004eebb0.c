// Function: FUN_004eebb0
// Entry: 004eebb0
// Size: 153 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eebb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[0x11] == param_1[3] - param_1[1]) {
    if ((((*(char *)((int)param_1 + 0x1f) == '\0') && ((char)param_1[7] == '\0')) &&
        (param_1[0x17] == 0)) &&
       ((uint)((param_1[0xf] + param_1[0xd]) - *param_1) <= (uint)param_1[0x11])) {
      FUN_004ee480(param_1);
    }
    FUN_004eea20(param_1);
  }
  if ((param_1[1] == 0) && ((uint)param_1[0x12] <= (uint)param_1[3])) {
    uVar1 = 0xffffffff - param_1[0x14];
    iVar2 = param_1[6];
    if (*(char *)((int)param_1 + 0x1d) != '\0') {
      iVar2 = iVar2 * 2;
    }
    param_1[1] = -uVar1;
    param_1[3] = param_1[3] - uVar1;
    FUN_004ee840(uVar1,(uint *)param_1[9],param_1[0x16] + iVar2);
  }
  if (param_1[5] == param_1[6]) {
    param_1[5] = 0;
  }
  FUN_004eeac0((int)param_1);
  return;
}


