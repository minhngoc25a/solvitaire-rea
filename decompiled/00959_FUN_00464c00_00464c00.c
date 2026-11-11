// Function: FUN_00464c00
// Entry: 00464c00
// Size: 356 bytes
// Thunk: false
// External: false


int __cdecl FUN_00464c00(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  uint *unaff_EBP;
  uint uVar9;
  undefined4 unaff_ESI;
  uint *unaff_EDI;
  bool bVar10;
  int unaff_retaddr;
  
  iVar5 = *(int *)param_1[0x110];
  _memset(param_2,0,0x48);
  puVar3 = FUN_00463150(param_1,1);
  if (puVar3 == (uint *)0x0) {
    return -1;
  }
  if ((char)*puVar3 == '\x06') {
    iVar4 = FUN_00464aa0(param_1,param_2);
    if (iVar4 < 0) {
      return -1;
    }
    if (param_2[7] == 0) {
      return -1;
    }
    if (param_2[4] == 0) {
      return -1;
    }
    uVar8 = *param_2;
    uVar7 = 0;
    uVar9 = param_2[1];
    if ((param_2[3] != 0) || (param_2[2] != 0)) {
      do {
        uVar2 = param_2[7];
        *(uint *)(uVar2 + uVar7 * 8) = uVar8;
        *(uint *)(uVar2 + 4 + uVar7 * 8) = uVar9;
        puVar3 = (uint *)(param_2[4] + uVar7 * 8);
        bVar10 = CARRY4(uVar8,*puVar3);
        uVar8 = uVar8 + *puVar3;
        uVar9 = uVar9 + *(int *)(param_2[4] + 4 + uVar7 * 8) + (uint)bVar10;
        uVar2 = *(uint *)(iVar5 + 100);
        if (uVar2 < uVar9) {
          return -1;
        }
        if ((uVar2 <= uVar9) && (*(uint *)(iVar5 + 0x60) < uVar8)) {
          return -1;
        }
        uVar7 = uVar7 + 1;
      } while ((param_2[3] != 0) || (uVar7 < param_2[2]));
    }
    puVar3 = FUN_00463150(param_1,1);
    if (puVar3 == (uint *)0x0) {
      return -1;
    }
  }
  puVar1 = param_2 + 8;
  if ((char)*puVar3 == '\a') {
    iVar5 = FUN_00463b70(param_1,puVar1,unaff_EDI);
    if (iVar5 < 0) {
      return -1;
    }
    uVar8 = 0;
    uVar9 = 0;
    if ((param_2[9] != 0) || (*puVar1 != 0)) {
      piVar6 = (int *)(param_2[10] + 0x20);
      do {
        piVar6[0xe] = uVar8;
        uVar8 = uVar8 + *piVar6;
        if ((param_2[3] == 0) && (param_2[2] < uVar8)) {
          return -1;
        }
        uVar9 = uVar9 + 1;
        piVar6 = piVar6 + 0x1a;
      } while ((param_2[9] != 0) || (uVar9 < *puVar1));
    }
    puVar3 = FUN_00463150(param_1,1);
    if (puVar3 == (uint *)0x0) {
      return -1;
    }
  }
  if (((char)*puVar3 == '\b') &&
     ((iVar5 = FUN_00464d70(param_1,param_2 + 0xe,param_2[10],CONCAT44(unaff_EDI,param_2[8]),
                            unaff_ESI,unaff_EBP,unaff_EBX,unaff_retaddr,(uint)param_1), iVar5 < 0 ||
      (puVar3 = FUN_00463150(param_1,1), puVar3 == (uint *)0x0)))) {
    return -1;
  }
  return -(uint)((char)*puVar3 != '\0');
}


