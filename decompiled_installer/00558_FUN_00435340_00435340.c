// Function: FUN_00435340
// Entry: 00435340
// Size: 105 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00435340(char *param_1,uint param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0x16;
  }
  if (param_2 == 0) {
    return 0x22;
  }
  if (param_3 == 0) {
    *param_1 = '\0';
    return 0x16;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    pcVar1 = param_1;
    do {
      if (pcVar1[param_3 - (int)param_1] == '\0') {
        if (uVar2 < param_2) {
          param_1[uVar2] = '\0';
          return 0;
        }
        break;
      }
      *pcVar1 = pcVar1[param_3 - (int)param_1];
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar2 < param_2);
  }
  *param_1 = '\0';
  return 0x22;
}


