// Function: FUN_004710c0
// Entry: 004710c0
// Size: 423 bytes
// Thunk: false
// External: false


void __cdecl FUN_004710c0(int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_10 [4];
  
  bVar2 = *(byte *)(param_1 + 8);
  if (bVar2 != 3) {
    uVar6 = (uint)*(byte *)(param_1 + 9);
    if ((bVar2 & 2) == 0) {
      iVar8 = 1;
      local_10[0] = uVar6 - param_3[3];
    }
    else {
      iVar8 = 3;
      local_10[0] = uVar6 - *param_3;
      local_10[1] = uVar6 - param_3[1];
      local_10[2] = uVar6 - param_3[2];
    }
    if ((bVar2 & 4) != 0) {
      local_10[iVar8] = uVar6 - param_3[4];
      iVar8 = iVar8 + 1;
    }
    bVar3 = false;
    iVar4 = 0;
    if (iVar8 != 0) {
      do {
        if ((local_10[iVar4] < 1) || ((int)uVar6 <= local_10[iVar4])) {
          local_10[iVar4] = 0;
        }
        else {
          bVar3 = true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar8);
      if (bVar3) {
        switch(uVar6) {
        case 2:
          pbVar5 = param_2 + *(int *)(param_1 + 4);
          if (param_2 < pbVar5) {
            do {
              *param_2 = *param_2 >> 1 & 0x55;
              param_2 = param_2 + 1;
            } while (param_2 < pbVar5);
            return;
          }
          break;
        case 4:
          pbVar5 = param_2 + *(int *)(param_1 + 4);
          iVar8 = 0xf >> ((byte)local_10[0] & 0x1f);
          if (param_2 < pbVar5) {
            do {
              *param_2 = *param_2 >> ((byte)local_10[0] & 0x1f) & ((byte)iVar8 | (byte)(iVar8 << 4))
              ;
              param_2 = param_2 + 1;
            } while (param_2 < pbVar5);
            return;
          }
          break;
        case 8:
          iVar4 = 0;
          pbVar5 = param_2 + *(int *)(param_1 + 4);
          if (param_2 < pbVar5) {
            do {
              iVar1 = iVar4 + 1;
              *param_2 = *param_2 >> (*(byte *)(local_10 + iVar4) & 0x1f);
              param_2 = param_2 + 1;
              iVar4 = 0;
              if (iVar1 < iVar8) {
                iVar4 = iVar1;
              }
            } while (param_2 < pbVar5);
            return;
          }
          break;
        case 0x10:
          pbVar5 = param_2 + *(int *)(param_1 + 4);
          iVar4 = 0;
          while (param_2 < pbVar5) {
            iVar7 = (int)(uint)CONCAT11(*param_2,param_2[1]) >> ((byte)local_10[iVar4] & 0x1f);
            iVar1 = iVar4 + 1;
            *param_2 = (byte)((uint)iVar7 >> 8);
            param_2[1] = (byte)iVar7;
            param_2 = param_2 + 2;
            iVar4 = 0;
            if (iVar1 < iVar8) {
              iVar4 = iVar1;
            }
          }
        }
      }
    }
  }
  return;
}


