// Function: FUN_004b5230
// Entry: 004b5230
// Size: 311 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b5230(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iStack_14;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x1c0);
  *(bool *)(iVar4 + 0x1c) = iVar3 == 1;
  uVar6 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,(-(uint)(iVar3 != 1) & 0xfffffe02) + 0x2fe,
                     *(undefined4 *)(param_1 + 100));
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  iVar7 = *(int *)(iVar4 + 0x14);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      iVar10 = *(int *)(iVar4 + 0x20 + iStack_14 * 4);
      iVar7 = iVar7 / iVar10;
      if (iVar3 == 1) {
        piVar1 = (int *)(*(int *)(iVar4 + 0x18) + iStack_14 * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      iVar2 = iVar10 * 2 + -2;
      puVar5 = *(undefined1 **)(*(int *)(iVar4 + 0x18) + iStack_14 * 4);
      iVar8 = (iVar10 + 0xfe) / iVar2;
      iVar13 = 0;
      iVar12 = 0;
      do {
        if (iVar8 < iVar13) {
          iVar9 = iVar10 + 0xfe + iVar12 * 0x1fe;
          do {
            iVar9 = iVar9 + 0x1fe;
            iVar12 = iVar12 + 1;
            iVar8 = iVar9 / iVar2;
          } while (iVar8 < iVar13);
        }
        puVar5[iVar13] = (char)iVar7 * (char)iVar12;
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x100);
      if (iVar3 == 1) {
        iVar10 = 1;
        puVar11 = puVar5;
        do {
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar5;
          puVar5[iVar10 + 0xff] = puVar5[0xff];
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x100);
      }
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < *(int *)(param_1 + 100));
  }
  return;
}


