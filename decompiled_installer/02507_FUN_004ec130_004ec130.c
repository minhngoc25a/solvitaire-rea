// Function: FUN_004ec130
// Entry: 004ec130
// Size: 1319 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004ec130(byte *param_1,uint param_2,byte *param_3,uint *param_4,int param_5,undefined4 *param_6)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var;
  byte *pbVar7;
  undefined3 extraout_var_00;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint *local_10;
  byte *local_8;
  uint *local_4;
  
  pbVar3 = param_1;
  pbVar10 = (byte *)*param_4;
  *param_4 = 0;
  *param_6 = 0;
  uVar8 = *(uint *)(param_1 + 0x44);
  if (uVar8 < 0x113) {
    param_1 = pbVar10;
    if (uVar8 == 0x112) goto LAB_004ec63d;
  }
  else {
    if (0x114 < uVar8) {
      return (-(uint)(uVar8 != 0x1ff) & 0xfffffff6) + 0xb;
    }
    while ((pbVar10 != (byte *)0x0 && (*(uint *)(param_1 + 0x4c) < 5))) {
      bVar1 = *param_3;
      param_3 = param_3 + 1;
      param_1[*(uint *)(param_1 + 0x4c) + 0x50] = bVar1;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *param_4 = *param_4 + 1;
      pbVar10 = pbVar10 + -1;
    }
    if (*(uint *)(param_1 + 0x4c) == 0) {
LAB_004ec5ff:
      *param_6 = 3;
      return 0;
    }
    if (param_1[0x50] != 0) {
      return 1;
    }
    if (*(uint *)(param_1 + 0x4c) < 5) goto LAB_004ec5ff;
    uVar8 = CONCAT31(CONCAT21(CONCAT11(param_1[0x51],param_1[0x52]),param_1[0x53]),param_1[0x54]);
    *(uint *)(param_1 + 0x24) = uVar8;
    if (((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x28) == 0)) && (0xbffffbff < uVar8)
       ) {
      return 1;
    }
    uVar8 = *(uint *)(param_1 + 0x44);
    pbVar3[0x20] = 0xff;
    pbVar3[0x21] = 0xff;
    pbVar3[0x22] = 0xff;
    pbVar3[0x23] = 0xff;
    pbVar3[0x4c] = 0;
    pbVar3[0x4d] = 0;
    pbVar3[0x4e] = 0;
    pbVar3[0x4f] = 0;
    if (0x113 < uVar8) {
      uVar8 = (0x300 << (param_1[1] + *param_1 & 0x1f)) + 0x7c0;
      puVar11 = *(undefined4 **)(param_1 + 8);
      for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = 0x4000400;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined2 *)puVar11 = 0x400;
        puVar11 = (undefined4 *)((int)puVar11 + 2);
      }
      pbVar3[0x30] = 1;
      pbVar3[0x31] = 0;
      pbVar3[0x32] = 0;
      pbVar3[0x33] = 0;
      pbVar3[0x3c] = 1;
      pbVar3[0x3d] = 0;
      pbVar3[0x3e] = 0;
      pbVar3[0x3f] = 0;
      pbVar3[0x38] = 1;
      pbVar3[0x39] = 0;
      pbVar3[0x3a] = 0;
      pbVar3[0x3b] = 0;
      pbVar3[0x34] = 1;
      pbVar3[0x35] = 0;
      pbVar3[0x36] = 0;
      pbVar3[0x37] = 0;
      pbVar3[0x40] = 0;
      pbVar3[0x41] = 0;
      pbVar3[0x42] = 0;
      pbVar3[0x43] = 0;
    }
    pbVar3[0x44] = 0;
    pbVar3[0x45] = 0;
    pbVar3[0x46] = 0;
    pbVar3[0x47] = 0;
    uVar8 = 0;
    param_1 = pbVar10;
  }
  local_10 = (uint *)(pbVar3 + 0x18);
  local_4 = local_10;
  do {
    if (uVar8 != 0) {
      uVar9 = *local_4;
      uVar5 = param_2 - uVar9;
      uVar12 = uVar8;
      if ((uVar8 <= uVar5) || (uVar12 = uVar5, local_10 = local_4, uVar5 != 0)) {
        if ((*(int *)(pbVar3 + 0x2c) == 0) &&
           ((uint)(*(int *)(pbVar3 + 4) - *(int *)(pbVar3 + 0x28)) <= uVar12)) {
          *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 4);
        }
        *(uint *)(pbVar3 + 0x28) = *(int *)(pbVar3 + 0x28) + uVar12;
        local_8 = *(byte **)(pbVar3 + 0x14);
        *(uint *)(pbVar3 + 0x44) = uVar8 - uVar12;
        iVar6 = *(int *)(pbVar3 + 0x10);
        uVar8 = *(uint *)(pbVar3 + 0x30);
        do {
          *(undefined1 *)(iVar6 + uVar9) =
               *(undefined1 *)(((-(uint)(uVar9 < uVar8) & (uint)local_8) - uVar8) + iVar6 + uVar9);
          uVar9 = uVar9 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        local_10 = (uint *)(pbVar3 + 0x18);
        *local_10 = uVar9;
      }
    }
    bVar4 = false;
    bVar2 = false;
    if (param_2 <= *local_10) {
      if ((*(int *)(pbVar3 + 0x44) == 0) && (*(int *)(pbVar3 + 0x24) == 0)) {
        *param_6 = 4;
        return 0;
      }
      if (param_5 == 0) {
        *param_6 = 2;
        return 0;
      }
      if (*(int *)(pbVar3 + 0x44) != 0) goto LAB_004ec5ac;
      bVar4 = true;
      bVar2 = true;
    }
    uVar8 = *(uint *)(pbVar3 + 0x4c);
    if (uVar8 == 0) {
      pbVar13 = (byte *)0xffffffff;
      if ((param_1 < (byte *)0x14) || (bVar4)) {
        local_8 = param_1 + (int)param_3;
        iVar6 = FUN_004edde0(pbVar3,param_3,&local_8);
        if (iVar6 == 0) {
          if ((byte *)0x13 < param_1) goto LAB_004ec3f2;
          *param_4 = (uint)(param_1 + *param_4);
          pbVar10 = (byte *)0x0;
          *(byte **)(pbVar3 + 0x4c) = param_1;
          if (param_1 != (byte *)0x0) {
            do {
              (pbVar3 + 0x50)[(int)pbVar10] = pbVar10[(int)param_3];
              pbVar10 = pbVar10 + 1;
            } while (pbVar10 < param_1);
          }
          goto LAB_004ec5ff;
        }
        pbVar13 = local_8 + -(int)param_3;
        if ((byte *)0x14 < pbVar13) goto LAB_004ec3f2;
        pbVar10 = param_3;
        if ((bVar2) && (iVar6 != 2)) {
          *param_4 = (uint)(pbVar13 + *param_4);
          pbVar10 = (byte *)0x0;
          *(byte **)(pbVar3 + 0x4c) = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            do {
              (pbVar3 + 0x50)[(int)pbVar10] = pbVar10[(int)param_3];
              pbVar10 = pbVar10 + 1;
            } while (pbVar10 < pbVar13);
          }
LAB_004ec5ac:
          *param_6 = 2;
          return 1;
        }
      }
      else {
        pbVar10 = param_1 + -0x14 + (int)param_3;
      }
      *(byte **)(pbVar3 + 0x1c) = param_3;
      uVar8 = param_2;
      if ((*(int *)(pbVar3 + 0x2c) == 0) &&
         (uVar8 = *local_10 + (*(int *)(pbVar3 + 4) - *(int *)(pbVar3 + 0x28)),
         param_2 - *local_10 <= (uint)(*(int *)(pbVar3 + 4) - *(int *)(pbVar3 + 0x28)))) {
        uVar8 = param_2;
      }
      bVar4 = FUN_004ec7e0(pbVar3,uVar8,pbVar10);
      iVar6 = CONCAT31(extraout_var,bVar4);
      if ((*(int *)(pbVar3 + 0x2c) == 0) && (*(uint *)(pbVar3 + 4) <= *(uint *)(pbVar3 + 0x28))) {
        *(uint *)(pbVar3 + 0x2c) = *(uint *)(pbVar3 + 4);
      }
      pbVar10 = *(byte **)(pbVar3 + 0x1c);
      pbVar7 = pbVar10 + -(int)param_3;
      if ((int)pbVar13 < 0) {
        if (param_1 < pbVar7) {
LAB_004ec3f2:
          pbVar3[0x44] = 0xff;
          pbVar3[0x45] = 1;
          pbVar3[0x46] = 0;
          pbVar3[0x47] = 0;
          return 0xb;
        }
      }
      else if (pbVar13 != pbVar7) goto LAB_004ec3f2;
      *param_4 = (uint)(pbVar7 + *param_4);
    }
    else {
      pbVar10 = (byte *)0x0;
      local_8 = (byte *)0xffffffff;
      if (uVar8 < 0x14) {
        pbVar7 = pbVar3 + uVar8 + 0x50;
        do {
          if (param_1 <= pbVar10) goto LAB_004ec44b;
          uVar8 = uVar8 + 1;
          *pbVar7 = pbVar10[(int)param_3];
          pbVar10 = pbVar10 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 < 0x14);
      }
      if (bVar2) {
LAB_004ec44b:
        local_8 = pbVar3 + uVar8 + 0x50;
        iVar6 = FUN_004edde0(pbVar3,pbVar3 + 0x50,&local_8);
        if (iVar6 == 0) {
          if (uVar8 < 0x14) {
            *(uint *)(pbVar3 + 0x4c) = uVar8;
            *param_4 = (uint)(pbVar10 + *param_4);
            *param_6 = 3;
            return 0;
          }
          goto LAB_004ec3f2;
        }
        pbVar10 = local_8 + (-0x50 - (int)pbVar3);
        if (pbVar10 < *(byte **)(pbVar3 + 0x4c)) goto LAB_004ec3f2;
        if ((bVar2) && (iVar6 != 2)) {
          *param_4 = (uint)(pbVar10 + (*param_4 - (int)*(byte **)(pbVar3 + 0x4c)));
          *(byte **)(pbVar3 + 0x4c) = pbVar10;
          *param_6 = 2;
          return 1;
        }
      }
      else {
        pbVar10 = (byte *)0xffffffff;
      }
      *(byte **)(pbVar3 + 0x1c) = pbVar3 + 0x50;
      uVar8 = param_2;
      if (*(int *)(pbVar3 + 0x2c) == 0) {
        if ((uint)(*(int *)(pbVar3 + 4) - *(int *)(pbVar3 + 0x28)) < param_2 - *local_10) {
          uVar8 = *local_10 + (*(int *)(pbVar3 + 4) - *(int *)(pbVar3 + 0x28));
        }
      }
      bVar4 = FUN_004ec7e0(pbVar3,uVar8,pbVar3 + 0x50);
      iVar6 = CONCAT31(extraout_var_00,bVar4);
      if ((*(int *)(pbVar3 + 0x2c) == 0) && (*(uint *)(pbVar3 + 4) <= *(uint *)(pbVar3 + 0x28))) {
        *(uint *)(pbVar3 + 0x2c) = *(uint *)(pbVar3 + 4);
      }
      pbVar7 = (byte *)((*(int *)(pbVar3 + 0x1c) - (int)pbVar3) - 0x50);
      if ((int)pbVar10 < 0) {
        if (((byte *)0x14 < pbVar7) || (pbVar7 < *(byte **)(pbVar3 + 0x4c))) goto LAB_004ec3f2;
      }
      else if (pbVar10 != pbVar7) goto LAB_004ec3f2;
      pbVar7 = pbVar7 + -(int)*(byte **)(pbVar3 + 0x4c);
      pbVar10 = param_3 + (int)pbVar7;
      *param_4 = (uint)(pbVar7 + *param_4);
      pbVar3[0x4c] = 0;
      pbVar3[0x4d] = 0;
      pbVar3[0x4e] = 0;
      pbVar3[0x4f] = 0;
    }
    param_1 = param_1 + -(int)pbVar7;
    if (iVar6 != 0) {
      pbVar3[0x44] = 0;
      pbVar3[0x45] = 2;
      pbVar3[0x46] = 0;
      pbVar3[0x47] = 0;
      return 1;
    }
    uVar8 = *(uint *)(pbVar3 + 0x44);
    param_3 = pbVar10;
  } while (uVar8 != 0x112);
LAB_004ec63d:
  if (*(int *)(pbVar3 + 0x24) != 0) {
    return 1;
  }
  *param_6 = 1;
  return 0;
}


