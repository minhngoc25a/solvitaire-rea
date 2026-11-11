// Function: FUN_0046a960
// Entry: 0046a960
// Size: 169 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0046a960(short *param_1,undefined4 param_2,undefined *param_3,int param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 0) {
    pwVar3 = L"null";
  }
  else {
    if (sVar1 == 1) {
      iVar2 = FUN_0046aa9d(*(ushort **)(param_1 + 4),param_2,param_3);
      return iVar2;
    }
    if (sVar1 == 2) {
      iVar2 = FUN_0046ac77((int)param_1,param_2,param_3);
      return iVar2;
    }
    if (sVar1 != 3) {
      if (sVar1 == 4) {
        iVar2 = FUN_0046ad42((int)param_1,param_2,param_3,param_4,param_5);
      }
      else {
        if (sVar1 != 5) {
          return 0;
        }
        iVar2 = FUN_0046ae03((int)param_1,param_2,param_3,param_4,param_5);
      }
      return iVar2;
    }
    if (*(int *)(param_1 + 4) == 0 && *(int *)(param_1 + 6) == 0) {
      pwVar3 = L"false";
    }
    else {
      pwVar3 = L"true";
    }
  }
  iVar2 = FUN_0046aa09(pwVar3,param_2,param_3);
  return iVar2;
}


