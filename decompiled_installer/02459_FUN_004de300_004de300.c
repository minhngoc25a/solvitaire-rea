// Function: FUN_004de300
// Entry: 004de300
// Size: 534 bytes
// Thunk: false
// External: false


int __cdecl FUN_004de300(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = param_1;
  piVar3 = (int *)FUN_00507f00((uint *)&stack0x00000008);
  iVar9 = 4;
  iVar8 = *piVar3;
  iVar7 = piVar3[1];
  iVar6 = piVar3[2];
  iVar5 = piVar3[3];
  iVar1 = piVar3[8];
  iVar11 = piVar3[4];
  iVar10 = piVar3[5] + 0x76c;
  do {
    iVar9 = iVar9 + -1;
    *(char *)(param_1 + iVar9) = (char)iVar10 + (char)(iVar10 / 10) * -10 + '0';
    iVar10 = iVar10 / 10;
  } while (iVar9 != 0);
  iVar10 = 2;
  iVar11 = iVar11 + 1;
  do {
    iVar10 = iVar10 + -1;
    *(char *)(param_1 + 4 + iVar10) = (char)iVar11 + (char)(iVar11 / 10) * -10 + '0';
    iVar11 = iVar11 / 10;
  } while (iVar10 != 0);
  iVar11 = 2;
  do {
    iVar11 = iVar11 + -1;
    *(char *)(param_1 + 6 + iVar11) = (char)iVar5 + (char)(iVar5 / 10) * -10 + '0';
    iVar5 = iVar5 / 10;
  } while (iVar11 != 0);
  iVar11 = 2;
  do {
    iVar11 = iVar11 + -1;
    *(char *)(param_1 + 8 + iVar11) = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
    iVar6 = iVar6 / 10;
  } while (iVar11 != 0);
  iVar11 = 2;
  do {
    iVar11 = iVar11 + -1;
    *(char *)(param_1 + 10 + iVar11) = (char)iVar7 + (char)(iVar7 / 10) * -10 + '0';
    iVar7 = iVar7 / 10;
  } while (iVar11 != 0);
  iVar11 = 2;
  do {
    iVar11 = iVar11 + -1;
    *(char *)(param_1 + 0xc + iVar11) = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
    iVar8 = iVar8 / 10;
  } while (iVar11 != 0);
  iVar11 = 2;
  param_1 = 0;
  do {
    iVar11 = iVar11 + -1;
    *(char *)(iVar2 + 0xe + iVar11) = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    param_1 = param_1 / 10;
  } while (iVar11 != 0);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = 0xe10;
  }
  *(char *)(iVar2 + 0x10) = (char)(uVar4 / 900);
  return uVar4 * -0x6e5d4c3b;
}


