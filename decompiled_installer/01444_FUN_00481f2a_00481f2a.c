// Function: FUN_00481f2a
// Entry: 00481f2a
// Size: 49 bytes
// Thunk: false
// External: false


void __cdecl FUN_00481f2a(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_00544a94)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_00540e44) == 0))
  {
    iVar1 = FUN_004c0f84();
    *param_2 = iVar1;
  }
  return;
}


