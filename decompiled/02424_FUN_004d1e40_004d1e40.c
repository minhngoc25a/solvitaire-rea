// Function: FUN_004d1e40
// Entry: 004d1e40
// Size: 1249 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d1e40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int local_34;
  int local_28;
  
  uVar4 = 0;
  piVar1 = (int *)(param_1 + 0x16bc);
  if (*(int *)(param_1 + 0x16a0) != 0) {
    do {
      piVar11 = (int *)(param_1 + 0x14);
      piVar10 = (int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0x1698);
      uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar5 + uVar4 + 1),*(undefined1 *)(iVar5 + uVar4));
      bVar3 = *(byte *)(iVar5 + 1 + uVar4 + 1);
      uVar8 = (uint)bVar3;
      uVar4 = uVar4 + 3;
      if (uVar12 == 0) {
        iVar5 = *piVar1;
        uVar7 = *(ushort *)(param_2 + uVar8 * 4);
        uVar8 = (uint)*(ushort *)(param_2 + 2 + uVar8 * 4);
        uVar6 = uVar7 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
        if ((int)(0x10 - uVar8) < iVar5) {
          *(ushort *)(param_1 + 0x16b8) = uVar6;
          *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16b9);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16b8) = uVar7 >> (0x10U - *(char *)piVar1 & 0x1f);
          *piVar1 = *piVar1 + -0x10 + uVar8;
        }
        else {
          *(ushort *)(param_1 + 0x16b8) = uVar6;
          *piVar1 = iVar5 + uVar8;
        }
      }
      else {
        iVar5 = (uint)(byte)(&DAT_00520818)[uVar8] * 4;
        uVar9 = (uint)*(ushort *)(iVar5 + 0x406 + param_2);
        local_34 = *piVar1;
        uVar7 = *(ushort *)(param_2 + 0x404 + (uint)(byte)(&DAT_00520818)[uVar8] * 4);
        uVar6 = uVar7 << ((byte)local_34 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
        if ((int)(0x10 - uVar9) < local_34) {
          *(ushort *)(param_1 + 0x16b8) = uVar6;
          *(char *)(*piVar11 + *piVar10) = (char)uVar6;
          *piVar11 = *piVar11 + 1;
          *(undefined1 *)(*piVar11 + *piVar10) = *(undefined1 *)(param_1 + 0x16b9);
          local_34 = *piVar1 + (uVar9 - 0x10);
          *piVar11 = *piVar11 + 1;
          uVar6 = uVar7 >> (0x10U - *(char *)piVar1 & 0x1f);
        }
        else {
          local_34 = local_34 + uVar9;
        }
        *(ushort *)(param_1 + 0x16b8) = uVar6;
        *piVar1 = local_34;
        iVar2 = *(int *)(&DAT_00520b18 + iVar5);
        if (iVar2 != 0) {
          uVar7 = (ushort)bVar3 - (short)*(undefined4 *)(&DAT_00521160 + iVar5);
          uVar6 = uVar7 << ((byte)local_34 & 0x1f) | uVar6;
          *(ushort *)(param_1 + 0x16b8) = uVar6;
          if (0x10 - iVar2 < local_34) {
            *(char *)(*piVar11 + *piVar10) = (char)uVar6;
            *piVar11 = *piVar11 + 1;
            *(undefined1 *)(*piVar11 + *piVar10) = *(undefined1 *)(param_1 + 0x16b9);
            *piVar11 = *piVar11 + 1;
            uVar6 = uVar7 >> (0x10U - *(char *)piVar1 & 0x1f);
            *(ushort *)(param_1 + 0x16b8) = uVar6;
            *piVar1 = *piVar1 + iVar2 + -0x10;
            local_34 = *piVar1;
          }
          else {
            local_34 = local_34 + iVar2;
            *piVar1 = local_34;
          }
        }
        uVar8 = uVar12 - 1;
        if (uVar8 < 0x100) {
          bVar3 = (&DAT_00520917)[uVar12];
        }
        else {
          bVar3 = (&DAT_00520a18)[uVar8 >> 7];
        }
        iVar5 = (uint)bVar3 * 4;
        uVar12 = (uint)*(ushort *)(iVar5 + 2 + param_3);
        uVar7 = *(ushort *)(iVar5 + param_3);
        if ((int)(0x10 - uVar12) < local_34) {
          uVar6 = uVar7 << ((byte)local_34 & 0x1f) | uVar6;
          *(ushort *)(param_1 + 0x16b8) = uVar6;
          *(char *)(*piVar11 + *piVar10) = (char)uVar6;
          *piVar11 = *piVar11 + 1;
          *(undefined1 *)(*piVar11 + *piVar10) = *(undefined1 *)(param_1 + 0x16b9);
          *piVar11 = *piVar11 + 1;
          local_28 = *piVar1 + (uVar12 - 0x10);
          uVar7 = uVar7 >> (0x10U - *(char *)piVar1 & 0x1f);
        }
        else {
          local_28 = uVar12 + local_34;
          uVar7 = uVar7 << ((byte)local_34 & 0x1f) | uVar6;
        }
        *(ushort *)(param_1 + 0x16b8) = uVar7;
        *piVar1 = local_28;
        iVar2 = *(int *)(&DAT_00520b90 + iVar5);
        if (iVar2 != 0) {
          uVar6 = (short)uVar8 - (short)*(undefined4 *)(&DAT_005211d8 + iVar5);
          uVar7 = uVar6 << ((byte)local_28 & 0x1f) | uVar7;
          *(ushort *)(param_1 + 0x16b8) = uVar7;
          if (0x10 - iVar2 < local_28) {
            *(char *)(*piVar11 + *piVar10) = (char)uVar7;
            *piVar11 = *piVar11 + 1;
            *(undefined1 *)(*piVar11 + *piVar10) = *(undefined1 *)(param_1 + 0x16b9);
            *piVar11 = *piVar11 + 1;
            *(ushort *)(param_1 + 0x16b8) = uVar6 >> (0x10U - *(char *)piVar1 & 0x1f);
            *piVar1 = *piVar1 + iVar2 + -0x10;
          }
          else {
            *piVar1 = local_28 + iVar2;
          }
        }
      }
    } while (uVar4 < *(uint *)(param_1 + 0x16a0));
  }
  piVar10 = (int *)(param_1 + 0x14);
  uVar4 = (uint)*(ushort *)(param_2 + 0x402);
  uVar7 = *(ushort *)(param_2 + 0x400);
  iVar5 = *piVar1;
  uVar6 = uVar7 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
  if (iVar5 <= (int)(0x10 - uVar4)) {
    *(ushort *)(param_1 + 0x16b8) = uVar6;
    *piVar1 = uVar4 + iVar5;
    return;
  }
  *(ushort *)(param_1 + 0x16b8) = uVar6;
  *(char *)(*(int *)(param_1 + 8) + *piVar10) = (char)uVar6;
  *piVar10 = *piVar10 + 1;
  *(undefined1 *)(*piVar10 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
  *piVar10 = *piVar10 + 1;
  *(ushort *)(param_1 + 0x16b8) = uVar7 >> (0x10U - *(char *)piVar1 & 0x1f);
  *piVar1 = (uVar4 - 0x10) + *piVar1;
  return;
}


