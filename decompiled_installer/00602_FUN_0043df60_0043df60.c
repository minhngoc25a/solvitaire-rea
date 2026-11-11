// Function: FUN_0043df60
// Entry: 0043df60
// Size: 62 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0043df60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(param_2 * 0x1e) / 1000;
  }
  uVar1 = FUN_00431e20(param_1,param_2,param_3);
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


