// Function: FUN_004353b0
// Entry: 004353b0
// Size: 137 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004353b0(char *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == 0) {
      return 0x22;
    }
    if (param_3 != 0) {
      if ((param_4 == 0xffffffff) || (uVar3 = param_4, param_2 <= param_4)) {
        uVar3 = param_2 - 1;
      }
      uVar1 = 0;
      if (uVar3 != 0) {
        pcVar2 = param_1;
        do {
          if (pcVar2[param_3 - (int)param_1] == '\0') break;
          *pcVar2 = pcVar2[param_3 - (int)param_1];
          uVar1 = uVar1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (uVar1 < uVar3);
      }
      if (((*(char *)(uVar1 + param_3) != '\0') && (uVar1 != param_4)) && (param_4 != 0xffffffff)) {
        *param_1 = '\0';
        return 0x22;
      }
      param_1[uVar1] = '\0';
      return 0;
    }
    *param_1 = '\0';
  }
  return 0x16;
}


