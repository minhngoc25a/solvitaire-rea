// Function: FUN_00467820
// Entry: 00467820
// Size: 516 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00467820(uint *param_1,undefined4 param_2,undefined4 *param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 uVar4;
  LPVOID pvVar5;
  int iVar6;
  __acrt_ptd *p_Var7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  
  puVar2 = param_1;
  uVar9 = param_1[0x29];
  uVar12 = 0;
  *param_3 = 0;
  pvVar5 = (LPVOID)FUN_0047f911(1,0x68);
  piVar3 = param_4;
  if (pvVar5 == (LPVOID)0x0) {
    FUN_00487380((int)puVar2,0xc,0x5238e8);
    return 0xffffffe2;
  }
  iVar6 = FUN_0048ca80(param_4,(int *)&param_1,(int *)&param_3,*(UINT *)(uVar9 + 0xac));
  if (iVar6 < 0) {
    p_Var7 = FUN_0042470e();
    if (*(int *)p_Var7 == 0xc) {
      FUN_0047d191(pvVar5);
      pcVar14 = "Can\'t allocate memory for UTF-16LE";
      goto LAB_00467898;
    }
    FUN_00487380((int)puVar2,0xffffffff,0x52f1c0);
    uVar12 = 0xffffffec;
  }
  puVar8 = (uint *)FUN_00482949((int)param_3 + 2);
  *(uint **)((int)pvVar5 + 0x14) = puVar8;
  if (puVar8 != (uint *)0x0) {
    FUN_0044c490(puVar8,param_1,(uint)param_3);
    *(undefined1 *)((int)param_3 + *(int *)((int)pvVar5 + 0x14)) = 0;
    *(undefined1 *)(*(int *)((int)pvVar5 + 0x14) + 1 + (int)param_3) = 0;
    *(undefined4 **)((int)pvVar5 + 0x10) = param_3;
    uVar4 = FUN_0048bfb0((int)piVar3);
    *(undefined2 *)((int)pvVar5 + 0x58) = uVar4;
    uVar9 = FUN_0048bcc0((int)piVar3);
    if ((short)uVar9 == -0x8000) {
      uVar13 = FUN_0048c180((int)piVar3);
      *(undefined8 *)((int)pvVar5 + 0x18) = uVar13;
    }
    else {
      FUN_0048c7c0((int)piVar3,0,0);
    }
    uVar9 = FUN_0048bcc0((int)piVar3);
    if ((short)uVar9 == 0x4000) {
      *(uint *)((int)pvVar5 + 0x60) = *(uint *)((int)pvVar5 + 0x60) | 1;
    }
    else {
      uVar9 = FUN_0048bcc0((int)piVar3);
      if ((short)uVar9 == -0x6000) {
        piVar10 = FUN_0048c1a0(piVar3);
        iVar6 = (int)piVar10 + 1;
        do {
          iVar1 = *piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
        } while ((char)iVar1 != '\0');
        *(undefined4 *)((int)pvVar5 + 0x1c) = 0;
        *(int *)((int)pvVar5 + 0x18) = (int)piVar10 - iVar6;
      }
    }
    uVar9 = FUN_0048bfe0((int)piVar3);
    if (uVar9 != 0) {
      *(uint *)((int)pvVar5 + 0x20) = *(uint *)((int)pvVar5 + 0x20) | 1;
      uVar13 = FUN_0048bfc0((int)piVar3);
      *(undefined8 *)((int)pvVar5 + 0x28) = uVar13;
      uVar11 = FUN_0048bfd0((int)piVar3);
      *(undefined4 *)((int)pvVar5 + 0x30) = uVar11;
    }
    uVar9 = FUN_0048bbd0((int)piVar3);
    if (uVar9 != 0) {
      *(uint *)((int)pvVar5 + 0x20) = *(uint *)((int)pvVar5 + 0x20) | 2;
      uVar13 = FUN_0048bbb0((int)piVar3);
      *(undefined8 *)((int)pvVar5 + 0x38) = uVar13;
      uVar11 = FUN_0048bbc0((int)piVar3);
      *(undefined4 *)((int)pvVar5 + 0x40) = uVar11;
    }
    uVar9 = FUN_0048bc30((int)piVar3);
    if (uVar9 != 0) {
      *(uint *)((int)pvVar5 + 0x20) = *(uint *)((int)pvVar5 + 0x20) | 4;
      uVar13 = FUN_0048bc10((int)piVar3);
      *(undefined8 *)((int)pvVar5 + 0x48) = uVar13;
      uVar11 = FUN_0048bc20((int)piVar3);
      *(undefined4 *)((int)pvVar5 + 0x50) = uVar11;
    }
    *param_5 = pvVar5;
    return uVar12;
  }
  FUN_0047d191(pvVar5);
  pcVar14 = "Can\'t allocate memory for Name";
LAB_00467898:
  FUN_00487380((int)puVar2,0xc,(int)pcVar14);
  return 0xffffffe2;
}


