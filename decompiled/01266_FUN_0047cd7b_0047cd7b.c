// Function: FUN_0047cd7b
// Entry: 0047cd7b
// Size: 137 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_0047cd7b(FILE *param_1,int *param_2)

{
  undefined4 uVar1;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1->_flag >> 0xc & 1) == 0) {
      __lock_file(param_1);
      uVar1 = FUN_0047cced(param_1,param_2);
      FUN_0047ce0a();
      ExceptionList = local_14;
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  ExceptionList = local_14;
  return 0xffffffff;
}


