// Function: FUN_00485979
// Entry: 00485979
// Size: 45 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00485979(byte param_1,FILE *param_2,int *param_3)

{
  char **ppcVar1;
  uint uVar2;
  
  ppcVar1 = &param_2->_base;
  *ppcVar1 = *ppcVar1 + -1;
  if ((int)*ppcVar1 < 0) {
    uVar2 = FUN_004c9122(param_1,param_2,param_3);
    return uVar2;
  }
  *param_2->_ptr = param_1;
  param_2->_ptr = param_2->_ptr + 1;
  return (uint)param_1;
}


