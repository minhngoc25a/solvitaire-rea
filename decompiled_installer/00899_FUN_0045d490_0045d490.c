// Function: FUN_0045d490
// Entry: 0045d490
// Size: 105 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0045d490(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  if ((((cVar1 != -0x80) && (cVar1 != -1)) && (cVar1 != '\0')) && (uVar2 = 0, param_2 != 0)) {
    do {
      if (param_1[uVar2] != ' ') {
        if (param_2 <= uVar2) {
          return 1;
        }
        do {
          if (7 < (byte)(param_1[uVar2] - 0x30U)) {
            while ((param_1[uVar2] == ' ' || (param_1[uVar2] == '\0'))) {
              uVar2 = uVar2 + 1;
              if (param_2 <= uVar2) {
                return 1;
              }
            }
            return 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_2);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}


