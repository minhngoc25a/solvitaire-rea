// Function: ___scrt_is_nonwritable_in_current_image
// Entry: 0050aa07
// Size: 126 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  uint uVar1;
  void *local_14;
  
  uVar1 = 0x5a4d;
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (uVar1 = IMAGE_DOS_HEADER_00400000.e_lfanew,
       *(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     ((uVar1 = FUN_0050abd2(0x400000,param_1 - 0x400000), uVar1 != 0 &&
      (-1 < *(int *)(uVar1 + 0x24))))) {
    ExceptionList = local_14;
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar1 & 0xffffff00;
}


