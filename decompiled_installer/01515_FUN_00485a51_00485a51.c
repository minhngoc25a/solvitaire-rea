// Function: FUN_00485a51
// Entry: 00485a51
// Size: 62 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00485a51(FILE *param_1)

{
  byte bVar1;
  FILE *pFVar2;
  uint uVar3;
  undefined3 extraout_var;
  
  pFVar2 = (FILE *)FUN_00484a7e(2);
  if (param_1 == pFVar2) {
    return CONCAT31((int3)((uint)pFVar2 >> 8),1);
  }
  pFVar2 = (FILE *)FUN_00484a7e(1);
  if (param_1 == pFVar2) {
    uVar3 = __fileno(param_1);
    bVar1 = FUN_004c9553(uVar3);
    return CONCAT31(extraout_var,CONCAT31(extraout_var,bVar1) != 0);
  }
  return (uint)pFVar2 & 0xffffff00;
}


