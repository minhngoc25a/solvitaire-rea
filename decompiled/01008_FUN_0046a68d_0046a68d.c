// Function: FUN_0046a68d
// Entry: 0046a68d
// Size: 70 bytes
// Thunk: false
// External: false


void FUN_0046a68d(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  char *_Str;
  
  _memset(param_1,0,0x34);
  *param_1 = param_3;
  sVar1 = _strlen(param_3);
  _Str = param_3 + sVar1 + 1;
  param_1[1] = _Str;
  sVar1 = _strlen(_Str);
  param_1[2] = *(undefined4 *)(_Str + sVar1 + 1);
  param_1[0xc] = _Str + sVar1 + 5;
  param_1[0xb] = param_2;
  return;
}


