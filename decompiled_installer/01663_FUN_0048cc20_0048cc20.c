// Function: FUN_0048cc20
// Entry: 0048cc20
// Size: 534 bytes
// Thunk: false
// External: false


byte * __cdecl FUN_0048cc20(undefined **param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined **ppuVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  uint local_10;
  uint local_c;
  undefined **local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = (undefined **)0x0;
  for (; ((bVar4 = *(byte *)param_1, bVar4 == 9 || (bVar4 == 0x20)) ||
         (ppuVar3 = param_1, bVar4 == 0x2c)); param_1 = (undefined **)((int)param_1 + 1)) {
  }
  do {
    ppuVar7 = ppuVar3;
    if (bVar4 == 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = local_10;
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = local_c;
      }
      return (byte *)local_8;
    }
    do {
      if (((bVar4 == 9) || (*(byte *)ppuVar7 == 0x20)) || (*(byte *)ppuVar7 == 0x2c)) break;
      bVar4 = *(byte *)((int)ppuVar7 + 1);
      ppuVar7 = (undefined **)((int)ppuVar7 + 1);
    } while (bVar4 != 0);
    uVar10 = (int)ppuVar7 - (int)ppuVar3;
    param_1 = &PTR_s_nohidden_00512278;
    ppuVar9 = &PTR_s_nohidden_00512278;
    pbVar6 = PTR_s_nohidden_00512278;
    if (PTR_s_nohidden_00512278 == (undefined *)0x0) {
LAB_0048cdce:
      if ((*ppuVar9 == (undefined *)0x0) && (local_8 == (undefined **)0x0)) {
        local_8 = ppuVar3;
      }
    }
    else {
      do {
        pbVar1 = pbVar6 + 1;
        pbVar12 = pbVar6;
        do {
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar4 != 0);
        ppuVar9 = param_1;
        if (uVar10 == (int)pbVar12 - (int)pbVar1) {
          pbVar6 = *param_1;
          pbVar11 = pbVar6;
          ppuVar8 = ppuVar3;
          uVar5 = uVar10;
          while (uVar2 = uVar5 - 4, 3 < uVar5) {
            if (*ppuVar8 != *(undefined **)pbVar11) goto LAB_0048ccd6;
            ppuVar8 = ppuVar8 + 1;
            pbVar11 = pbVar11 + 4;
            uVar5 = uVar2;
          }
          if (uVar2 == 0xfffffffc) {
LAB_0048cd0a:
            uVar5 = 0;
          }
          else {
LAB_0048ccd6:
            bVar13 = *(byte *)ppuVar8 < *pbVar11;
            if ((*(byte *)ppuVar8 == *pbVar11) &&
               ((uVar2 == 0xfffffffd ||
                ((bVar13 = *(byte *)((int)ppuVar8 + 1) < pbVar11[1],
                 *(byte *)((int)ppuVar8 + 1) == pbVar11[1] &&
                 ((uVar2 == 0xfffffffe ||
                  ((bVar13 = *(byte *)((int)ppuVar8 + 2) < pbVar11[2],
                   *(byte *)((int)ppuVar8 + 2) == pbVar11[2] &&
                   ((uVar2 == 0xffffffff ||
                    (bVar13 = *(byte *)((int)ppuVar8 + 3) < pbVar11[3],
                    *(byte *)((int)ppuVar8 + 3) == pbVar11[3])))))))))))) goto LAB_0048cd0a;
            uVar5 = -(uint)bVar13 | 1;
          }
          if (uVar5 == 0) {
            local_c = local_c | (uint)param_1[2];
            local_10 = local_10 | (uint)param_1[3];
            goto LAB_0048cdce;
          }
        }
        if (uVar10 == ((int)pbVar12 - (int)pbVar1) - 2U) {
          pbVar6 = pbVar6 + 2;
          ppuVar8 = ppuVar3;
          uVar5 = uVar10;
          while (uVar2 = uVar5 - 4, 3 < uVar5) {
            if (*ppuVar8 != *(undefined **)pbVar6) goto LAB_0048cd46;
            ppuVar8 = ppuVar8 + 1;
            pbVar6 = pbVar6 + 4;
            uVar5 = uVar2;
          }
          if (uVar2 != 0xfffffffc) {
LAB_0048cd46:
            if ((*(byte *)ppuVar8 != *pbVar6) ||
               ((uVar2 != 0xfffffffd &&
                ((*(byte *)((int)ppuVar8 + 1) != pbVar6[1] ||
                 ((uVar2 != 0xfffffffe &&
                  ((*(byte *)((int)ppuVar8 + 2) != pbVar6[2] ||
                   ((uVar2 != 0xffffffff && (*(byte *)((int)ppuVar8 + 3) != pbVar6[3]))))))))))))
            goto LAB_0048cd7b;
          }
          local_10 = local_10 | (uint)param_1[2];
          local_c = local_c | (uint)param_1[3];
          goto LAB_0048cdce;
        }
LAB_0048cd7b:
        pbVar6 = param_1[4];
        param_1 = param_1 + 4;
      } while (pbVar6 != (byte *)0x0);
      if (local_8 == (undefined **)0x0) {
        local_8 = ppuVar3;
      }
    }
    for (; ((bVar4 = *(byte *)ppuVar7, bVar4 == 9 || (bVar4 == 0x20)) ||
           (ppuVar3 = ppuVar7, bVar4 == 0x2c)); ppuVar7 = (undefined **)((int)ppuVar7 + 1)) {
    }
  } while( true );
}


