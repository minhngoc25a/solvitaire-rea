// Function: FUN_004523a5
// Entry: 004523a5
// Size: 92 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_004523a5(undefined4 *param_1)

{
  ulonglong uVar1;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined1 auStack_64 [32];
  undefined4 uStack_44;
  int local_30 [11];
  
  uStack_44 = 0x4523bb;
  FUN_004245c7(local_30,param_1);
  uStack_44 = in_stack_00000028;
  FUN_004522a4(auStack_64,(undefined4 *)&stack0x00000008);
  uVar1 = FUN_00452855(local_30);
  FUN_0042460f(local_30);
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return uVar1;
}


