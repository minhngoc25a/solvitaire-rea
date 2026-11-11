// Function: ___tzset
// Entry: 0050409e
// Size: 84 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2019 Release */

void __cdecl ___tzset(void)

{
  undefined4 local_14;
  
  if (DAT_00544b44 == 0) {
    ___acrt_lock(6);
    if (DAT_00544b44 == 0) {
      FUN_005045e7();
      LOCK();
      DAT_00544b44 = DAT_00544b44 + 1;
      UNLOCK();
    }
    FUN_005040f2();
  }
  ExceptionList = local_14;
  return;
}


