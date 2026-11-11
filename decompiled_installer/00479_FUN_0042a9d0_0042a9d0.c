// Function: FUN_0042a9d0
// Entry: 0042a9d0
// Size: 1574 bytes
// Thunk: false
// External: false


float * __cdecl FUN_0042a9d0(int param_1,int param_2,float *param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_94 [3];
  float local_88 [3];
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  undefined8 local_58;
  float local_50;
  undefined8 local_40;
  uint local_38;
  undefined8 local_34;
  float local_2c;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float fStack_18;
  float local_14;
  float local_4;
  
  local_4 = 0.0;
  if (param_3 != (float *)0x0) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = -1.0;
  }
  if (param_1 != 0) {
    if (param_2 != 0) {
      LOCK();
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x10) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (iVar4 != 1) {
        FUN_0042fa20((int *)(param_1 + 0x50));
        local_70 = *(undefined8 *)(param_1 + 0x44);
        local_68 = *(float *)(param_1 + 0x4c);
        if ((undefined4 *)(param_1 + 0x50) != (undefined4 *)0x0) {
          LOCK();
          *(undefined4 *)(param_1 + 0x50) = 0;
          UNLOCK();
        }
        FUN_0042fa20((int *)(param_1 + 0x60));
        local_7c = *(undefined8 *)(param_1 + 0x54);
        local_74 = *(float *)(param_1 + 0x5c);
        if ((undefined4 *)(param_1 + 0x60) != (undefined4 *)0x0) {
          LOCK();
          *(undefined4 *)(param_1 + 0x60) = 0;
          UNLOCK();
        }
        FUN_0042fa20((int *)(param_2 + 0x34));
        local_58 = *(undefined8 *)(param_2 + 0x28);
        local_50 = *(float *)(param_2 + 0x30);
        if ((undefined4 *)(param_2 + 0x34) != (undefined4 *)0x0) {
          LOCK();
          *(undefined4 *)(param_2 + 0x34) = 0;
          UNLOCK();
        }
        FUN_0042fa20((int *)(param_2 + 0x44));
        if ((undefined4 *)(param_2 + 0x44) != (undefined4 *)0x0) {
          LOCK();
          *(undefined4 *)(param_2 + 0x44) = 0;
          UNLOCK();
        }
        puVar5 = (undefined8 *)
                 FUN_00442a70(local_88,(float)*(undefined8 *)(param_2 + 0x38),
                              (float)((ulonglong)*(undefined8 *)(param_2 + 0x38) >> 0x20),
                              *(float *)(param_2 + 0x40));
        local_40 = *puVar5;
        local_38 = *(uint *)(puVar5 + 1);
        uVar2 = *(undefined8 *)(param_2 + 0x1c);
        uVar3 = *puVar5;
        local_2c = *(float *)(puVar5 + 1);
        local_28._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_28._0_4_ = (float)uVar2;
        local_20 = *(float *)(param_2 + 0x24);
        fVar7 = local_2c * local_28._4_4_;
        local_34._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar15 = local_20 * local_34._4_4_;
        local_34._0_4_ = (float)uVar3;
        fVar13 = local_20 * (float)local_34;
        fVar14 = local_2c * (float)local_28;
        local_14 = local_28._4_4_ * (float)local_34 - (float)local_28 * local_34._4_4_;
        local_34 = uVar3;
        local_28 = uVar2;
        puVar6 = (undefined8 *)FUN_00442a70(local_94,fVar15 - fVar7,fVar14 - fVar13,local_14);
        fVar7 = *(float *)(puVar6 + 1);
        local_34._4_4_ = (float)((ulonglong)*puVar6 >> 0x20);
        local_28._0_4_ = (float)*puVar6;
        local_34._0_4_ = (float)*puVar6;
        local_28._4_4_ = (float)((ulonglong)*puVar6 >> 0x20);
        if (local_34._4_4_ * local_28._4_4_ + (float)local_28 * (float)local_34 + fVar7 * fVar7 ==
            0.0) {
          fVar7 = 0.0;
          local_34._4_4_ = 0.0;
          local_34._0_4_ = DAT_0050c314;
        }
        else {
          local_4 = local_34._4_4_;
        }
        fVar13 = *(float *)(puVar5 + 1);
        fStack_18 = (float)((ulonglong)*puVar5 >> 0x20);
        fVar16 = fVar13 * local_34._4_4_ - fStack_18 * fVar7;
        local_1c = (float)*puVar5;
        fVar15 = fStack_18 * (float)local_34 - local_1c * local_34._4_4_;
        fVar14 = local_1c * fVar7 - fVar13 * (float)local_34;
        if (*(int *)(param_2 + 8) == 1) {
          local_34._0_4_ = (float)((uint)(float)local_34 ^ DAT_0050c400);
          local_34._4_4_ = (float)((uint)local_34._4_4_ ^ DAT_0050c400);
          fVar7 = (float)((uint)fVar7 ^ DAT_0050c400);
          local_4 = local_34._4_4_;
        }
        fVar8 = (float)((uint)local_40 ^ DAT_0050c400);
        fVar9 = (float)(local_40._4_4_ ^ DAT_0050c400);
        fVar10 = (float)(local_38 ^ DAT_0050c400);
        local_40._0_4_ = (uint)*puVar5;
        fVar11 = (float)((uint)local_40 ^ DAT_0050c400);
        local_40._4_4_ = (uint)((ulonglong)*puVar5 >> 0x20);
        fVar12 = (float)(local_40._4_4_ ^ DAT_0050c400);
        fVar13 = (float)((uint)fVar13 ^ DAT_0050c400);
        if (param_3 != (float *)0x0) {
          *param_3 = (float)((uint)(local_58._4_4_ * local_34._4_4_ +
                                    (float)local_58 * (float)local_34 + local_50 * fVar7) ^
                            DAT_0050c400) +
                     local_70._4_4_ * local_34._4_4_ + (float)local_70 * (float)local_34 +
                     local_68 * fVar7;
          param_3[1] = (float)((uint)((float)local_58 * fVar16 + local_58._4_4_ * fVar14 +
                                     local_50 * fVar15) ^ DAT_0050c400) +
                       (float)local_70 * fVar16 + local_70._4_4_ * fVar14 + local_68 * fVar15;
          param_3[2] = (float)((uint)(fVar12 * local_58._4_4_ + fVar11 * (float)local_58 +
                                     fVar13 * local_50) ^ DAT_0050c400) +
                       fVar8 * (float)local_70 + fVar9 * local_70._4_4_ + fVar10 * local_68;
          local_34._4_4_ = local_4;
        }
        if (param_4 == (float *)0x0) {
          return param_3;
        }
        *param_4 = local_7c._4_4_ * local_34._4_4_ + (float)local_7c * (float)local_34 +
                   local_74 * fVar7;
        param_4[2] = local_7c._4_4_ * fVar9 + (float)local_7c * fVar8 + local_74 * fVar10;
        param_4[1] = (float)local_7c * fVar16 + local_7c._4_4_ * fVar14 + local_74 * fVar15;
        return param_3;
      }
    }
    if (param_3 != (float *)0x0) {
      FUN_0042fa20((int *)(param_1 + 0x50));
      fVar7 = *(float *)(param_1 + 0x4c);
      if ((undefined4 *)(param_1 + 0x50) != (undefined4 *)0x0) {
        LOCK();
        *(undefined4 *)(param_1 + 0x50) = 0;
        UNLOCK();
      }
      *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x44);
      param_3[2] = fVar7;
    }
    if (param_4 != (float *)0x0) {
      param_3 = (float *)FUN_0042fa20((int *)(param_1 + 0x60));
      puVar1 = (undefined4 *)(param_1 + 0x60);
      fVar7 = *(float *)(param_1 + 0x5c);
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        param_3 = (float *)*puVar1;
        *puVar1 = 0;
        UNLOCK();
      }
      *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x54);
      param_4[2] = fVar7;
    }
  }
  return param_3;
}


