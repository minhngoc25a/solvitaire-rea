// Function: FUN_00504355
// Entry: 00504355
// Size: 657 bytes
// Thunk: false
// External: false


void __cdecl FUN_00504355(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int *piVar8;
  uint *puVar9;
  ushort *puVar10;
  bool bVar11;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  puVar3 = (undefined4 *)FUN_00503f85();
  puVar4 = (undefined4 *)FUN_0050400f();
  local_8 = 0;
  local_c = 0;
  iVar5 = FUN_00503fe3(&local_8);
  if ((iVar5 == 0) && (iVar5 = FUN_00503f8b(&local_c), iVar5 == 0)) {
    puVar7 = DAT_00544bf4;
    puVar10 = param_1;
    if (DAT_00544bf4 != (ushort *)0x0) {
      do {
        uVar1 = *puVar10;
        bVar11 = uVar1 < *puVar7;
        if (uVar1 != *puVar7) {
LAB_005043d5:
          uVar6 = -(uint)bVar11 | 1;
          goto LAB_005043da;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar10[1];
        bVar11 = uVar1 < puVar7[1];
        if (uVar1 != puVar7[1]) goto LAB_005043d5;
        puVar7 = puVar7 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar1 != 0);
      uVar6 = 0;
LAB_005043da:
      if (uVar6 == 0) {
        return;
      }
    }
    puVar7 = param_1;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (uVar1 != 0);
    puVar7 = __malloc_base(((int)puVar7 - (int)(param_1 + 1) >> 1) * 2 + 2);
    if (puVar7 != (ushort *)0x0) {
      FUN_004247be(DAT_00544bf4);
      puVar10 = param_1;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (uVar1 != 0);
      DAT_00544bf4 = puVar7;
      iVar5 = FUN_0047f91c((short *)puVar7,((int)puVar10 - (int)(param_1 + 1) >> 1) + 1,(int)param_1
                          );
      if (iVar5 != 0) goto LAB_005045dc;
      _memset((void *)*puVar4,0,0x80);
      _memset((void *)puVar4[1],0,0x80);
      _memset((void *)*puVar3,0,0x40);
      _memset((void *)puVar3[1],0,0x40);
      FUN_0050430e((int)param_1,(LPCWSTR)*puVar4,(LPSTR)*puVar3,3);
      iVar5 = 3;
      do {
        if (*param_1 != 0) {
          param_1 = param_1 + 1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar1 = *param_1;
      if (uVar1 == 0x2d) {
        param_1 = param_1 + 1;
      }
      uVar6 = FUN_004846a4(param_1,&local_10,10);
      local_8 = uVar6 * 0xe10;
      for (; (uVar2 = *param_1, uVar2 == 0x2b || ((ushort)(uVar2 - 0x30) < 10));
          param_1 = param_1 + 1) {
      }
      if (uVar2 == 0x3a) {
        param_1 = param_1 + 1;
        uVar6 = FUN_004846a4(param_1,&local_10,10);
        local_8 = local_8 + uVar6 * 0x3c;
        uVar2 = *param_1;
        while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
          param_1 = param_1 + 1;
          uVar2 = *param_1;
        }
        if (uVar2 == 0x3a) {
          param_1 = param_1 + 1;
          uVar6 = FUN_004846a4(param_1,&local_10,10);
          local_8 = local_8 + uVar6;
          uVar2 = *param_1;
          while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
            param_1 = param_1 + 1;
            uVar2 = *param_1;
          }
        }
      }
      if (uVar1 == 0x2d) {
        local_8 = -local_8;
      }
      local_c = (uint)(*param_1 != 0);
      if (*param_1 != 0) {
        FUN_0050430e((int)param_1,(LPCWSTR)puVar4[1],(LPSTR)puVar3[1],3);
      }
      iVar5 = local_8;
      piVar8 = FUN_00503f7f();
      uVar6 = local_c;
      *piVar8 = iVar5;
      puVar9 = FUN_00503f73();
      *puVar9 = uVar6;
    }
    FUN_004247be((LPVOID)0x0);
    return;
  }
LAB_005045dc:
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


