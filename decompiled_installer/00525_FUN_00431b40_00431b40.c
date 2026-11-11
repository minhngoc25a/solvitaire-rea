// Function: FUN_00431b40
// Entry: 00431b40
// Size: 728 bytes
// Thunk: false
// External: false


int __cdecl FUN_00431b40(int *param_1,int param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_608 [64];
  char local_508 [1288];
  
  if (param_1 == (int *)0x0) {
    return -2;
  }
  if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
    if (param_4 == (int *)0x0) {
      return -2;
    }
    if (param_4[2] == 0) {
      return -2;
    }
    if (param_4[3] == 0) {
      return -2;
    }
    if (0xfe < (uint)param_4[3]) {
      return -2;
    }
    if (param_4[4] == 0) {
      return -2;
    }
    param_1[0x248] = param_4[2];
    param_1[0x249] = param_4[3];
    param_1[0x24a] = param_4[4];
    piVar4 = param_4 + 5;
    piVar5 = param_1 + 0x24b;
    for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    *(short *)piVar5 = (short)*piVar4;
    iVar2 = param_4[0x45];
    param_1[0x28b] = iVar2;
    param_1[0x28c] = param_4[0x47];
    if (iVar2 == 0) {
      if (param_4[4] == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)(param_4[0x46] * param_4[4]) / 1000;
      }
      param_1[0x28b] = uVar3;
    }
  }
  if ((param_2 == 1) || (param_2 == 3)) {
    if (param_3 == (int *)0x0) {
      return -2;
    }
    if (param_3[2] == 0) {
      return -2;
    }
    if (param_3[3] == 0) {
      return -2;
    }
    if (0xfe < (uint)param_3[3]) {
      return -2;
    }
    if (param_3[4] == 0) {
      return -2;
    }
    param_1[0xf6] = param_3[2];
    param_1[0xf7] = param_3[3];
    param_1[0xf8] = param_3[4];
    piVar4 = param_3 + 5;
    piVar5 = param_1 + 0xf9;
    for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    *(short *)piVar5 = (short)*piVar4;
    iVar2 = param_3[0x45];
    param_1[0x139] = iVar2;
    param_1[0x13a] = param_3[0x47];
    if (iVar2 == 0) {
      uVar3 = FUN_00431ea0(param_3[0x46],param_3[4]);
      param_1[0x139] = uVar3;
    }
  }
  if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
    iVar2 = (param_2 != 4) + 1;
    _memset(local_608,0,0x608);
    pcVar1 = *(code **)(*param_1 + 0x30);
    if (pcVar1 == (code *)0x0) {
      if (param_2 == 4) {
        puVar6 = (undefined4 *)param_1[0x32];
      }
      else {
        puVar6 = (undefined4 *)param_1[0x184];
      }
      iVar2 = FUN_004301d0(*param_1,iVar2,puVar6,local_608);
    }
    else {
      iVar2 = (*pcVar1)(param_1,iVar2,local_608);
    }
    if (iVar2 == 0) {
      pcVar7 = local_508;
    }
    else if (*param_4 == 0) {
      pcVar7 = "Default Capture Device";
    }
    else {
      pcVar7 = "Capture Device";
    }
    FUN_004353b0((char *)(param_1 + 0x1c5),0x100,(int)pcVar7,0xffffffff);
  }
  if ((param_2 == 1) || (param_2 == 3)) {
    _memset(local_608,0,0x608);
    pcVar1 = *(code **)(*param_1 + 0x30);
    if (pcVar1 == (code *)0x0) {
      iVar2 = FUN_004301d0(*param_1,1,(undefined4 *)param_1[0x32],local_608);
    }
    else {
      iVar2 = (*pcVar1)(param_1,1,local_608);
    }
    if (iVar2 == 0) {
      pcVar7 = local_508;
    }
    else if (*param_3 == 0) {
      pcVar7 = "Default Playback Device";
    }
    else {
      pcVar7 = "Playback Device";
    }
    FUN_004353b0((char *)(param_1 + 0x73),0x100,(int)pcVar7,0xffffffff);
  }
  iVar2 = FUN_004373c0(param_1,param_2);
  return iVar2;
}


