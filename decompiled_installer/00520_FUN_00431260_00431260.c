// Function: FUN_00431260
// Entry: 00431260
// Size: 367 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00431260(uint *param_1,uint param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  code *local_58;
  uint auStack_3c [15];
  
  if (param_4 == (int *)0x0) {
    return -2;
  }
  if ((param_3 == (undefined4 *)0x0) || (piVar2 = param_3 + 4, piVar2 == (int *)0x0)) {
LAB_004312c2:
    iVar3 = 0;
    local_58 = FUN_004355a0;
    pcVar1 = FUN_00435570;
    goto LAB_004312d0;
  }
  if (*piVar2 == 0) {
    if (param_3[7] == 0) {
      if ((param_3[5] == 0) && (param_3[6] == 0)) goto LAB_004312c2;
      goto LAB_00431297;
    }
  }
  else {
LAB_00431297:
    if (param_3[7] == 0) {
      return -2;
    }
  }
  if ((param_3[5] == 0) && (param_3[6] == 0)) {
    return -2;
  }
  iVar3 = *piVar2;
  pcVar1 = (code *)param_3[5];
  local_58 = (code *)param_3[7];
LAB_004312d0:
  if ((pcVar1 == (code *)0x0) || (piVar2 = (int *)(*pcVar1)(0x170,iVar3), piVar2 == (int *)0x0)) {
    return -4;
  }
  uVar4 = 0;
  do {
    auStack_3c[uVar4] = uVar4 + _DAT_0050c3a0;
    auStack_3c[uVar4 + 1] = uVar4 + _UNK_0050c3a4;
    auStack_3c[uVar4 + 2] = uVar4 + _UNK_0050c3a8;
    auStack_3c[uVar4 + 3] = uVar4 + _UNK_0050c3ac;
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0xc);
  for (; uVar4 < 0xf; uVar4 = uVar4 + 1) {
    auStack_3c[uVar4] = uVar4;
  }
  puVar5 = auStack_3c;
  uVar4 = 0xf;
  if (param_1 != (uint *)0x0) {
    puVar5 = param_1;
    uVar4 = param_2;
  }
  uVar6 = 0;
  iVar7 = -0xcb;
  if (uVar4 != 0) {
    do {
      iVar7 = FUN_0042fba0(puVar5,1,param_3,piVar2);
      if (iVar7 == 0) {
        iVar7 = FUN_00430300((int)piVar2,param_4,param_5);
        if (iVar7 == 0) goto LAB_00431397;
        FUN_00430110((int)piVar2);
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < uVar4);
    if (iVar7 == 0) {
LAB_00431397:
      *(undefined1 *)(param_5 + 0xe) = 1;
      return 0;
    }
  }
  if (local_58 == (code *)0x0) {
    return iVar7;
  }
  (*local_58)(piVar2,iVar3);
  return iVar7;
}


