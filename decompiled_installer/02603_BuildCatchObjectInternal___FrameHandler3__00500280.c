// Function: BuildCatchObjectInternal<__FrameHandler3>
// Entry: 00500280
// Size: 140 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler3>(struct EHExceptionRecord *,void
   *,struct _s_HandlerType const *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<__FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  void *pvVar2;
  void *pvVar3;
  void *local_14;
  
  pvVar3 = param_2;
  if (-1 < (int)param_3->adjectives) {
    pvVar3 = (void *)((int)param_2 + param_3->dispCatchObj + 0xc);
  }
  cVar1 = FUN_00500142((int)param_1,param_2,&param_3->adjectives,(byte *)param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    _CallMemberFunction1(pvVar3,*(void **)(param_4 + 0x18),pvVar2);
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    _CallMemberFunction2(pvVar3,*(void **)(param_4 + 0x18),pvVar2,1);
  }
  ExceptionList = local_14;
  return;
}


