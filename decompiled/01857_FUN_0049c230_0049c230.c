// Function: FUN_0049c230
// Entry: 0049c230
// Size: 106 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c230(uint *param_1)

{
  short *psVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = (uint)(*(ushort *)(*param_1 + 2) < (ushort)((ushort)*(byte *)(param_1[2] + 1) * 2));
  param_1[8] = param_1[8] + uVar2;
  param_1[5] = uVar2;
  psVar1 = (short *)(*param_1 + 2);
  *psVar1 = *psVar1 + 4;
  bVar3 = *(char *)(param_1[2] + 1) + 4;
  *(byte *)(param_1[2] + 1) = bVar3;
  if (0x7c < bVar3) {
    FUN_0049ccd0((int *)param_1);
  }
  uVar2 = *(uint *)(param_1[2] + 2);
  if ((param_1[3] == 0) && (param_1[0xf] < uVar2)) {
    param_1[1] = uVar2;
    *param_1 = uVar2;
    return;
  }
  FUN_0049c900((int *)param_1);
  return;
}


