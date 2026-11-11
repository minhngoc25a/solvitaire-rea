// Function: FUN_00485945
// Entry: 00485945
// Size: 52 bytes
// Thunk: false
// External: false


void __cdecl FUN_00485945(undefined2 param_1,FILE *param_2,int *param_3)

{
  char **ppcVar1;
  
  ppcVar1 = &param_2->_base;
  *ppcVar1 = *ppcVar1 + -2;
  if ((int)*ppcVar1 < 0) {
    FUN_004c912d(param_1,param_2,param_3);
    return;
  }
  *(undefined2 *)param_2->_ptr = param_1;
  param_2->_ptr = param_2->_ptr + 2;
  return;
}


