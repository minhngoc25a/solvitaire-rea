// Function: FUN_0047ec93
// Entry: 0047ec93
// Size: 410 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0047ec93(int param_1)

{
  short *psVar1;
  ushort uVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  bool bVar11;
  undefined4 *local_10;
  undefined **local_8;
  
  bVar4 = true;
  puVar5 = __malloc_base(0x6a6);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 1;
    psVar1 = (short *)(puVar5 + 1);
    *psVar1 = 0;
    FUN_0047e6e5(psVar1,0x351,3);
    local_8 = &PTR_u_LC_COLLATE_0050e1ac;
    local_10 = (undefined4 *)(param_1 + 0x30);
    do {
      iVar7 = FUN_00480748(psVar1,0x351,0x52dfa8);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar8 = (ushort *)*local_10;
      puVar10 = (ushort *)local_10[4];
      do {
        uVar2 = *puVar8;
        bVar11 = uVar2 < *puVar10;
        if (uVar2 != *puVar10) {
LAB_0047ed42:
          uVar9 = -(uint)bVar11 | 1;
          goto LAB_0047ed47;
        }
        if (uVar2 == 0) break;
        uVar2 = puVar8[1];
        bVar11 = uVar2 < puVar10[1];
        if (uVar2 != puVar10[1]) goto LAB_0047ed42;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar2 != 0);
      uVar9 = 0;
LAB_0047ed47:
      bVar4 = (bool)(bVar4 & ~(uVar9 != 0));
      local_8 = local_8 + 3;
      FUN_0047e6e5(psVar1,0x351,3);
      local_10 = local_10 + 4;
    } while ((int)local_8 < 0x50e1dc);
    if (bVar4) {
      FUN_004247be(puVar5);
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = iVar7 + -1;
        UNLOCK();
        if (iVar7 + -1 == 0) {
          FUN_004247be(*(LPVOID *)(param_1 + 0x28));
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_004247be(*(LPVOID *)(param_1 + 0x24));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      puVar6 = *(undefined4 **)(param_1 + 0x40);
    }
    else {
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = iVar7 + -1;
        UNLOCK();
        if (iVar7 + -1 == 0) {
          FUN_004247be(*(LPVOID *)(param_1 + 0x28));
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_004247be(*(LPVOID *)(param_1 + 0x24));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      puVar6 = puVar5 + 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 **)(param_1 + 0x28) = puVar5;
      *(undefined4 **)(param_1 + 0x20) = puVar6;
    }
  }
  return puVar6;
}


