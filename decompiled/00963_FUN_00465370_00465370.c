// Function: FUN_00465370
// Entry: 00465370
// Size: 606 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00465370(uint param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  bool bVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint local_8;
  int iStack_4;
  
  iVar2 = **(int **)(param_1 + 0x440);
  if (*(int *)(iVar2 + 0xb4) != 0) {
LAB_004655b3:
    uVar4 = FUN_00463050(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if ((((*(int *)(iVar2 + 0xdc) != 0) || (*(int *)(iVar2 + 0xd8) != 0)) ||
      (*(int *)(iVar2 + 0xcc) != 0)) || (*(int *)(iVar2 + 200) != 0)) {
    uVar4 = FUN_00462a40(param_1,0,unaff_EDI,unaff_ESI);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    goto LAB_004655b3;
  }
  local_8 = 0;
  iStack_4 = 0;
  if (*(int *)(iVar2 + 0xd4) == 0) {
    if (*(int *)(iVar2 + 0x48) == 0) {
      uVar4 = *(uint *)(iVar2 + 0xc0);
      if (uVar4 == 0) {
        uVar3 = *(uint *)(*(int *)(iVar2 + 0x84) + 8);
        iVar5 = uVar3 * 0x68 + *(int *)(iVar2 + 0x28);
        if ((*(int *)(iVar5 + 0x60) != 0 || *(int *)(iVar5 + 100) != 0) || (uVar3 != 0)) {
          *(uint *)(iVar2 + 0xc0) = uVar3;
          local_8 = *(uint *)(iVar5 + 0x60);
          iStack_4 = *(int *)(iVar5 + 100);
          uVar4 = uVar3;
        }
      }
      if ((*(int *)(iVar2 + 0x24) == 0) && (*(uint *)(iVar2 + 0x20) <= uVar4)) {
        *param_2 = 0;
        return 0;
      }
      uVar4 = FUN_00465bd0(param_1,(uint *)(uVar4 * 0x68 + *(int *)(iVar2 + 0x28)));
      if (uVar4 == 0) {
        *(int *)(iVar2 + 0xc0) = *(int *)(iVar2 + 0xc0) + 1;
        goto LAB_0046548c;
      }
    }
    else {
      pcVar8 = "Malformed 7-Zip archive";
      uVar7 = 0xffffffff;
LAB_004653e7:
      FUN_00487380(param_1,uVar7,(int)pcVar8);
    }
    uVar4 = 0xffffffe2;
  }
  else {
LAB_0046548c:
    uVar4 = FUN_004655d0(param_1);
    if ((-1 < (int)uVar4) && (uVar4 = FUN_00462a40(param_1,0,unaff_EBP,unaff_EBX), -1 < (int)uVar4))
    {
      if (local_8 != 0 || iStack_4 != 0) {
        do {
          if (*(int *)(iVar2 + 0xb4) == 0) {
            if ((((*(int *)(iVar2 + 0xdc) == 0) && (*(int *)(iVar2 + 0xd8) == 0)) &&
                (*(int *)(iVar2 + 0xcc) == 0)) && (*(int *)(iVar2 + 200) == 0)) {
              pcVar8 = "Truncated 7-Zip file body";
              uVar7 = 0x2a;
              goto LAB_004653e7;
            }
            uVar4 = FUN_00462a40(param_1,0,unaff_EBP,unaff_EBX);
            if ((int)uVar4 < 0) {
              return uVar4;
            }
          }
          uVar4 = FUN_00463050(param_1,param_2,local_8,0);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          bVar6 = local_8 < uVar4;
          local_8 = local_8 - uVar4;
          iStack_4 = (iStack_4 - ((int)uVar4 >> 0x1f)) - (uint)bVar6;
          if (*(int *)(iVar2 + 0xe0) != 0) {
            iVar5 = **(int **)(param_1 + 0x440);
            if (*(uint *)(iVar5 + 0xe0) != 0) {
              FUN_00488f20(param_1,(ulonglong)*(uint *)(iVar5 + 0xe0));
              uVar3 = *(uint *)(iVar5 + 0xe0);
              puVar1 = (uint *)(iVar5 + 0xb8);
              uVar4 = *puVar1;
              *puVar1 = *puVar1 + uVar3;
              *(undefined4 *)(iVar5 + 0xe0) = 0;
              *(int *)(iVar5 + 0xbc) = *(int *)(iVar5 + 0xbc) + (uint)CARRY4(uVar4,uVar3);
            }
          }
        } while (local_8 != 0 || iStack_4 != 0);
      }
      uVar4 = FUN_00463050(param_1,param_2,param_3,param_4);
      return uVar4;
    }
  }
  return uVar4;
}


