// Function: FUN_00474040
// Entry: 00474040
// Size: 330 bytes
// Thunk: false
// External: false


void __cdecl FUN_00474040(int param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  if (((int)(uint)*(ushort *)(param_1 + 0x140) < 1 << (*(byte *)((int)param_2 + 9) & 0x1f)) &&
     (*(ushort *)(param_1 + 0x140) != 0)) {
    pbVar1 = *(byte **)(param_1 + 0x124);
    pbVar3 = pbVar1 + param_2[1] + -1;
    uVar4 = -((uint)*(byte *)((int)param_2 + 0xb) * *param_2) & 7;
    switch(*(byte *)((int)param_2 + 9)) {
    case 1:
      if (pbVar1 < pbVar3) {
        do {
          if (*pbVar3 >> (sbyte)uVar4 != 0) {
            *(undefined4 *)(param_1 + 0x144) = 1;
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = 0;
        } while (pbVar1 < pbVar3);
        return;
      }
      break;
    case 2:
      if (pbVar1 < pbVar3) {
        uVar5 = *(uint *)(param_1 + 0x144);
        do {
          bVar2 = *pbVar3 >> (sbyte)uVar4;
          if ((int)uVar5 < (int)(bVar2 & 3)) {
            uVar5 = bVar2 & 3;
          }
          uVar4 = bVar2 >> 2 & 3;
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          uVar4 = bVar2 >> 4 & 3;
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          if ((int)uVar5 < (int)(uint)(bVar2 >> 6)) {
            uVar5 = (uint)(bVar2 >> 6);
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = 0;
        } while (pbVar1 < pbVar3);
        *(uint *)(param_1 + 0x144) = uVar5;
        return;
      }
      break;
    case 4:
      if (pbVar1 < pbVar3) {
        uVar5 = *(uint *)(param_1 + 0x144);
        do {
          bVar2 = *pbVar3 >> (sbyte)uVar4;
          uVar4 = bVar2 & 0xf;
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          uVar4 = (uint)(bVar2 >> 4);
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = 0;
        } while (pbVar1 < pbVar3);
        *(uint *)(param_1 + 0x144) = uVar5;
        return;
      }
      break;
    case 8:
      if (pbVar1 < pbVar3) {
        uVar4 = *(uint *)(param_1 + 0x144);
        do {
          uVar5 = (uint)*pbVar3;
          if ((int)(uint)*pbVar3 <= (int)uVar4) {
            uVar5 = uVar4;
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = uVar5;
        } while (pbVar1 < pbVar3);
        *(uint *)(param_1 + 0x144) = uVar5;
      }
    }
  }
  return;
}


