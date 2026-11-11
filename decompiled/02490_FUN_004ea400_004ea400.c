// Function: FUN_004ea400
// Entry: 004ea400
// Size: 236 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ea400(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar4;
  uint uVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_4;
  
  puVar1 = param_1;
  if (param_1 != (uint *)0x0) {
    uVar8 = *param_1;
    uVar7 = param_1[1];
    if ((uVar8 & uVar7) != 0xffffffff) {
      bVar4 = 1;
      local_4 = 0;
      param_1 = (uint *)0x1;
      uVar6 = 0;
      while( true ) {
        iVar5 = 0;
        if ((uVar8 != 1) || (uVar7 != 0x40000000)) {
          uVar2 = 1;
          uVar3 = 0x40000000;
          do {
            if ((uVar2 & uVar3) == 0xffffffff) {
              return 8;
            }
            iVar5 = iVar5 + 1;
            uVar2 = *(uint *)(&UNK_00521ee8 + iVar5 * 0x10);
            uVar3 = *(uint *)(&UNK_00521eec + iVar5 * 0x10);
          } while ((uVar8 != uVar2) || (uVar7 != uVar3));
          bVar4 = (byte)param_1;
        }
        if (bVar4 == 0) break;
        iVar5 = iVar5 * 0x10;
        uVar6 = uVar6 + 1;
        bVar4 = (&DAT_00521ef4)[iVar5];
        local_4 = local_4 + (byte)(&DAT_00521ef6)[iVar5];
        param_1 = (uint *)(uint)bVar4;
        uVar8 = puVar1[uVar6 * 4];
        uVar7 = puVar1[uVar6 * 4 + 1];
        if ((uVar8 & uVar7) == 0xffffffff) {
          if (((uVar6 < 5) && ((&DAT_00521ef5)[iVar5] != '\0')) && (local_4 < 4)) {
            *param_2 = uVar6;
            return 0;
          }
          return 8;
        }
      }
      return 8;
    }
  }
  return 0xb;
}


