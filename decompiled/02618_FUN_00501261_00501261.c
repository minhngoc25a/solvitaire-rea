// Function: FUN_00501261
// Entry: 00501261
// Size: 77 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00501261(uint *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar2 = fegetenv(&local_c);
  if (iVar2 == 0) {
    *param_1 = local_c;
    local_c = local_c | 0x1f;
    param_1[1] = local_8;
    bVar1 = FUN_00501215(&local_c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      __clearfp();
      return 0;
    }
  }
  return 1;
}


