// Function: FUN_0047e23a
// Entry: 0047e23a
// Size: 98 bytes
// Thunk: false
// External: false


int __cdecl FUN_0047e23a(int param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  
  p_Var2 = FUN_0047dbec();
  uVar1 = *(uint *)(p_Var2 + 0x350);
  if (param_1 == -1) {
    DAT_00540e44 = 0xffffffff;
  }
  else if (param_1 != 0) {
    if (param_1 == 1) {
      uVar3 = uVar1 | 2;
    }
    else {
      if (param_1 != 2) {
        p_Var2 = FUN_0042470e();
        *(undefined4 *)p_Var2 = 0x16;
        FUN_004243be();
        return -1;
      }
      uVar3 = uVar1 & 0xfffffffd;
    }
    *(uint *)(p_Var2 + 0x350) = uVar3;
  }
  return ((uVar1 & 2) == 0) + 1;
}


