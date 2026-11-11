// Function: FUN_004ffbc2
// Entry: 004ffbc2
// Size: 195 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __cdecl
FUN_004ffbc2(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  
  iVar1 = __FrameHandler3::GetCurrentState(param_1,param_2,param_3);
  iVar2 = ___vcrt_getptd();
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
  while (iVar2 = iVar1, iVar2 != param_4) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) goto LAB_004ffca4;
    iVar1 = param_3->pUnwindMap[iVar2].toState;
    if (param_3->pUnwindMap[iVar2].action != (action *)0x0) {
      __FrameHandler3::SetState(param_1,param_3,iVar1);
      __CallSettingFrame_12(param_3->pUnwindMap[iVar2].action,param_1,0x103);
    }
  }
  FUN_004ffc90();
  if (iVar2 == param_4) {
    __FrameHandler3::SetState(param_1,param_3,iVar2);
    ExceptionList = local_14;
    return;
  }
LAB_004ffca4:
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


