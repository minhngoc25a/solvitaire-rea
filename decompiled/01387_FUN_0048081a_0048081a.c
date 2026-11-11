// Function: FUN_0048081a
// Entry: 0048081a
// Size: 132 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048081a(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID local_c;
  LPVOID local_8;
  
  local_8 = (LPVOID)0x0;
  iVar1 = FUN_0048089e(param_1,&local_8);
  if (iVar1 == 0) {
    local_c = (LPVOID)0x0;
    iVar1 = FUN_00480978(param_2,&local_c);
    if (iVar1 == 0) {
      *param_3 = local_8;
      *param_4 = local_c;
      FUN_004247be((LPVOID)0x0);
      FUN_004247be((LPVOID)0x0);
      uVar2 = 0;
    }
    else {
      FUN_004247be(local_c);
      FUN_004247be(local_8);
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_004247be(local_8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


