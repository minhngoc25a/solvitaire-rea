// Function: FUN_00501215
// Entry: 00501215
// Size: 76 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00501215(uint *param_1)

{
  int iVar1;
  bool bVar2;
  uint local_c;
  uint local_8;
  
  FUN_004c756b(*param_1);
  FUN_004c73ef(param_1[1]);
  local_c = 0;
  local_8 = 0;
  iVar1 = fegetenv(&local_c);
  if ((iVar1 == 0) && (*param_1 == local_c)) {
    bVar2 = param_1[1] != local_8;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


