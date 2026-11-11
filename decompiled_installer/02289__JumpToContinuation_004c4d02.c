// Function: _JumpToContinuation
// Entry: 004c4d02
// Size: 43 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004c4d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


