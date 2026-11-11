// Function: FUN_00463b70
// Entry: 00463b70
// Size: 660 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00463b70(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *unaff_EBX;
  undefined4 unaff_EBP;
  uint uVar7;
  LPVOID unaff_retaddr;
  uint in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  uint *puStack_4;
  
  puVar5 = param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar1 = FUN_00463150(param_1,1);
  if (((puVar1 == (uint *)0x0) || ((char)*puVar1 != '\v')) ||
     (iVar2 = FUN_004638e0(param_1,param_2), iVar2 < 0)) goto LAB_00463c22;
  if (param_2[1] != 0) {
    return 0xffffffff;
  }
  if (100000000 < *param_2) {
    return 0xffffffff;
  }
  puVar1 = FUN_00463150(param_1,1);
  if (puVar1 == (uint *)0x0) goto LAB_00463c22;
  if ((char)*puVar1 == '\0') {
    uVar6 = FUN_0047f911(*param_2,0x68);
    puVar1 = param_2 + 2;
    *puVar1 = uVar6;
    if (uVar6 == 0) {
      return 0xffffffff;
    }
    uVar6 = 0;
    if ((param_2[1] != 0) || (*param_2 != 0)) {
      iVar2 = 0;
      do {
        iVar3 = FUN_00463ee0(param_1,(uint *)(param_2[2] + iVar2),unaff_EBP,unaff_EBX,
                             in_stack_ffffffec,in_stack_fffffff0,(uint)puVar1);
        if (iVar3 < 0) goto LAB_00463c22;
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + 0x68;
      } while ((param_2[1] != 0) || (uVar6 < *param_2));
    }
LAB_00463c8f:
    puStack_4 = param_2 + 2;
    puVar1 = puStack_4;
    puVar4 = FUN_00463150(param_1,1);
    if ((puVar4 != (uint *)0x0) && ((char)*puVar4 == '\f')) {
      if ((param_2[1] != 0) || (*param_2 != 0)) {
        puVar4 = (uint *)0x0;
        do {
          uVar6 = *puStack_4;
          iVar2 = FUN_0047f911(*(uint *)((int)puVar4 + uVar6 + 0x38),8);
          *(int *)((int)puVar4 + uVar6 + 0x40) = iVar2;
          if (iVar2 == 0) goto LAB_00463c22;
          uVar7 = 0;
          if ((*(int *)((int)puVar4 + uVar6 + 0x3c) != 0) ||
             (*(int *)((int)puVar4 + uVar6 + 0x38) != 0)) {
            do {
              iVar2 = FUN_004638e0(puVar5,(uint *)(*(int *)((int)puVar4 + uVar6 + 0x40) + uVar7 * 8)
                                  );
              if (iVar2 < 0) goto LAB_00463c22;
              uVar7 = uVar7 + 1;
            } while ((*(int *)((int)puVar4 + uVar6 + 0x3c) != 0) ||
                    (uVar7 < *(uint *)((int)puVar4 + uVar6 + 0x38)));
          }
          unaff_retaddr = (LPVOID)((int)unaff_retaddr + 1);
          puStack_4 = (uint *)0x0;
          puVar4 = param_1 + 0x1a;
          param_1 = puVar4;
        } while ((param_2[1] != 0) || (unaff_retaddr < (LPVOID)*param_2));
      }
      puVar4 = FUN_00463150(puVar5,1);
      if (puVar4 != (uint *)0x0) {
        if ((char)*puVar4 == '\0') {
          return 0;
        }
        if (((char)*puVar4 == '\n') &&
           (iVar2 = FUN_00463e10(puVar5,(int *)&stack0x00000000,*param_2), -1 < iVar2)) {
          uVar6 = 0;
          if ((param_2[1] != 0) || (*param_2 != 0)) {
            iVar2 = 0;
            do {
              do {
                iVar2 = iVar2 + 0x68;
                *(undefined1 *)((*puVar1 - 0x24) + iVar2) =
                     *(undefined1 *)((int)unaff_retaddr + uVar6);
                puVar5 = param_1 + uVar6;
                uVar6 = uVar6 + 1;
                *(uint *)((*puVar1 - 0x20) + iVar2) = *puVar5;
              } while (param_2[1] != 0);
              puVar5 = param_3;
            } while (uVar6 < *param_2);
          }
          puVar5 = FUN_00463150(puVar5,1);
          if ((puVar5 != (uint *)0x0) && ((char)*puVar5 == '\0')) {
            FUN_0047d191(unaff_retaddr);
            FUN_0047d191(param_1);
            return 0;
          }
        }
      }
    }
  }
  else {
    if ((char)*puVar1 == '\x01') {
      iVar2 = FUN_004638e0(param_1,param_2 + 4);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      if (param_2[5] != 0) {
        return 0xffffffff;
      }
      if (100000000 < param_2[4]) {
        return 0xffffffff;
      }
      if ((param_2[1] == 0) && (*param_2 == 0)) goto LAB_00463c8f;
    }
    FUN_00487380((int)param_1,0xffffffff,0x526a28);
  }
LAB_00463c22:
  FUN_0047d191(unaff_retaddr);
  FUN_0047d191(param_1);
  return 0xffffffff;
}


