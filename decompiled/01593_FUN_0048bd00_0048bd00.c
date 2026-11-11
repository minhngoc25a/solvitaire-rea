// Function: FUN_0048bd00
// Entry: 0048bd00
// Size: 403 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048bd00(int *param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  __acrt_ptd *p_Var8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_c [2];
  int local_4;
  
  iVar5 = FUN_0048d920(*param_1,param_1 + 0x27,local_c);
  if (iVar5 == 0) {
    if (local_c[0] != 0) {
      return local_c[0];
    }
  }
  else {
    p_Var8 = FUN_0042470e();
    if (*(int *)p_Var8 == 0xc) {
      FUN_004873c0(1,"No memory");
    }
  }
  uVar14 = param_1[0x34];
  if ((uVar14 != 0) || (param_1[0x35] != 0)) {
    uVar13 = param_1[0x35];
    pcVar12 = (char *)0x0;
    uVar15 = uVar14 | uVar13;
    ppuVar10 = &PTR_s_nohidden_00512278;
    if (PTR_s_nohidden_00512278 != (undefined *)0x0) {
      do {
        if ((uVar15 & ((uint)ppuVar10[3] | (uint)ppuVar10[2])) != 0) {
          pcVar9 = *ppuVar10;
          pcVar1 = pcVar9 + 1;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          pcVar12 = pcVar9 + (int)(pcVar12 + (1 - (int)pcVar1));
          uVar15 = uVar15 & ~((uint)ppuVar10[3] | (uint)ppuVar10[2]);
        }
        ppuVar10 = ppuVar10 + 4;
      } while (*ppuVar10 != (undefined *)0x0);
      if ((pcVar12 != (char *)0x0) &&
         (puVar6 = (uint *)FUN_00482949((SIZE_T)pcVar12), puVar6 != (uint *)0x0)) {
        ppuVar10 = &PTR_s_nohidden_00512278;
        puVar7 = puVar6;
        puVar3 = PTR_s_nohidden_00512278;
        while (puVar3 != (undefined *)0x0) {
          puVar3 = ppuVar10[2];
          if (((uVar14 & (uint)puVar3) == 0) && ((uVar13 & (uint)ppuVar10[3]) == 0)) {
            if (((uVar14 & (uint)ppuVar10[3]) != 0) || ((uVar13 & (uint)puVar3) != 0)) {
              puVar11 = *ppuVar10;
              goto LAB_0048bdff;
            }
          }
          else {
            puVar11 = *ppuVar10 + 2;
LAB_0048bdff:
            uVar14 = uVar14 & ~((uint)ppuVar10[3] | (uint)puVar3);
            uVar13 = uVar13 & ~((uint)ppuVar10[3] | (uint)puVar3);
            if (puVar6 < puVar7) {
              *(char *)puVar7 = ',';
              puVar7 = (uint *)((int)puVar7 + 1);
            }
            iVar5 = (int)puVar11 - (int)puVar7;
            puVar4 = puVar7;
            do {
              puVar7 = puVar4;
              cVar2 = *(char *)(iVar5 + (int)puVar7);
              *(char *)puVar7 = cVar2;
              puVar4 = (uint *)((int)puVar7 + 1);
            } while (cVar2 != '\0');
          }
          ppuVar10 = ppuVar10 + 4;
          puVar3 = *ppuVar10;
        }
        *(char *)puVar7 = '\0';
        FUN_0048dca0(param_3 + 0x27,puVar6);
        FUN_0047d191(puVar6);
        iVar5 = FUN_0048d920(*param_3,param_3 + 0x27,&local_4);
        if (iVar5 == 0) {
          return local_4;
        }
        p_Var8 = FUN_0042470e();
        if (*(int *)p_Var8 == 0xc) {
          FUN_004873c0(1,"No memory");
        }
      }
    }
  }
  return 0;
}


