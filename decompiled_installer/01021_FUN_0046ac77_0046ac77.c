// Function: FUN_0046ac77
// Entry: 0046ac77
// Size: 203 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046ac77(int param_1,undefined4 param_2,undefined *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  wchar_t *pwVar2;
  wchar_t local_404 [512];
  
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_0047d206(local_404,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    pwVar2 = local_404;
  }
  else {
    bVar1 = FUN_0047d27a((int)*(undefined8 *)(param_1 + 8),
                         (uint)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20));
    if ((CONCAT31(extraout_var,bVar1) == 0) &&
       ((bVar1 = FUN_0047d260((int)*(undefined8 *)(param_1 + 8),
                              (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20)),
        CONCAT31(extraout_var_00,bVar1) != 0 ||
        (bVar1 = FUN_0047d27a((int)*(undefined8 *)(param_1 + 8),
                              (uint)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20)),
        CONCAT31(extraout_var_01,bVar1) != 0)))) {
      if (*(double *)(param_1 + 8) == 0.0) {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      FUN_0041e2d9(local_404,L"%.16g");
      FUN_0046aa09(local_404,param_2,param_3);
      return;
    }
    pwVar2 = L"null";
  }
  FUN_0046aa09(pwVar2,param_2,param_3);
  return;
}


