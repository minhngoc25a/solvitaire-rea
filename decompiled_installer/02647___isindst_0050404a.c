// Function: __isindst
// Entry: 0050404a
// Size: 72 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 2019 Release */

int __cdecl __isindst(tm *_Time)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_14;
  
  ___acrt_lock(6);
  bVar1 = FUN_005047a0(&_Time->tm_sec);
  FUN_00504095();
  ExceptionList = local_14;
  return CONCAT31(extraout_var,bVar1);
}


