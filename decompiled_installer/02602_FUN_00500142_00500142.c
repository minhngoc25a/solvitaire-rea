// Function: FUN_00500142
// Entry: 00500142
// Size: 308 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

char __cdecl FUN_00500142(int param_1,uint *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  void *local_14;
  
  pcVar2 = DAT_00544a88;
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && (-1 < (int)*param_3)))) {
    ExceptionList = local_14;
    return '\0';
  }
  uVar3 = *param_3;
  if (-1 < (int)uVar3) {
    param_2 = (uint *)((int)param_2 + param_3[2] + 0xc);
  }
  if ((((char)uVar3 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_00544a88 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00532084)();
    uVar3 = (*pcVar2)();
  }
  else {
    if ((uVar3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_4 + 0x18) == 0) {
          if ((iVar1 != 0) && (param_2 != (uint *)0x0)) {
            uVar3 = *(uint *)(param_4 + 0x14);
            puVar4 = (uint *)___AdjustPointer(iVar1,(int *)(param_4 + 8));
            FUN_0044c490(param_2,puVar4,uVar3);
            ExceptionList = local_14;
            return '\0';
          }
        }
        else if ((iVar1 != 0) && (param_2 != (uint *)0x0)) {
          ExceptionList = local_14;
          return ((*param_4 & 4) != 0) + '\x01';
        }
        goto LAB_0050027a;
      }
      if ((*(int *)(param_1 + 0x18) == 0) || (param_2 == (uint *)0x0)) goto LAB_0050027a;
      FUN_0044c490(param_2,*(uint **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
      if (*(int *)(param_4 + 0x14) != 4) {
        ExceptionList = local_14;
        return '\0';
      }
      if (*param_2 == 0) {
        ExceptionList = local_14;
        return '\0';
      }
      uVar3 = *param_2;
      goto LAB_00500209;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar3 == 0) || (param_2 == (uint *)0x0)) {
LAB_0050027a:
                    /* WARNING: Subroutine does not return */
    FUN_0047d96c();
  }
  *param_2 = uVar3;
LAB_00500209:
  uVar3 = ___AdjustPointer(uVar3,(int *)(param_4 + 8));
  *param_2 = uVar3;
  ExceptionList = local_14;
  return '\0';
}


