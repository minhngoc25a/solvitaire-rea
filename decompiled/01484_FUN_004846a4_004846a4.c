// Function: FUN_004846a4
// Entry: 004846a4
// Size: 70 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004846a4(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  wchar_t *extraout_ECX;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  byte bVar4;
  int local_30 [11];
  
  FUN_004245c7(local_30,(undefined4 *)0x0);
  bVar4 = 1;
  pwVar2 = extraout_ECX;
  pwVar3 = extraout_ECX;
  make_c_string_character_source<>((undefined4 *)&stack0xffffffbc,param_1,param_2);
  uVar1 = FUN_00453c42(local_30,pwVar2,(undefined4 *)pwVar3,param_3,bVar4);
  FUN_0042460f(local_30);
  return uVar1;
}


