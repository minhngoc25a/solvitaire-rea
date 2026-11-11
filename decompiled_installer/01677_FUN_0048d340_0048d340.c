// Function: FUN_0048d340
// Entry: 0048d340
// Size: 299 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048d340(int *param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
    if ((param_4 == 0) || ((*(uint *)(param_4 + 0x18) & 0x2800) == 0)) {
      uVar4 = 0;
      do {
        if (*(char *)(uVar4 + (int)param_2) == '\0') break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
    }
    else {
      uVar4 = 0;
      puVar1 = param_2;
      if (param_3 >> 1 != 0) {
        do {
          if (((char)*puVar1 == '\0') && (*(char *)((int)puVar1 + 1) == '\0')) break;
          uVar4 = uVar4 + 1;
          puVar1 = (uint *)((int)puVar1 + 2);
        } while (uVar4 < param_3 >> 1);
      }
      uVar4 = uVar4 * 2;
    }
    if (uVar4 != 0) {
      if (param_4 == 0) {
        piVar2 = FUN_00491440(param_1,param_2,uVar4);
        return (piVar2 != (int *)0x0) - 1;
      }
      iVar5 = 0;
      if (1 < *(int *)(param_4 + 0x30)) {
        *(undefined4 *)(param_4 + 0x20) = 0;
        iVar5 = (**(code **)(param_4 + 0x28))((undefined4 *)(param_4 + 0x1c),param_2,uVar4,param_4);
        if (iVar5 != 0) {
          p_Var3 = FUN_0042470e();
          if (*(int *)p_Var3 == 0xc) {
            return iVar5;
          }
          if (iVar5 < 0) {
            iVar6 = iVar5;
          }
        }
        param_2 = *(uint **)(param_4 + 0x1c);
        iVar5 = 1;
        uVar4 = *(uint *)(param_4 + 0x20);
      }
      iVar5 = (**(code **)(param_4 + 0x28 + iVar5 * 4))(param_1,param_2,uVar4,param_4);
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      return iVar6;
    }
  }
  iVar6 = 1;
  if ((param_4 != 0) && ((*(uint *)(param_4 + 0x18) & 0x1400) != 0)) {
    iVar6 = 2;
  }
  piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + iVar6));
  if (piVar2 != (int *)0x0) {
    *(undefined1 *)(param_1[1] + *param_1) = 0;
    if (iVar6 == 2) {
      *(undefined1 *)(param_1[1] + 1 + *param_1) = 0;
    }
    return 0;
  }
  return -1;
}


