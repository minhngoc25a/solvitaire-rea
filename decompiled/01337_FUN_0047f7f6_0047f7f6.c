// Function: FUN_0047f7f6
// Entry: 0047f7f6
// Size: 98 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0047f7f6(int *param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*param_1);
  for (piVar2 = &DAT_005441f4; piVar2 != &DAT_005441f8; piVar2 = piVar2 + 1) {
    if ((undefined **)*piVar2 != &PTR_DAT_00540690) {
      ppuVar1 = __updatetlocinfoEx_nolock(piVar2,&PTR_DAT_00540690);
      *piVar2 = (int)ppuVar1;
    }
  }
  FUN_0047f858();
  ExceptionList = local_14;
  return;
}


