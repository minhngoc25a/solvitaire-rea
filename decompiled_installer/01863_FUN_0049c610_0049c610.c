// Function: FUN_0049c610
// Entry: 0049c610
// Size: 347 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c610(int *param_1)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  _memset(param_1 + 0x3c,0,0x98);
  param_1[0xf] = param_1[0xc] + param_1[0x11];
  param_1[0xb] = 0;
  param_1[5] = 0;
  iVar4 = param_1[0xc] + param_1[0x11] + param_1[10];
  iVar5 = iVar4 + ((uint)param_1[10] / 0x60) * -0x54;
  uVar6 = param_1[6];
  param_1[0xd] = iVar5;
  param_1[0x10] = iVar5;
  param_1[3] = uVar6;
  uVar10 = 0xc;
  if (uVar6 < 0xc) {
    uVar10 = uVar6;
  }
  iVar5 = iVar4 + -0xc;
  param_1[0xe] = iVar5;
  param_1[9] = ~uVar10;
  cVar7 = '\0';
  param_1[8] = ~uVar10;
  param_1[1] = iVar5;
  *param_1 = iVar5;
  *(undefined4 *)(iVar4 + -4) = 0;
  *(undefined2 *)*param_1 = 0x100;
  *(undefined2 *)(*param_1 + 2) = 0x101;
  iVar4 = param_1[0xd];
  param_1[2] = iVar4;
  param_1[0xd] = iVar4 + 0x600;
  *(int *)(*param_1 + 4) = iVar4;
  uVar6 = 0;
  do {
    pcVar2 = (char *)(param_1[2] + uVar6);
    uVar6 = uVar6 + 6;
    *pcVar2 = cVar7;
    cVar7 = cVar7 + '\x01';
    pcVar2[1] = '\x01';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
  } while (uVar6 < 0x600);
  uVar6 = 0;
  piVar8 = param_1 + 0x2b3;
  do {
    uVar10 = 0;
    piVar9 = piVar8;
    do {
      uVar1 = *(ushort *)((int)&DAT_00518f80 + uVar10);
      uVar3 = 0;
      do {
        *(short *)((int)piVar9 + uVar3 * 2) = 0x4000 - (short)((uint)uVar1 / (uVar6 + 2));
        uVar3 = uVar3 + 8;
      } while (uVar3 < 0x40);
      uVar10 = uVar10 + 2;
      piVar9 = (int *)((int)piVar9 + 2);
    } while (uVar10 < 0x10);
    uVar6 = uVar6 + 1;
    piVar8 = piVar8 + 0x20;
  } while (uVar6 < 0x80);
  uVar6 = 0;
  iVar4 = (int)param_1 + 0x48f;
  do {
    iVar5 = 0x10;
    do {
      *(undefined2 *)(iVar4 + -1) = 0x403;
      *(short *)(iVar4 + -3) = ((short)uVar6 + 2) * 0x28;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x19);
  return;
}


