// Function: CatchIt<__FrameHandler3>
// Entry: 005007c0
// Size: 128 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct
   _s_CatchableType const *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode
   *,unsigned char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<__FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
          _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11,
          uchar param_12)

{
  void *pvVar1;
  
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<__FrameHandler3>(param_1,param_2,param_6,param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    param_10 = param_2;
  }
  _UnwindNestedFrames(param_10,param_1);
  FUN_004ffbc2(param_2,param_4,param_5,param_8->tryLow);
  __FrameHandler3::SetState(param_2,param_5,param_8->tryHigh + 1);
  pvVar1 = (void *)FUN_004ffdb9((int)param_1,(int)param_2,param_3,param_5,param_6->addressOfHandler,
                                param_9,0x100);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,param_2);
  }
  return;
}


