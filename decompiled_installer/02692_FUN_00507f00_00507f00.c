// Function: FUN_00507f00
// Entry: 00507f00
// Size: 39 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00507f00(uint *param_1)

{
  tm *ptVar1;
  int iVar2;
  uint uVar3;
  
  ptVar1 = (tm *)FUN_004f07d2();
  uVar3 = 0;
  if (ptVar1 != (tm *)0x0) {
    iVar2 = FUN_00507f32(ptVar1,param_1);
    uVar3 = ~-(uint)(iVar2 != 0) & (uint)ptVar1;
  }
  return uVar3;
}


