// Function: FUN_0047cced
// Entry: 0047cced
// Size: 142 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0047cced(FILE *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((uint)param_1->_flag >> 0xd & 1) != 0) {
      uVar1 = FUN_004aa8d4(param_1,param_2);
      ___acrt_stdio_free_buffer_nolock(&param_1->_ptr);
      uVar2 = __fileno(param_1);
      iVar3 = FUN_0049d32f(uVar2,param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_004247be(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}


