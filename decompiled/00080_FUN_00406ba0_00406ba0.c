// Function: FUN_00406ba0
// Entry: 00406ba0
// Size: 83 bytes
// Thunk: false
// External: false


void __fastcall FUN_00406ba0(undefined4 param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  
  if (((param_2[1] & 0x2000U) != 0) || (iVar1 = param_2[6], iVar1 < param_2[7])) {
    if ((param_2[1] & 0x1000U) != 0) {
      fputc(in_EAX,(FILE *)*param_2);
      param_2[6] = param_2[6] + 1;
      return;
    }
    *(char *)(*param_2 + param_2[6]) = (char)in_EAX;
    iVar1 = param_2[6];
  }
  param_2[6] = iVar1 + 1;
  return;
}


