// Function: FUN_00474cad
// Entry: 00474cad
// Size: 115 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_00474cad(FILE *param_1,int *param_2)

{
  uint uVar1;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    __lock_file(param_1);
    uVar1 = FUN_00474c7b(param_1,param_2);
    FUN_00474d23();
  }
  ExceptionList = local_14;
  return uVar1;
}


