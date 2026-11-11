// Function: FUN_00459f80
// Entry: 00459f80
// Size: 334 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00459f80(int param_1,uint param_2,int *param_3,undefined4 param_4,uint *param_5)

{
  int *piVar1;
  short *psVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  short *psVar10;
  short sVar11;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  uint uVar12;
  undefined4 unaff_EDI;
  bool bVar13;
  longlong lVar14;
  
  psVar3 = (short *)FUN_0048c0b0(param_3);
  if (psVar3 == (short *)0x0) {
    piVar4 = FUN_0048c000(param_3);
    if (piVar4 == (int *)0x0) {
      return 0xffffffe7;
    }
    cVar7 = (char)*piVar4;
    cVar8 = '\0';
    if (cVar7 != '\0') {
      piVar1 = (int *)((int)piVar4 + 1);
      do {
        while ((piVar5 = piVar1, cVar7 == '/' && ((char)*piVar5 != '\0'))) {
          cVar7 = (char)*piVar5;
          piVar4 = piVar5;
          piVar1 = (int *)((int)piVar5 + 1);
        }
        cVar7 = (char)*piVar5;
        piVar1 = (int *)((int)piVar5 + 1);
      } while (cVar7 != '\0');
      cVar8 = (char)*piVar4;
    }
    if (cVar8 != '.') {
      return 0;
    }
    if (*(char *)((int)piVar4 + 1) != '_') {
      return 0;
    }
    bVar13 = *(char *)((int)piVar4 + 2) == '\0';
  }
  else {
    sVar11 = *psVar3;
    sVar9 = 0;
    if (sVar11 != 0) {
      psVar2 = psVar3 + 1;
      do {
        while ((psVar10 = psVar2, sVar11 == 0x2f && (*psVar10 != 0))) {
          sVar11 = *psVar10;
          psVar3 = psVar10;
          psVar2 = psVar10 + 1;
        }
        sVar11 = *psVar10;
        psVar2 = psVar10 + 1;
      } while (sVar11 != 0);
      sVar9 = *psVar3;
    }
    if (sVar9 != 0x2e) {
      return 0;
    }
    if (psVar3[1] != 0x5f) {
      return 0;
    }
    bVar13 = psVar3[2] == 0;
  }
  if (bVar13) {
    return 0;
  }
  lVar14 = FUN_0048c180((int)param_3);
  uVar12 = (uint)lVar14;
  if (((-1 < lVar14) && ((int)((ulonglong)lVar14 >> 0x20) == 0)) &&
     (puVar6 = (uint *)FUN_00488710(param_1,uVar12,(uint *)0x0), puVar6 != (uint *)0x0)) {
    FUN_0048c960((int)param_3,puVar6,uVar12);
    uVar12 = uVar12 + 0x1ff & 0xfffffe00;
    *param_5 = uVar12;
    if (uVar12 != 0) {
      FUN_00488f20(param_1,(ulonglong)uVar12);
      *param_5 = 0;
    }
    uVar12 = FUN_0045cd30(param_1,param_2,(uint)param_3,param_5,unaff_EBX,unaff_EDI,unaff_ESI,
                          unaff_EBP);
    return uVar12;
  }
  *param_5 = 0;
  return 0xffffffe2;
}


