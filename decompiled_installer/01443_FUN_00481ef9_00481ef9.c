// Function: FUN_00481ef9
// Entry: 00481ef9
// Size: 49 bytes
// Thunk: false
// External: false


void __cdecl FUN_00481ef9(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_005441f4)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_00540e44) == 0))
  {
    iVar1 = FUN_004c0eb3();
    *param_2 = iVar1;
  }
  return;
}


