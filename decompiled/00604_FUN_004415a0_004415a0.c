// Function: FUN_004415a0
// Entry: 004415a0
// Size: 95 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004415a0(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if ((param_2 == 0) || (0xfe < param_2)) {
      return 0;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar2 = 1;
      do {
        if (uVar2 < param_2) {
          uVar1 = uVar2;
          do {
            if (param_1[uVar2 - 1] == param_1[uVar1]) {
              return 0;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < param_2);
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar3 < param_2);
    }
  }
  return 1;
}


