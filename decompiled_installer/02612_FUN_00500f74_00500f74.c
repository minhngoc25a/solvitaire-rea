// Function: FUN_00500f74
// Entry: 00500f74
// Size: 157 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00500f74(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_004a311c();
      goto LAB_00500ff2;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x00500fe3:
    if (uVar1 == 0) {
LAB_00500f95:
      if (DAT_005449bc != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_005225c0,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_004a3105();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_00500f95;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x00500fe3;
  }
  uVar2 = 1;
LAB_00500ff2:
  if (DAT_005449bc != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_005225c0,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}


