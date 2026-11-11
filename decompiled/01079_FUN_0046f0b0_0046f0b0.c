// Function: FUN_0046f0b0
// Entry: 0046f0b0
// Size: 125 bytes
// Thunk: false
// External: false


int __cdecl FUN_0046f0b0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0x40 < param_3) {
      iVar1 = FUN_004a4890(param_1,param_3);
      *(int *)(param_1 + 0x44) = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x48) = param_3;
      *(undefined4 *)(param_1 + 0x40) = param_2;
      return iVar1;
    }
    *(int *)(param_1 + 0x44) = param_1;
    iVar1 = param_1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48);
    if ((uVar2 == 0) && (uVar2 = 0x40, iVar1 != param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_0046f190(param_1);
    }
    if (uVar2 != param_3) {
      if (*(code **)(param_1 + 0x50) == (code *)0x0) {
        return 0;
      }
      (**(code **)(param_1 + 0x50))(param_1,"Application jmp_buf size changed");
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return iVar1;
}


