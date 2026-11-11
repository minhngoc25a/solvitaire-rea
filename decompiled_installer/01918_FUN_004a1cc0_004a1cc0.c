// Function: FUN_004a1cc0
// Entry: 004a1cc0
// Size: 122 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a1cc0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_004a0c50(param_1,0,0);
  if (iVar1 == 0) {
    while (param_1[0x2b] == 0) {
      if ((param_2 != (undefined4 *)0x0) &&
         (uVar3 = (param_1[0x1c] - param_1[0x1e]) + param_1[0x20],
         iVar1 = (*(code *)*param_2)(param_2,param_1[0x2e],param_1[0x2f],uVar3 + param_1[0x1a],
                                     param_1[0x21] +
                                     (uint)CARRY4(param_1[0x1c] - param_1[0x1e],param_1[0x20]) +
                                     param_1[0x1b] + (uint)CARRY4(uVar3,param_1[0x1a])), iVar1 != 0)
         ) {
        return 10;
      }
      iVar2 = FUN_004a0c50(param_1,0,0);
      iVar1 = 0;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}


