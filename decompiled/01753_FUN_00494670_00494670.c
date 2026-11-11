// Function: FUN_00494670
// Entry: 00494670
// Size: 339 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00494670(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,1,"archive_write_open");
  if (iVar1 == -0x1e) {
    return -0x1e;
  }
  FUN_00487360((int)param_1);
  param_1[0x21] = param_4;
  param_1[0x20] = param_3;
  param_1[0x22] = param_5;
  param_1[0x23] = param_6;
  param_1[0x24] = param_2;
  uVar2 = FUN_0047f911(1,0x40);
  if (uVar2 == 0) {
    return -0x1e;
  }
  *(uint **)(uVar2 + 8) = param_1;
  *(undefined4 *)(uVar2 + 0x38) = 1;
  if (param_1[0x27] == 0) {
    param_1[0x27] = uVar2;
  }
  else {
    *(uint *)(param_1[0x28] + 0xc) = uVar2;
  }
  param_1[0x28] = uVar2;
  *(code **)(uVar2 + 0x14) = FUN_00494a10;
  *(undefined1 **)(uVar2 + 0x18) = &LAB_00494b20;
  *(undefined1 **)(uVar2 + 0x1c) = &LAB_00494cd0;
  *(undefined1 **)(uVar2 + 0x20) = &LAB_00494c60;
  uVar2 = param_1[0x27];
  if ((*(int *)(uVar2 + 0xc) == 0) || (iVar1 = FUN_00494960(*(int *)(uVar2 + 0xc)), iVar1 == 0)) {
    if (*(int *)(uVar2 + 0x38) != 1) {
      iVar1 = -0x1e;
      goto LAB_004947a0;
    }
    if (*(code **)(uVar2 + 0x14) == (code *)0x0) {
      *(undefined4 *)(uVar2 + 0x38) = 2;
      iVar1 = 0;
      goto LAB_00494762;
    }
    iVar1 = (**(code **)(uVar2 + 0x14))(uVar2);
    uVar3 = 2;
    if (iVar1 != 0) {
      uVar3 = 0x8000;
    }
    *(undefined4 *)(uVar2 + 0x38) = uVar3;
  }
  if (-0x15 < iVar1) {
LAB_00494762:
    param_1[1] = 2;
    if ((code *)param_1[0x2b] != (code *)0x0) {
      iVar1 = (*(code *)param_1[0x2b])(param_1);
    }
    return iVar1;
  }
LAB_004947a0:
  iVar4 = FUN_004949b0((int)param_1);
  FUN_004947d0((int)param_1);
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  return iVar1;
}


