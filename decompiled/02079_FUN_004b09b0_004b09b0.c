// Function: FUN_004b09b0
// Entry: 004b09b0
// Size: 312 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004b09b0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int local_8;
  
  piVar1 = (int *)param_1[4];
  iVar3 = param_1[1];
  pbVar4 = (byte *)*param_1;
  local_8 = param_3;
  if (piVar1[0x65] == 0) {
    for (; local_8 < 0x19; local_8 = local_8 + 8) {
      if (iVar3 == 0) {
        uVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
        if ((char)uVar2 == '\0') {
LAB_004b0a62:
          return uVar2 & 0xffffff00;
        }
        pbVar4 = *(byte **)piVar1[6];
        iVar3 = ((undefined4 *)piVar1[6])[1];
      }
      uVar2 = (uint)*pbVar4;
      iVar3 = iVar3 + -1;
      pbVar4 = pbVar4 + 1;
      if (uVar2 == 0xff) {
        do {
          if (iVar3 == 0) {
            uVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
            if ((char)uVar2 == '\0') goto LAB_004b0a62;
            pbVar4 = *(byte **)piVar1[6];
            iVar3 = ((undefined4 *)piVar1[6])[1];
          }
          uVar2 = (uint)*pbVar4;
          iVar3 = iVar3 + -1;
          pbVar4 = pbVar4 + 1;
        } while (uVar2 == 0xff);
        if (uVar2 != 0) {
          piVar1[0x65] = uVar2;
          goto LAB_004b0a79;
        }
        uVar2 = 0xff;
      }
      param_2 = param_2 << 8 | uVar2;
    }
  }
  else {
LAB_004b0a79:
    if (local_8 < param_4) {
      if (*(char *)(piVar1[0x6c] + 0x28) == '\0') {
        *(undefined4 *)(*piVar1 + 0x14) = 0x78;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined1 *)(piVar1[0x6c] + 0x28) = 1;
      }
      param_2 = param_2 << (0x19U - (char)local_8 & 0x1f);
      local_8 = 0x19;
    }
  }
  param_1[1] = iVar3;
  *param_1 = pbVar4;
  param_1[2] = param_2;
  param_1[3] = local_8;
  return CONCAT31((int3)((uint)local_8 >> 8),1);
}


