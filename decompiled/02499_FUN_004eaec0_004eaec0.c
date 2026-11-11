// Function: FUN_004eaec0
// Entry: 004eaec0
// Size: 435 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eaec0(ushort *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  uVar5 = *(uint *)(param_1 + 0x2402);
  *(uint *)(param_1 + param_2 * 2 + 0x2404) = uVar5;
  bVar1 = (&DAT_00522710)[*param_1 >> 4];
  bVar2 = (&DAT_00522710)[(*param_1 ^ 0x7f0) >> 4];
  bVar3 = (&DAT_00522710)[param_1[1] >> 4];
  bVar4 = (&DAT_00522710)[(param_1[1] ^ 0x7f0) >> 4];
  if (uVar5 != 0) {
    while (uVar8 < 8) {
      iVar9 = 0;
      uVar6 = uVar8 + 8;
      do {
        uVar7 = uVar6 >> 1;
        iVar9 = iVar9 + (uint)(byte)(&DAT_00522710)
                                    [(uint)(param_1[uVar7 + param_2 * 8 + 2] >> 4) ^
                                     -(uVar6 & 1) >> 4 & 0x7f];
        uVar6 = uVar7;
      } while (uVar7 != 1);
      *(uint *)(param_1 + param_2 * 0x220 + uVar8 * 2 + 0x202) = (uint)bVar1 + iVar9;
      uVar8 = uVar8 + 1;
      if (uVar5 <= uVar8) {
        return;
      }
    }
    if (uVar8 < uVar5) {
      while (uVar8 < 0x10) {
        iVar9 = 0;
        uVar6 = uVar8;
        do {
          uVar7 = uVar6 >> 1;
          iVar9 = iVar9 + (uint)(byte)(&DAT_00522710)
                                      [(uint)(param_1[uVar7 + param_2 * 8 + 0x82] >> 4) ^
                                       -(uVar6 & 1) >> 4 & 0x7f];
          uVar6 = uVar7;
        } while (uVar7 != 1);
        *(uint *)(param_1 + param_2 * 0x220 + uVar8 * 2 + 0x202) = (uint)bVar3 + (uint)bVar2 + iVar9
        ;
        uVar8 = uVar8 + 1;
        if (uVar5 <= uVar8) {
          return;
        }
      }
      do {
        iVar9 = 0;
        uVar6 = uVar8 + 0xf0;
        do {
          uVar7 = uVar6 >> 1;
          iVar9 = iVar9 + (uint)(byte)(&DAT_00522710)
                                      [(uint)(param_1[uVar7 + 0x102] >> 4) ^
                                       -(uVar6 & 1) >> 4 & 0x7f];
          uVar6 = uVar7;
        } while (uVar7 != 1);
        *(uint *)(param_1 + param_2 * 0x220 + uVar8 * 2 + 0x202) = (uint)bVar4 + (uint)bVar2 + iVar9
        ;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  return;
}


