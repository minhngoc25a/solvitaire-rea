// Function: FUN_00485a8f
// Entry: 00485a8f
// Size: 62 bytes
// Thunk: false
// External: false


void __cdecl FUN_00485a8f(char param_1,FILE *param_2,int *param_3)

{
  int *piVar1;
  
  if ((param_1 != '\0') && (piVar1 = &param_2->_flag, ((uint)*piVar1 >> 9 & 1) != 0)) {
    FUN_004aa8d4(param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 & 0xfffffd7f;
    UNLOCK();
    param_2->_bufsiz = 0;
    param_2->_cnt = 0;
    param_2->_ptr = (char *)0x0;
  }
  return;
}


