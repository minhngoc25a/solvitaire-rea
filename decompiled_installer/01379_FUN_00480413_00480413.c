// Function: FUN_00480413
// Entry: 00480413
// Size: 196 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __fastcall FUN_00480413(undefined4 *param_1)

{
  code *pcVar1;
  void *local_14;
  
  if (DAT_0054436c != '\0') {
    ExceptionList = local_14;
    return;
  }
  LOCK();
  DAT_00544368 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_00544364 != DAT_0053fbc0) {
      pcVar1 = (code *)FUN_004804fb(DAT_00544364);
      (*(code *)PTR_guard_check_icall_00532084)(0,0,0);
      (*pcVar1)();
    }
  }
  else if (*(int *)*param_1 != 1) goto LAB_00480484;
  FUN_004c51c5();
LAB_00480484:
  if (*(int *)*param_1 == 0) {
    FUN_004c5110((undefined4 *)&DAT_005320bc,(undefined4 *)&DAT_005320cc);
  }
  FUN_004c5110((undefined4 *)&DAT_005320d0,(undefined4 *)&DAT_005320d4);
  if (*(int *)param_1[1] == 0) {
    DAT_0054436c = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  ExceptionList = local_14;
  return;
}


