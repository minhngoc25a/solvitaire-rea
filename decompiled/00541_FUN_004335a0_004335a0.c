// Function: FUN_004335a0
// Entry: 004335a0
// Size: 1448 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004335a0(int *param_1,void *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint local_110;
  int local_10c;
  undefined2 local_108 [2];
  uint local_104;
  uint local_100;
  size_t local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  uint *local_d8;
  uint *puStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint local_b0;
  uint uStack_ac;
  undefined2 *puStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68 [8];
  undefined4 local_48 [18];
  
  local_108[0] = 0xc0b;
  if (param_3 == (int *)0x0) {
    return 0xfffffffe;
  }
  _memset(param_3,0,0x2b8);
  uVar3 = FUN_0044afc0(param_1,(int *)&local_fc);
  if (uVar3 == 0) {
    if (*(byte *)((int)param_1 + 0x1e) != 0xff) {
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*param_1 + 0x214);
      }
      if (uVar3 <= *(byte *)((int)param_1 + 0x1e)) {
        return 0xfffffffe;
      }
    }
    param_3[0xad] = (int)param_2;
    if (param_2 == (void *)0x0) {
      if (local_fc != 0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
    }
    else if (local_fc != 0) {
      _memset(param_2,0,local_fc);
    }
    iVar9 = *param_1;
    param_3[0x40] = iVar9;
    iVar7 = param_1[4];
    if ((iVar7 == 0) && (iVar9 != 0)) {
      iVar7 = *(int *)(iVar9 + 0x210);
    }
    param_3[0x41] = iVar7;
    param_3[0x42] = param_1[5];
    param_3[0x43] = param_1[6];
    LOCK();
    param_3[0x9e] = 0x3f800000;
    UNLOCK();
    param_3[0x9f] = 0x3f800000;
    param_3[0xa0] = 0x3f800000;
    param_3[0xa1] = 0x3f800000;
    param_3[0xa2] = (uint)*(byte *)(param_1 + 7);
    param_3[0xa3] = (uint)*(byte *)((int)param_1 + 0x1d);
    param_3[0xa4] = (uint)*(byte *)((int)param_1 + 0x1e);
    LOCK();
    param_3[0xa6] = 0x3f800000;
    UNLOCK();
    LOCK();
    param_3[0xa7] = 0x3f800000;
    UNLOCK();
    plVar4 = (longlong *)(param_3 + 0xa8);
    do {
      lVar2 = *plVar4;
      LOCK();
      lVar1 = *plVar4;
      if (*plVar4 == lVar1) {
        *plVar4 = -1;
        iVar9 = (int)lVar2;
        iVar7 = param_3[0xa9];
      }
      else {
        iVar9 = (int)lVar1;
        iVar7 = (int)((ulonglong)lVar1 >> 0x20);
      }
      UNLOCK();
    } while ((iVar9 != (int)lVar2) || (iVar7 != param_3[0xa9]));
    plVar4 = (longlong *)(param_3 + 0xaa);
    do {
      lVar2 = *plVar4;
      LOCK();
      lVar1 = *plVar4;
      if (*plVar4 == lVar1) {
        *plVar4 = -1;
        iVar9 = (int)lVar2;
        iVar7 = param_3[0xab];
      }
      else {
        iVar9 = (int)lVar1;
        iVar7 = (int)((ulonglong)lVar1 >> 0x20);
      }
      UNLOCK();
    } while ((iVar9 != (int)lVar2) || (iVar7 != param_3[0xab]));
    local_104 = param_1[2];
    iVar9 = *param_1;
    if ((local_104 == 0) && ((iVar9 != 0 && (local_104 = 0, iVar9 != -0x100)))) {
      if (*(int *)(iVar9 + 0x134) == 0) {
        local_104 = 0;
      }
      else {
        local_104 = (uint)*(byte *)(*(int *)(iVar9 + 0x13c) + 5);
      }
    }
    local_100 = param_1[3];
    if (((local_100 == 0) && (iVar9 != 0)) && (local_100 = 0, iVar9 != -0x100)) {
      if (*(int *)(iVar9 + 0x134) == 0) {
        local_100 = 0;
      }
      else {
        local_100 = (uint)*(byte *)(*(int *)(iVar9 + 0x13c) + 5);
      }
    }
    iVar9 = 0;
    if (param_3[0x40] != 0) {
      iVar9 = *(int *)(param_3[0x40] + 0x210);
    }
    if (param_3[0x41] != iVar9) {
      param_3[0xa2] = 0;
    }
    piVar5 = FUN_0044aec0(&local_d0,(int)param_1);
    local_e8 = *piVar5;
    iStack_e4 = piVar5[1];
    iStack_e0 = piVar5[2];
    iStack_dc = piVar5[3];
    _local_d8 = CONCAT44(&local_100,&local_104);
    uVar3 = FUN_00432e20(*param_1,&local_e8,(void *)(local_f8 + (int)param_2),param_3);
    if (uVar3 == 0) {
      uVar6 = 0;
      if (param_3[0x40] != 0) {
        uVar6 = *(undefined4 *)(param_3[0x40] + 0x210);
      }
      piVar5 = FUN_0042b000(local_68,5,local_104,param_3[0x41],uVar6);
      local_d0 = *piVar5;
      iStack_cc = piVar5[1];
      iStack_c8 = piVar5[2];
      iStack_c4 = piVar5[3];
      iStack_bc = piVar5[5];
      iStack_b8 = piVar5[6];
      iStack_b4 = piVar5[7];
      local_c0 = 0;
      uVar3 = FUN_0042b060(&local_d0,(void *)(local_f4 + (int)param_2),param_3 + 0x4e);
      if (uVar3 == 0) {
        if (param_3[0x40] == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_3[0x40] + 0x210);
        }
        piVar5 = param_3 + 0x44;
        if (piVar5 == (int *)0x0) {
          uVar3 = 0xfffffffe;
          local_110 = 0xfffffffe;
        }
        else {
          *piVar5 = 0;
          param_3[0x45] = 0;
          param_3[0x46] = 0;
          param_3[0x47] = 0;
          param_3[0x48] = 0;
          param_3[0x49] = 0;
          param_3[0x4a] = 0;
          param_3[0x4b] = 0;
          param_3[0x4c] = 0;
          param_3[0x4d] = 0;
          *piVar5 = 5;
          param_3[0x45] = local_104;
          param_3[0x46] = iVar9;
          param_3[0x47] = 0x3f800000;
          param_3[0x48] = 0x3f800000;
          param_3[0x4a] = 0;
          param_3[0x4b] = 0;
          param_3[0x4c] = 0;
          param_3[0x4d] = 0;
          puVar8 = FUN_0044af30(local_48,(int)&local_e8);
          local_a0 = puVar8[4];
          uStack_9c = puVar8[5];
          uStack_98 = puVar8[6];
          uStack_94 = puVar8[7];
          local_b0 = *puVar8;
          uStack_ac = puVar8[1];
          uStack_a4 = puVar8[3];
          local_90 = puVar8[8];
          uStack_8c = puVar8[9];
          uStack_88 = puVar8[10];
          uStack_84 = puVar8[0xb];
          local_80 = puVar8[0xc];
          uStack_7c = puVar8[0xd];
          uStack_78 = puVar8[0xe];
          uStack_74 = puVar8[0xf];
          _local_70 = CONCAT44(*(undefined4 *)(param_3[0x40] + 0x3c8),
                               (int)*(undefined8 *)(puVar8 + 0x10));
          puStack_a8 = local_108;
          if (local_b0 != 2) {
            puStack_a8 = (undefined2 *)puVar8[2];
          }
          uVar3 = FUN_00429c90(&local_b0,(void *)(local_f0 + (int)param_2),(uint *)(param_3 + 0x68))
          ;
          local_110 = uVar3;
          if (uVar3 == 0) {
            piVar5 = param_3 + 0x92;
            if (piVar5 == (int *)0x0) {
              local_110 = 0xfffffffe;
            }
            else {
              *piVar5 = 0;
              param_3[0x93] = 0;
              param_3[0x94] = 0;
              param_3[0x95] = 0;
              *piVar5 = 5;
              param_3[0x93] = local_100;
              param_3[0x94] = 0;
              param_3[0x95] = 0;
              local_10c = param_1[5];
              if (local_10c == 0) {
                return 0;
              }
              local_110 = local_104;
              local_110 = FUN_004291e0(&local_110,(void *)(local_ec + (int)param_2),
                                       (uint *)(param_3 + 0x96));
              if (local_110 == 0) {
                return 0;
              }
            }
            uVar3 = local_110;
            if ((uint *)(param_3 + 0x68) != (uint *)0x0) {
              if (((param_3 != (int *)0xfffffde4) && (param_3[0x8e] != 0)) &&
                 ((LPVOID)param_3[0x8d] != (LPVOID)0x0)) {
                FUN_0047d191((LPVOID)param_3[0x8d]);
              }
              if ((param_3[0x91] != 0) && ((LPVOID)param_3[0x90] != (LPVOID)0x0)) {
                FUN_0047d191((LPVOID)param_3[0x90]);
              }
            }
          }
        }
        if (param_3 != (int *)0xfffffec8) {
          if (param_3 != (int *)0xfffffe90) {
            uVar3 = 0;
            if (param_3[0x5f] != 0) {
              iVar9 = 0;
              do {
                iVar7 = param_3[0x61] + iVar9;
                if (((iVar7 != 0) && (*(int *)(iVar7 + 0x14) != 0)) &&
                   (*(LPVOID *)(iVar7 + 0x10) != (LPVOID)0x0)) {
                  FUN_0047d191(*(LPVOID *)(iVar7 + 0x10));
                }
                uVar3 = uVar3 + 1;
                iVar9 = iVar9 + 0x18;
              } while (uVar3 < (uint)param_3[0x5f]);
            }
            uVar3 = 0;
            if (param_3[0x60] != 0) {
              iVar9 = 0;
              do {
                iVar7 = param_3[0x62] + iVar9;
                if (((iVar7 != 0) && (*(int *)(iVar7 + 0x28) != 0)) &&
                   (*(LPVOID *)(iVar7 + 0x24) != (LPVOID)0x0)) {
                  FUN_0047d191(*(LPVOID *)(iVar7 + 0x24));
                }
                uVar3 = uVar3 + 1;
                iVar9 = iVar9 + 0x2c;
              } while (uVar3 < (uint)param_3[0x60]);
            }
            if ((param_3[100] != 0) && ((LPVOID)param_3[99] != (LPVOID)0x0)) {
              FUN_0047d191((LPVOID)param_3[99]);
            }
          }
          uVar3 = local_110;
          if ((param_3[0x66] != 0) && ((LPVOID)param_3[0x65] != (LPVOID)0x0)) {
            FUN_0047d191((LPVOID)param_3[0x65]);
            uVar3 = local_110;
          }
        }
      }
      FUN_0044a080((int)param_3);
      if ((param_3[0x3f] != 0) && ((LPVOID)param_3[0x3e] != (LPVOID)0x0)) {
        FUN_0047d191((LPVOID)param_3[0x3e]);
      }
    }
  }
  return uVar3;
}


