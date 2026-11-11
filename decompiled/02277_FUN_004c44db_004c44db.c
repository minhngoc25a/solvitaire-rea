// Function: FUN_004c44db
// Entry: 004c44db
// Size: 607 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c44db(uint *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  __acrt_ptd *p_Var4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  BOOL BVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  
  if (param_1 == (uint *)0x0) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x16;
    return 0xffffffff;
  }
  puVar5 = FUN_004810c0(param_1,'=');
  if ((puVar5 == (uint *)0x0) || (puVar5 == param_1)) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_004247be(param_1);
    return 0xffffffff;
  }
  cVar3 = *(char *)((int)puVar5 + 1);
  FUN_004c49c6();
  uVar11 = 0;
  if (DAT_00544354 == (int *)0x0) {
    if ((param_2 != 0) && (DAT_00544358 != (LPVOID)0x0)) {
      iVar6 = thunk_FUN_0047fe0c();
      if (iVar6 == 0) {
        p_Var4 = FUN_0042470e();
        *(undefined4 *)p_Var4 = 0x16;
        goto LAB_004c4555;
      }
      FUN_004c49c6();
      goto LAB_004c45b0;
    }
    if (cVar3 == '\0') goto LAB_004c46fc;
    DAT_00544354 = __calloc_base(1,4);
    FUN_004247be((LPVOID)0x0);
    if (DAT_00544354 != (int *)0x0) {
      if (DAT_00544358 == (LPVOID)0x0) {
        DAT_00544358 = __calloc_base(1,4);
        FUN_004247be((LPVOID)0x0);
        if (DAT_00544358 == (LPVOID)0x0) goto LAB_004c4555;
      }
      goto LAB_004c45b0;
    }
  }
  else {
LAB_004c45b0:
    piVar8 = DAT_00544354;
    if (DAT_00544354 != (int *)0x0) {
      uVar7 = find_in_environment_nolock<char>((char *)param_1,(int)puVar5 - (int)param_1);
      if ((-1 < (int)uVar7) && (*piVar8 != 0)) {
        FUN_004247be((LPVOID)piVar8[uVar7]);
        if (cVar3 == '\0') {
          for (; piVar8[uVar7] != 0; uVar7 = uVar7 + 1) {
            piVar8[uVar7] = piVar8[uVar7 + 1];
          }
          piVar8 = __recalloc_base(piVar8,uVar7,4);
          FUN_004247be((LPVOID)0x0);
          puVar13 = param_1;
          if (piVar8 != (int *)0x0) {
LAB_004c4674:
            DAT_00544354 = piVar8;
          }
        }
        else {
          puVar13 = (uint *)0x0;
          piVar8[uVar7] = (int)param_1;
        }
        if (param_2 == 0) {
LAB_004c470c:
          FUN_004247be(puVar13);
          return 0;
        }
        puVar12 = param_1;
        do {
          uVar7 = *puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
        } while ((char)uVar7 != '\0');
        pcVar2 = (char *)((int)puVar12 + (2 - ((int)param_1 + 1)));
        pcVar9 = __calloc_base((uint)pcVar2,1);
        if (pcVar9 == (char *)0x0) {
          FUN_004247be((LPVOID)0x0);
          param_1 = puVar13;
        }
        else {
          iVar6 = FUN_0047faad(pcVar9,(int)pcVar2,(int)param_1);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(undefined1 *)(((int)pcVar9 - (int)param_1) + (int)puVar5) = 0;
          BVar10 = ___acrt_SetEnvironmentVariableA
                             (pcVar9,(char *)(-(uint)(cVar3 != '\0') &
                                             (int)puVar5 + ((int)pcVar9 - (int)param_1) + 1));
          if (BVar10 != 0) {
            FUN_004247be(pcVar9);
            goto LAB_004c470c;
          }
          p_Var4 = FUN_0042470e();
          *(undefined4 *)p_Var4 = 0x2a;
          FUN_004247be(pcVar9);
          uVar11 = 0xffffffff;
          param_1 = puVar13;
        }
        goto LAB_004c46fc;
      }
      if (cVar3 == '\0') goto LAB_004c46fc;
      uVar1 = -uVar7 + 2;
      if ((-uVar7 <= uVar1) && (uVar1 < 0x3fffffff)) {
        piVar8 = __recalloc_base(piVar8,uVar1,4);
        FUN_004247be((LPVOID)0x0);
        if (piVar8 != (int *)0x0) {
          piVar8[-uVar7] = (int)param_1;
          piVar8[1 - uVar7] = 0;
          puVar13 = (uint *)0x0;
          goto LAB_004c4674;
        }
      }
    }
  }
LAB_004c4555:
  uVar11 = 0xffffffff;
LAB_004c46fc:
  FUN_004247be(param_1);
  return uVar11;
}


