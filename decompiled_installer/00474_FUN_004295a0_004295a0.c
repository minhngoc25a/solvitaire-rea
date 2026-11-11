// Function: FUN_004295a0
// Entry: 004295a0
// Size: 981 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004295a0(int *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint local_20;
  int local_18 [6];
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  local_40 = param_1[8];
  uVar8 = param_1[9];
  if (((int)uVar8 < 1) && ((int)uVar8 < 0)) {
    local_34 = -local_40;
    iVar7 = uVar8 + (local_40 != 0);
    local_28 = (uint *)-iVar7;
    if ((param_5 <= local_28) &&
       ((-param_5 != iVar7 || (param_4 <= local_34 && -param_4 != local_40)))) {
      local_34 = param_4;
      local_28 = (uint *)param_5;
    }
    FUN_00431ec0(param_2,param_3,local_34,(int)local_28,*param_1,param_1[1]);
    puVar1 = (uint *)(param_1 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + local_34;
    local_40 = param_1[8];
    param_1[9] = param_1[9] + (int)local_28 + (uint)CARRY4(uVar8,local_34);
    local_2c = param_4 - local_34;
    local_44 = (param_5 - (int)local_28) - (uint)(param_4 < local_34);
    uVar8 = param_1[9];
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    local_38 = (uint *)((int)param_2 + local_18[*param_1] * local_34 * param_1[1]);
    param_3 = (uint *)((int)param_3 + local_18[*param_1] * local_34 * param_1[1]);
    param_4 = local_2c;
    if ((int)uVar8 < 0) goto LAB_00429951;
  }
  else {
    local_44 = param_5;
    local_38 = param_2;
  }
  local_30 = (uint *)(param_1 + 1);
  local_28 = local_30;
  local_2c = param_4;
  if (uVar8 + local_44 + (uint)CARRY4(local_40,param_4) != 0) {
    local_2c = -local_40 - 1;
    local_44 = -uVar8;
    local_28 = (uint *)(param_1 + 1);
  }
  fVar10 = (float)param_1[3];
  fVar11 = (float)param_1[4];
  if (fVar10 == fVar11) {
    if (fVar10 != DAT_0050c314) {
      FUN_00432890(local_38,(int)param_3,local_2c,local_44,*param_1,*local_30,fVar10);
      puVar1 = (uint *)(param_1 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + local_2c;
      param_1[9] = param_1[9] + local_44 + (uint)CARRY4(uVar8,local_2c);
      return 0;
    }
    FUN_00431ec0(local_38,param_3,local_2c,local_44,*param_1,*local_30);
    puVar1 = (uint *)(param_1 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + local_2c;
    param_1[9] = param_1[9] + local_44 + (uint)CARRY4(uVar8,local_2c);
    return 0;
  }
  local_34 = param_1[7];
  local_3c = param_1[6];
  if ((local_34 <= uVar8) && ((local_34 < uVar8 || (local_3c <= local_40)))) {
    FUN_00432890(local_38,(int)param_3,local_2c,local_44,*param_1,*local_30,fVar11);
    puVar1 = (uint *)(param_1 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + local_2c;
    param_1[9] = param_1[9] + local_44 + (uint)CARRY4(uVar8,local_2c);
    return 0;
  }
  if (*param_1 != 5) {
    return 0xffffffe3;
  }
  if ((local_44 != 0) || (local_2c != 0)) {
    local_20 = 0;
    local_30 = (uint *)0x0;
    do {
      uVar4 = local_40 + local_20;
      uVar5 = uVar8 + (int)local_30 + (uint)CARRY4(local_40,local_20);
      if ((local_34 < uVar5) || ((local_34 <= uVar5 && (local_3c <= uVar4)))) {
        uVar4 = local_3c;
      }
      uVar6 = 0;
      dVar2 = (double)(&DAT_0050c3d0)[-((int)uVar4 >> 0x1f)];
      dVar3 = (double)(&DAT_0050c3d0)[-((int)local_3c >> 0x1f)];
      uVar5 = *local_28;
      if (uVar5 != 0) {
        do {
          iVar7 = local_20 * uVar5 + uVar6;
          uVar6 = uVar6 + 1;
          local_38[iVar7] =
               (uint)((((float)((double)(int)uVar4 + dVar2) / (float)((double)(int)local_3c + dVar3)
                       ) * (fVar11 - fVar10) + fVar10) * (float)param_3[iVar7]);
          uVar5 = *local_28;
        } while (uVar6 < uVar5);
        local_3c = param_1[6];
        local_40 = param_1[8];
        uVar8 = param_1[9];
        fVar10 = (float)param_1[3];
        fVar11 = (float)param_1[4];
        local_34 = param_1[7];
      }
      bVar9 = 0xfffffffe < local_20;
      local_20 = local_20 + 1;
      local_30 = (uint *)((int)local_30 + (uint)bVar9);
    } while ((local_30 < local_44) || ((local_30 <= local_44 && (local_20 < local_2c))));
  }
LAB_00429951:
  puVar1 = (uint *)(param_1 + 8);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + local_2c;
  param_1[9] = param_1[9] + local_44 + (uint)CARRY4(uVar8,local_2c);
  return 0;
}


