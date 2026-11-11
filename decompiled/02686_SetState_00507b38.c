// Function: SetState
// Entry: 00507b38
// Size: 14 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(struct EHRegistrationNode *,struct
   _s_FuncInfo const *,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(EHRegistrationNode *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)(param_1 + 8) = param_3;
  return;
}


