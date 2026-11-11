// Function: FUN_00503da0
// Entry: 00503da0
// Size: 127 bytes
// Thunk: false
// External: false


void __cdecl FUN_00503da0(uint param_1)

{
  __acrt_ptd *p_Var1;
  WCHAR local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_10 = (short)param_1 + L'@';
      local_e = 0x3a;
      local_c = 0x5c;
      local_a = 0;
      GetDriveTypeW(&local_10);
    }
  }
  else {
    p_Var1 = FUN_00424721();
    *(undefined4 *)p_Var1 = 0xf;
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0xd;
    FUN_004243be();
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


