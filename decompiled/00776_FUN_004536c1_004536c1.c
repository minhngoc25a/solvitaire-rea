// Function: FUN_004536c1
// Entry: 004536c1
// Size: 27 bytes
// Thunk: false
// External: false


uint __fastcall FUN_004536c1(int *param_1)

{
  undefined4 in_EAX;
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  if (*param_1 == 0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    uVar2 = FUN_004243be();
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


