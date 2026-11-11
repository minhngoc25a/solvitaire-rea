// Function: FUN_0047a520
// Entry: 0047a520
// Size: 143 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047a520(int *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uStack_10;
  
  piVar2 = (int *)param_1[3];
  param_1[5] = (int)piVar2;
  *param_1 = piVar2[1];
  iVar3 = piVar2[2];
  param_1[1] = iVar3 / 2;
  param_1[2] = (uint)*(ushort *)((int)piVar2 + 0xe) * (uint)*(ushort *)(piVar2 + 3);
  if (piVar2[8] == 0) {
    sVar1 = *(short *)((int)piVar2 + 0xe);
    if (sVar1 == 1) {
      uStack_10 = 2;
    }
    else if (sVar1 == 4) {
      uStack_10 = 0x10;
    }
    else if (sVar1 == 8) {
      uStack_10 = 0x100;
    }
    else {
      uStack_10 = 0;
    }
  }
  else {
    uStack_10 = piVar2[8] & 0xffff;
  }
  iVar4 = (uStack_10 & 0x3fff) * 4 + *piVar2 + (int)piVar2;
  param_1[6] = iVar4;
  param_1[7] = ((int)((uint)*(ushort *)((int)piVar2 + 0xe) * (uint)*(ushort *)(piVar2 + 3) *
                      piVar2[1] + 0x1f) >> 3 & 0xfffffffcU) * (iVar3 / 2) + iVar4;
  return;
}


