// Function: FUN_004846ea
// Entry: 004846ea
// Size: 76 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_004846ea(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  byte *extraout_ECX;
  ulonglong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int local_30 [11];
  
  FUN_004245c7(local_30,(undefined4 *)0x0);
  bVar4 = 0;
  pbVar2 = extraout_ECX;
  pbVar3 = extraout_ECX;
  make_c_string_character_source<>((undefined4 *)&stack0xffffffb8,param_1,param_2);
  uVar1 = FUN_0045394c(local_30,pbVar2,(int *)pbVar3,param_3,bVar4);
  FUN_0042460f(local_30);
  return uVar1;
}


