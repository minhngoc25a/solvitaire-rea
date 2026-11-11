// Function: FUN_00433b50
// Entry: 00433b50
// Size: 364 bytes
// Thunk: false
// External: false


void __cdecl FUN_00433b50(int param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    FUN_0044a080(param_1);
    if ((*(int *)(param_1 + 0xfc) != 0) &&
       (pvVar1 = *(LPVOID *)(param_1 + 0xf8), pvVar1 != (LPVOID)0x0)) {
      if (param_2 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
    }
  }
  if ((((*(int *)(param_1 + 0x108) != 0) && (param_1 != -600)) && (*(int *)(param_1 + 0x274) != 0))
     && (pvVar1 = *(LPVOID *)(param_1 + 0x270), pvVar1 != (LPVOID)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      FUN_0047d191(pvVar1);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(pvVar1,*param_2);
    }
  }
  if (param_1 != -0x1a0) {
    if (((param_1 != -0x21c) && (*(int *)(param_1 + 0x238) != 0)) &&
       (pvVar1 = *(LPVOID *)(param_1 + 0x234), pvVar1 != (LPVOID)0x0)) {
      if (param_2 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
    }
    if ((*(int *)(param_1 + 0x244) != 0) &&
       (pvVar1 = *(LPVOID *)(param_1 + 0x240), pvVar1 != (LPVOID)0x0)) {
      if (param_2 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
    }
  }
  if (param_1 != -0x138) {
    FUN_004281c0(param_1 + 0x170,param_2);
    if ((*(int *)(param_1 + 0x198) != 0) &&
       (pvVar1 = *(LPVOID *)(param_1 + 0x194), pvVar1 != (LPVOID)0x0)) {
      if (param_2 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
    }
  }
  if ((*(char *)(param_1 + 0x2b0) != '\0') &&
     (pvVar1 = *(LPVOID *)(param_1 + 0x2b4), pvVar1 != (LPVOID)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      FUN_0047d191(pvVar1);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(pvVar1,*param_2);
      return;
    }
  }
  return;
}


