// Function: FUN_0046f860
// Entry: 0046f860
// Size: 514 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f860(int param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  
  uVar6 = *(uint *)(param_1 + 0x7c);
  if ((uVar6 & 0x1000) != 0) {
    sVar3 = *(short *)(param_1 + 0x148);
    if (*(byte *)((int)param_2 + 0x19) == 3) {
      *(undefined1 *)(param_2 + 6) = 8;
      *(char *)((int)param_2 + 0x19) = (sVar3 != 0) * '\x04' + '\x02';
      *(undefined2 *)((int)param_2 + 0x16) = 0;
      if (*(int *)(param_1 + 0x13c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0046f190(param_1);
      }
    }
    else {
      if ((sVar3 != 0) && ((uVar6 & 0x2000000) != 0)) {
        *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
      }
      if (*(byte *)(param_2 + 6) < 8) {
        *(undefined1 *)(param_2 + 6) = 8;
      }
      *(undefined2 *)((int)param_2 + 0x16) = 0;
    }
  }
  if ((char)uVar6 < '\0') {
    uVar4 = *(undefined2 *)(param_1 + 0x16c);
    *(undefined8 *)((int)param_2 + 0xaa) = *(undefined8 *)(param_1 + 0x164);
    *(undefined2 *)((int)param_2 + 0xb2) = uVar4;
  }
  param_2[10] = *(int *)(param_1 + 0x2c4);
  if ((char)param_2[6] == '\x10') {
    if ((uVar6 & 0x4000000) != 0) {
      *(undefined1 *)(param_2 + 6) = 8;
    }
    if ((uVar6 & 0x400) != 0) {
      *(undefined1 *)(param_2 + 6) = 8;
    }
  }
  pbVar1 = (byte *)((int)param_2 + 0x19);
  if ((uVar6 & 0x4000) != 0) {
    *pbVar1 = *pbVar1 | 2;
  }
  if ((uVar6 & 0x600000) != 0) {
    *pbVar1 = *pbVar1 & 0xfd;
  }
  uVar6 = *(uint *)(param_1 + 0x7c);
  if ((uVar6 & 0x40) != 0) {
    if (((*pbVar1 == 2) || (*pbVar1 == 6)) && (*(int *)(param_1 + 0x204) != 0)) {
      uVar6 = *(uint *)(param_1 + 0x7c);
      if ((char)param_2[6] == '\b') {
        *(undefined1 *)((int)param_2 + 0x19) = 3;
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x7c);
    }
  }
  if ((((uVar6 & 0x200) != 0) && ((char)param_2[6] == '\b')) &&
     (*(char *)((int)param_2 + 0x19) != '\x03')) {
    *(undefined1 *)(param_2 + 6) = 0x10;
  }
  if (((*(byte *)(param_1 + 0x7c) & 4) != 0) && (*(byte *)(param_2 + 6) < 8)) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  bVar7 = *(byte *)((int)param_2 + 0x19);
  if ((bVar7 == 3) || ((bVar7 & 2) == 0)) {
    cVar8 = '\x01';
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
    cVar8 = '\x03';
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x40000) != 0) {
    bVar7 = bVar7 & 0xfb;
    *(byte *)((int)param_2 + 0x19) = bVar7;
    *(undefined2 *)((int)param_2 + 0x16) = 0;
  }
  if ((bVar7 & 4) != 0) {
    cVar8 = cVar8 + '\x01';
    *(char *)((int)param_2 + 0x1d) = cVar8;
  }
  uVar6 = *(uint *)(param_1 + 0x7c);
  if (((uVar6 & 0x8000) != 0) && ((bVar7 == 2 || (bVar7 == 0)))) {
    cVar8 = cVar8 + '\x01';
    *(char *)((int)param_2 + 0x1d) = cVar8;
    if ((uVar6 & 0x1000000) != 0) {
      *(byte *)((int)param_2 + 0x19) = bVar7 | 4;
    }
  }
  if ((uVar6 & 0x100000) != 0) {
    if (*(char *)(param_1 + 0x70) != '\0') {
      *(char *)(param_2 + 6) = *(char *)(param_1 + 0x70);
    }
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != '\0') {
      *(char *)((int)param_2 + 0x1d) = cVar2;
      cVar8 = cVar2;
    }
  }
  bVar7 = (char)param_2[6] * cVar8;
  *(byte *)((int)param_2 + 0x1e) = bVar7;
  if (bVar7 < 8) {
    uVar6 = (uint)bVar7 * *param_2 + 7 >> 3;
    *(uint *)(param_1 + 0x130) = uVar6;
    param_2[3] = uVar6;
    return;
  }
  iVar5 = (uint)(bVar7 >> 3) * *param_2;
  *(int *)(param_1 + 0x130) = iVar5;
  param_2[3] = iVar5;
  return;
}


