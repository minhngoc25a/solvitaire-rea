// Function: FUN_0046f6d0
// Entry: 0046f6d0
// Size: 176 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f6d0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x74) & 0x8000) == 0) {
    if (param_3 < 1) {
      if ((*(uint *)(param_1 + 0x78) & 0x200000) == 0) goto LAB_0046f77a;
      iVar1 = 0;
      if (*param_2 == '#') {
        iVar1 = 1;
        do {
          if (param_2[iVar1] == ' ') break;
          if (param_2[iVar1 + 1] == ' ') goto LAB_0046f767;
          iVar1 = iVar1 + 2;
        } while (iVar1 < 0xf);
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x78) & 0x400000) == 0) goto LAB_0046f77a;
      iVar1 = 0;
      if (*param_2 == '#') {
        iVar1 = 1;
        do {
          if (param_2[iVar1] == ' ') break;
          if (param_2[iVar1 + 1] == ' ') goto LAB_0046f767;
          iVar1 = iVar1 + 2;
        } while (iVar1 < 0xf);
      }
    }
LAB_0046f768:
    if (*(code **)(param_1 + 0x50) == (code *)0x0) {
      return;
    }
    (**(code **)(param_1 + 0x50))(param_1,param_2 + iVar1);
    return;
  }
  if ((param_3 < 2) || ((*(uint *)(param_1 + 0x78) & 0x100000) != 0)) {
    FUN_0046f210(param_1,(int)param_2);
    return;
  }
LAB_0046f77a:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
LAB_0046f767:
  iVar1 = iVar1 + 1;
  goto LAB_0046f768;
}


