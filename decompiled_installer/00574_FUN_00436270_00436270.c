// Function: FUN_00436270
// Entry: 00436270
// Size: 705 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00436270(uint param_1,void *param_2,int param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  uint local_1038;
  float local_1034;
  uint local_1030 [9];
  float local_100c;
  uint local_1008;
  int local_1004;
  undefined1 local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x43627a;
  if (param_1 == 0) {
    local_1034 = 0.0;
  }
  else {
    LOCK();
    local_1034 = *(float *)(param_1 + 0x40);
    if (local_1034 == 0.0) {
      *(float *)(param_1 + 0x40) = 0.0;
      local_1034 = 0.0;
    }
    UNLOCK();
    local_100c = local_1034;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x3b) == '\0') {
      __controlfp_s(&local_1038,0,0);
      __controlfp_s(local_1030,local_1038 | 0x1000000,0x3000000);
      local_1030[2] = local_1038;
    }
    else {
      local_1030[2] = 0;
    }
    if ((param_3 == 0) || (DAT_0050c314 <= local_1034)) {
      FUN_00435e40(param_1,param_2,param_3,param_4);
    }
    else {
      local_1030[3] = 0;
      local_1030[4] = 1;
      local_1030[5] = 2;
      local_1030[6] = 3;
      local_1030[7] = 4;
      local_1030[8] = 4;
      local_1008 = local_1030[*(int *)(param_1 + 0x818) + 3] * *(int *)(param_1 + 0x81c);
      local_1030[3] = 0;
      local_1030[4] = 1;
      local_1030[5] = 2;
      local_1030[6] = 3;
      local_1030[7] = 4;
      local_1030[8] = 4;
      local_1004 = local_1030[*(int *)(param_1 + 0x2d0) + 3] * *(int *)(param_1 + 0x2d4);
      local_1038 = 0;
      if (param_4 != 0) {
        uVar5 = (uint)(0x1000 / (ulonglong)local_1008);
        local_1030[0] = uVar5;
        do {
          if (param_4 - local_1038 <= uVar5) {
            uVar5 = param_4 - local_1038;
          }
          FUN_00432650((uint)local_1000,local_1038 * local_1008 + param_3,uVar5,0,
                       *(undefined4 *)(param_1 + 0x818),*(uint *)(param_1 + 0x81c),local_1034);
          FUN_00435e40(param_1,(void *)(local_1038 * local_1004 + (int)param_2),(int)local_1000,
                       uVar5);
          local_1038 = local_1038 + uVar5;
          uVar5 = local_1030[0];
        } while (local_1038 < param_4);
      }
    }
    uVar4 = local_1030._0_8_;
    if (param_2 != (void *)0x0) {
      if ((local_1034 < DAT_0050c314) && (param_3 == 0)) {
        FUN_00432650((uint)param_2,(int)param_2,param_4,0,*(undefined4 *)(param_1 + 0x2d0),
                     *(uint *)(param_1 + 0x2d4),local_1034);
      }
      fVar3 = DAT_0050c38c;
      fVar2 = DAT_0050c314;
      uVar4 = local_1030._0_8_;
      if ((*(char *)(param_1 + 0x3a) == '\0') && (*(int *)(param_1 + 0x2d0) == 5)) {
        uVar5 = *(int *)(param_1 + 0x2d4) * param_4;
        local_1030[0] = 0;
        local_1030[1] = 0;
        uVar4 = local_1030._0_8_;
        if (uVar5 != 0) {
          local_1030[0] = 0;
          do {
            fVar1 = *(float *)((int)param_2 + local_1030[0] * 4);
            fVar7 = fVar3;
            if ((fVar3 <= fVar1) && (fVar7 = fVar2, fVar1 <= fVar2)) {
              fVar7 = fVar1;
            }
            *(float *)((int)param_2 + local_1030[0] * 4) = fVar7;
            bVar6 = local_1030[0] != 0xffffffff;
            local_1030[0] = local_1030[0] + 1;
          } while ((bVar6) && (local_1030[0] < uVar5));
        }
      }
    }
    local_1030._0_8_ = uVar4;
    if (*(char *)(param_1 + 0x3b) == '\0') {
      __controlfp_s(local_1030,local_1030[2],0x3000000);
    }
  }
  return;
}


