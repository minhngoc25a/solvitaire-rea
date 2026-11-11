// Function: common_dupenv_s<>
// Entry: 0042490a
// Size: 89 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_dupenv_s<char>(char * * const,unsigned int * const,char const *
   const,int,char const * const,int)
    int __cdecl common_dupenv_s<wchar_t>(wchar_t * * const,unsigned int * const,wchar_t const *
   const,int,char const * const,int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined4 __cdecl common_dupenv_s<>(undefined4 *param_1,uint *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0xb);
  uVar1 = FUN_00424b0e(param_1,param_2,param_3);
  FUN_00424966();
  ExceptionList = local_14;
  return uVar1;
}


