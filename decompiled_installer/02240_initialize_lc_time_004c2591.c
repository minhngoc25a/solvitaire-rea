// Function: initialize_lc_time
// Entry: 004c2591
// Size: 636 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * const,struct __crt_locale_data *
   const)
   
   Library: Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  wchar_t *pwVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  wchar_t *pwVar19;
  uint uVar20;
  __crt_locale_data *local_18;
  undefined4 local_14;
  int local_10;
  wchar_t *local_c;
  __crt_lc_time_data *local_8;
  
  local_14 = 0;
  pwVar19 = *(wchar_t **)(param_2 + 0xb4);
  local_18 = param_2;
  local_c = pwVar19;
  psVar2 = FUN_0047e1cf(pwVar19);
  uVar18 = 0;
  *(short **)(param_1 + 0x160) = psVar2;
  local_8 = (__crt_lc_time_data *)0x31;
  local_10 = 7;
  do {
    uVar17 = ((int)local_8 - 0x30U) % 7;
    uVar3 = FUN_004ff7e3((int *)&local_18,1,pwVar19,(uint)local_8,(int *)(param_1 + uVar17 * 4));
    uVar20 = (int)local_8 - 7;
    uVar4 = FUN_004ff7e3((int *)&local_18,1,local_c,uVar20,(int *)(param_1 + uVar17 * 4 + 0x1c));
    uVar5 = FUN_004ff7e3((int *)&local_18,2,local_c,(uint)local_8,
                         (int *)(param_1 + uVar17 * 4 + 0xb4));
    pwVar19 = local_c;
    uVar17 = FUN_004ff7e3((int *)&local_18,2,local_c,uVar20,(int *)(param_1 + uVar17 * 4 + 0xd0));
    uVar18 = uVar18 | uVar3 | uVar4 | uVar5 | uVar17;
    local_8 = (__crt_lc_time_data *)((int)local_8 + 1);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_8 = param_1 + 0x68;
  local_c = (wchar_t *)0x38;
  local_10 = 0xc;
  do {
    uVar5 = (int)local_c + 0xc;
    uVar3 = FUN_004ff7e3((int *)&local_18,1,pwVar19,uVar5,(int *)(local_8 + -0x30));
    uVar4 = FUN_004ff7e3((int *)&local_18,1,pwVar19,(uint)local_c,(int *)local_8);
    uVar5 = FUN_004ff7e3((int *)&local_18,2,pwVar19,uVar5,(int *)(local_8 + 0x84));
    pwVar1 = local_c;
    uVar17 = FUN_004ff7e3((int *)&local_18,2,pwVar19,(uint)local_c,(int *)(local_8 + 0xb4));
    uVar18 = uVar18 | uVar3 | uVar4 | uVar5 | uVar17;
    local_8 = local_8 + 4;
    local_c = (wchar_t *)((int)pwVar1 + 1);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  iVar6 = FUN_004ff7e3((int *)&local_18,1,pwVar19,0x28,(int *)(param_1 + 0x98));
  iVar7 = FUN_004ff7e3((int *)&local_18,1,pwVar19,0x29,(int *)(param_1 + 0x9c));
  iVar8 = FUN_004ff7e3((int *)&local_18,2,pwVar19,0x28,(int *)(param_1 + 0x14c));
  iVar9 = FUN_004ff7e3((int *)&local_18,2,pwVar19,0x29,(int *)(param_1 + 0x150));
  iVar10 = FUN_004ff7e3((int *)&local_18,1,pwVar19,0x1f,(int *)(param_1 + 0xa0));
  iVar11 = FUN_004ff7e3((int *)&local_18,1,pwVar19,0x20,(int *)(param_1 + 0xa4));
  iVar12 = FUN_004ff7e3((int *)&local_18,1,pwVar19,0x1003,(int *)(param_1 + 0xa8));
  iVar13 = FUN_004ff7e3((int *)&local_18,0,pwVar19,0x1009,(int *)(param_1 + 0xac));
  iVar14 = FUN_004ff7e3((int *)&local_18,2,pwVar19,0x1f,(int *)(param_1 + 0x154));
  iVar15 = FUN_004ff7e3((int *)&local_18,2,pwVar19,0x20,(int *)(param_1 + 0x158));
  iVar16 = FUN_004ff7e3((int *)&local_18,2,pwVar19,0x1003,(int *)(param_1 + 0x15c));
  return (bool)('\x01' - (iVar16 != 0 ||
                         ((((((((((uVar18 != 0 || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) ||
                               iVar9 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
                           iVar13 != 0) || iVar14 != 0) || iVar15 != 0)));
}


