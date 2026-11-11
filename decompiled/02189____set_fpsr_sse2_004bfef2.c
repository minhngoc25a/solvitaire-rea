// Function: ___set_fpsr_sse2
// Entry: 004bfef2
// Size: 80 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2019 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  undefined4 local_14;
  
  if (0 < DAT_00544988) {
    if (((param_1 & 0x40) == 0) || (DAT_00540e40 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  ExceptionList = local_14;
  return;
}


