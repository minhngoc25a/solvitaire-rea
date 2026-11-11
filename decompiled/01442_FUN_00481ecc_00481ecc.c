// Function: FUN_00481ecc
// Entry: 00481ecc
// Size: 45 bytes
// Thunk: false
// External: false


void __cdecl FUN_00481ecc(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_00544a94) && ((*(uint *)(param_1 + 0x350) & DAT_00540e44) == 0)) {
    iVar1 = FUN_004c0f84();
    *param_2 = iVar1;
  }
  return;
}


