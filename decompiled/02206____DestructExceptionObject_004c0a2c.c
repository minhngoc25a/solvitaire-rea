// Function: ___DestructExceptionObject
// Entry: 004c0a2c
// Size: 142 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  void *local_14;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[4] == 3)) &&
     ((((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)) || (param_1[5] == 0x19930522)) &&
      (pbVar1 = (byte *)param_1[7], pbVar1 != (byte *)0x0)))) {
    if (*(void **)(pbVar1 + 4) == (void *)0x0) {
      if (((*pbVar1 & 0x10) != 0) && (piVar2 = *(int **)param_1[6], piVar2 != (int *)0x0)) {
        pcVar3 = *(code **)(*piVar2 + 8);
        (*(code *)PTR_guard_check_icall_00532084)(piVar2);
        (*pcVar3)();
      }
    }
    else {
      _CallMemberFunction0((void *)param_1[6],*(void **)(pbVar1 + 4));
    }
  }
  ExceptionList = local_14;
  return;
}


