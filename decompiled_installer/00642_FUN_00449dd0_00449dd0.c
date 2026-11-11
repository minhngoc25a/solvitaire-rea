// Function: FUN_00449dd0
// Entry: 00449dd0
// Size: 676 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00449f9c) */

int __cdecl
FUN_00449dd0(int param_1,int param_2,void *param_3,uint param_4,uint *param_5,uint param_6,
            int param_7)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_1034;
  uint local_1030;
  int *local_102c;
  int local_1028;
  uint local_1024;
  int local_1020;
  int *local_101c;
  uint local_1018;
  int *local_1014;
  undefined8 local_1010;
  float local_1008 [1023];
  undefined4 uStack_c;
  
  uStack_c = 0x449de0;
  iVar6 = 0;
  local_1020 = 0;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pInputNode != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1181d);
  }
  if (param_5 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFramesRead != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1181e);
  }
  *param_5 = 0;
  uVar5 = (uint)*(byte *)(param_2 + 0x30);
  local_1024 = uVar5;
  piVar2 = (int *)FUN_00449d20(param_2,param_2);
  local_1014 = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  do {
    local_1034 = 0;
    local_102c = piVar2;
    if (*piVar2 == 0) {
      FID_conflict___assert
                (L"pOutputBus->pNode != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x11835);
    }
    if (*(int *)(*piVar2 + 4) == 0) {
      FID_conflict___assert
                (L"((ma_node_base*)pOutputBus->pNode)->vtable != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x11836);
    }
    local_1018 = *(uint *)(*(int *)(*piVar2 + 4) + 0xc);
    if (param_3 == (void *)0x0) {
      FUN_00449440(*piVar2,(uint)*(byte *)(piVar2 + 1),(uint *)0x0,(int *)param_4,(int *)&local_1034
                   ,(int *)param_6,param_7);
    }
    else {
      local_101c = (int *)(0x400 / (ulonglong)uVar5);
      while (local_1034 < param_4) {
        piVar4 = local_101c;
        if ((int *)(param_4 - local_1034) <= local_101c) {
          piVar4 = (int *)(param_4 - local_1034);
        }
        puVar1 = (uint *)((int)param_3 + local_1034 * uVar5 * 4);
        if (local_1020 == 0) {
          iVar6 = FUN_00449440(*piVar2,(uint)*(byte *)(local_102c + 1),puVar1,piVar4,
                               (int *)&local_1030,(int *)(local_1034 + param_6),
                               param_7 + (uint)CARRY4(local_1034,param_6));
        }
        else {
          iVar6 = FUN_00449440(*piVar2,(uint)*(byte *)(local_102c + 1),(uint *)local_1008,piVar4,
                               (int *)&local_1030,(int *)(local_1034 + param_6),
                               param_7 + (uint)CARRY4(local_1034,param_6));
          local_1028 = iVar6;
          if ((((iVar6 == 0) || (iVar6 == -0x11)) && ((local_1018 & 0x10) == 0)) &&
             ((puVar1 != (uint *)0x0 && (local_1024 != 0)))) {
            local_1010 = 0;
            if ((ulonglong)local_1030 * (ulonglong)local_1024 != 0) {
              local_1010._4_4_ = 0;
              local_1010._0_4_ = 0;
              uVar5 = (uint)local_1010;
              iVar3 = local_1010._4_4_;
              do {
                puVar1[uVar5] = (uint)(local_1008[uVar5] + (float)puVar1[uVar5]);
                bVar7 = 0xfffffffe < uVar5;
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + (uint)bVar7;
              } while (CONCAT44(iVar3,uVar5) < (ulonglong)local_1030 * (ulonglong)local_1024);
            }
          }
        }
        local_1034 = local_1034 + local_1030;
        uVar5 = local_1024;
        piVar2 = local_102c;
        if ((iVar6 != 0) || (local_1030 == 0)) break;
      }
      if ((piVar2 == local_1014) && (local_1034 < param_4)) {
        FUN_00431f80((void *)((int)param_3 + local_1034 * uVar5 * 4),param_4 - local_1034,0,5,uVar5)
        ;
      }
      if ((local_1018 & 0x10) == 0) {
        local_1020 = 1;
      }
    }
    piVar2 = (int *)FUN_00449d20(param_2,(int)piVar2);
    if (piVar2 == (int *)0x0) {
      if ((local_1020 == 0) && (param_3 != (void *)0x0)) {
        local_102c = piVar2;
        FUN_00431f80(param_3,param_4,0,5,uVar5);
      }
      *param_5 = param_4;
      return iVar6;
    }
  } while( true );
}


