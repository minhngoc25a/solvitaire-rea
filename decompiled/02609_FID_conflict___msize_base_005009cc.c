// Function: FID_conflict:__msize_base
// Entry: 005009cc
// Size: 51 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    __msize
    __msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict___msize_base(void *_Memory)

{
  __acrt_ptd *p_Var1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_005441f8,0,_Memory);
  return SVar2;
}


