// Function: FUN_0047e8d3
// Entry: 0047e8d3
// Size: 959 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0047e8d3(int param_1,int param_2,wchar_t *param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  __acrt_ptd *p_Var8;
  __acrt_ptd *p_Var9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  ushort *puVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined4 local_2c8;
  undefined4 local_2c4;
  wchar_t *local_2c0;
  short local_2bc [86];
  uint local_210 [64];
  ushort local_110 [132];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  p_Var8 = FUN_0047dbec();
  p_Var9 = p_Var8 + 0x278;
  iVar10 = FUN_0047e31f(param_3,(short *)local_110,0x83,local_2bc,0x55,&local_2c8);
  if (iVar10 != 0) {
    iVar10 = (param_2 + 2) * 0x10;
    puVar11 = local_110;
    puVar15 = *(ushort **)(iVar10 + param_1);
    do {
      local_2c0 = (wchar_t *)0x0;
      bVar17 = *puVar11 < *puVar15;
      if (*puVar11 != *puVar15) {
LAB_0047e9a2:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_0047e9a7;
      }
      if (*puVar11 == 0) break;
      uVar1 = puVar11[1];
      bVar17 = uVar1 < puVar15[1];
      local_2c4 = CONCAT22(uVar1,(undefined2)local_2c4);
      if (uVar1 != puVar15[1]) goto LAB_0047e9a2;
      puVar11 = puVar11 + 2;
      puVar15 = puVar15 + 2;
    } while (uVar1 != 0);
    uVar12 = 0;
LAB_0047e9a7:
    if (uVar12 != 0) {
      puVar11 = local_110;
      do {
        uVar1 = *puVar11;
        puVar11 = puVar11 + 1;
      } while (uVar1 != 0);
      local_2c4 = ((int)puVar11 - (int)(local_110 + 1) >> 1) + 1;
      puVar13 = __malloc_base(local_2c4 * 2 + 4);
      if (puVar13 != (undefined4 *)0x0) {
        puVar2 = *(undefined2 **)(iVar10 + param_1);
        uVar3 = *(undefined4 *)(param_1 + 0xa0 + param_2 * 4);
        uVar4 = *(undefined4 *)(param_1 + 8);
        iVar14 = FUN_0047f91c((short *)(puVar13 + 1),local_2c4,(int)local_110);
        if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson(local_2c0,local_2c0,local_2c0,(uint)local_2c0,(uintptr_t)local_2c0);
        }
        *(undefined4 **)(iVar10 + param_1) = puVar13 + 1;
        if ((local_110[0] != 0x43) || (pwVar16 = local_2c0, local_110[1] != 0)) {
          pwVar16 = FUN_0047e1cf(local_2bc);
        }
        *(wchar_t **)(param_1 + 0xa0 + param_2 * 4) = pwVar16;
        if (param_2 == 2) {
          *(undefined4 *)(param_1 + 8) = local_2c8;
          pwVar16 = local_2c0;
          local_2c8 = *(undefined4 *)(p_Var8 + 0x29c);
          local_2c4 = *(int *)(p_Var8 + 0x298);
          do {
            if (*(int *)(param_1 + 8) == *(int *)(p_Var9 + (int)pwVar16 * 8)) {
              if (pwVar16 != (wchar_t *)0x0) {
                uVar5 = *(undefined4 *)(p_Var8 + (int)pwVar16 * 8 + 0x27c);
                *(undefined4 *)p_Var9 = *(undefined4 *)(p_Var9 + (int)pwVar16 * 8);
                *(undefined4 *)(p_Var8 + 0x27c) = uVar5;
                *(int *)(p_Var9 + (int)pwVar16 * 8) = local_2c4;
                *(undefined4 *)(p_Var8 + (int)pwVar16 * 8 + 0x27c) = local_2c8;
              }
              break;
            }
            iVar14 = *(int *)(p_Var9 + (int)pwVar16 * 8);
            uVar5 = *(undefined4 *)(p_Var8 + (int)pwVar16 * 8 + 0x27c);
            *(int *)(p_Var9 + (int)pwVar16 * 8) = local_2c4;
            *(undefined4 *)(p_Var8 + (int)pwVar16 * 8 + 0x27c) = local_2c8;
            pwVar16 = (wchar_t *)((int)pwVar16 + 1);
            local_2c8 = uVar5;
            local_2c4 = iVar14;
          } while ((int)pwVar16 < 5);
          if (pwVar16 == (wchar_t *)0x5) {
            iVar14 = FUN_004c2ac5((int *)local_2c0,1,
                                  "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                                  ,0x7f,(LPWORD)local_210,*(uint *)(param_1 + 8),1);
            pwVar16 = local_2c0;
            if (iVar14 != 0) {
              do {
                puVar11 = (ushort *)((int)local_210 + (int)pwVar16 * 2);
                *puVar11 = *puVar11 & 0x1ff;
                pwVar16 = (wchar_t *)((int)pwVar16 + 1);
              } while (pwVar16 < (wchar_t *)0x7f);
              iVar14 = FUN_0044cd00(local_210,(uint *)PTR_DAT_0054068c,0xfe);
              pwVar16 = (wchar_t *)(uint)(iVar14 == 0);
            }
            *(wchar_t **)(p_Var8 + 0x27c) = pwVar16;
            *(undefined4 *)p_Var9 = *(undefined4 *)(param_1 + 8);
          }
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(p_Var8 + 0x27c);
        }
        else if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x10) = local_2c8;
        }
        else if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x14) = local_2c8;
        }
        pcVar6 = (code *)(&PTR_FUN_0050e1a8)[param_2 * 3];
        (*(code *)PTR_guard_check_icall_00532084)(param_1);
        iVar14 = (*pcVar6)();
        if (iVar14 == 0) {
          if (puVar2 != &DAT_00540750) {
            piVar7 = *(int **)(param_1 + 0x28 + param_2 * 0x10);
            LOCK();
            iVar14 = *piVar7 + -1;
            *piVar7 = iVar14;
            UNLOCK();
            if (iVar14 == 0) {
              FUN_004247be(*(LPVOID *)(param_1 + 0x28 + param_2 * 0x10));
              FUN_004247be(*(LPVOID *)(param_1 + 0x24 + param_2 * 0x10));
              FUN_004247be(*(LPVOID *)(param_1 + 0xa0 + param_2 * 4));
              *(wchar_t **)(iVar10 + param_1) = local_2c0;
              *(wchar_t **)(param_1 + 0xa0 + param_2 * 4) = local_2c0;
            }
          }
          *puVar13 = 1;
          *(undefined4 **)(param_1 + 0x28 + param_2 * 0x10) = puVar13;
        }
        else {
          *(undefined2 **)(iVar10 + param_1) = puVar2;
          FUN_004247be(*(LPVOID *)(param_1 + 0xa0 + param_2 * 4));
          *(undefined4 *)(param_1 + 0xa0 + param_2 * 4) = uVar3;
          FUN_004247be(puVar13);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


