// Function: FUN_0046f610
// Entry: 0046f610
// Size: 81 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f610(int param_1,char *param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x78) & 0x200000) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  iVar1 = 0;
  if (*param_2 == '#') {
    iVar1 = 1;
    do {
      if (param_2[iVar1] == ' ') break;
      if (param_2[iVar1 + 1] == ' ') {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0xf);
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))(param_1,param_2 + iVar1);
  }
  return;
}


