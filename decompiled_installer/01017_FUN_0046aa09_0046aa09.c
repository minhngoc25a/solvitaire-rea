// Function: FUN_0046aa09
// Entry: 0046aa09
// Size: 50 bytes
// Thunk: false
// External: false


int __cdecl FUN_0046aa09(short *param_1,undefined4 param_2,undefined *param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 1;
  sVar1 = *param_1;
  while ((sVar1 != 0 && (iVar2 != 0))) {
    iVar2 = (*(code *)param_3)(param_2,sVar1);
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}


