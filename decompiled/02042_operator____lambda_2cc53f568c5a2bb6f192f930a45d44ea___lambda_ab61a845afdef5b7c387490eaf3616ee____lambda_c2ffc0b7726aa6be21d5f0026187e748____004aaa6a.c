// Function: operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
// Entry: 004aaa6a
// Size: 160 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2cc53f568c5a2bb6f192f930a45d44ea>,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> >(class <lambda_2cc53f568c5a2bb6f192f930a45d44ea>
   &&,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *param_1,
          <lambda_ab61a845afdef5b7c387490eaf3616ee> *param_2,
          <lambda_c2ffc0b7726aa6be21d5f0026187e748> *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  __crt_seh_guarded_call<void> local_1d [9];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_005349f0;
  uStack_c = 0x4aaa76;
  ___acrt_lock(*(int *)param_1);
  local_8 = (undefined *)0x0;
  piVar1 = DAT_0054499c + DAT_00544998;
  for (piVar3 = DAT_0054499c; local_30 = piVar3, piVar3 != piVar1; piVar3 = piVar3 + 1) {
    local_24 = *piVar3;
    uVar2 = FUN_004aa960(local_24,*(int **)param_2);
    if ((char)uVar2 != '\0') {
      local_34 = *(undefined4 *)(param_2 + 8);
      local_38 = *(undefined4 *)(param_2 + 4);
      local_3c = *(undefined4 *)param_2;
      local_40 = &local_24;
      local_28 = local_24;
      local_2c = local_24;
      operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
                (local_1d,(<lambda_2866be3712abc81a800a822484c830d8> *)&local_2c,
                 (<lambda_39ca0ed439415581b5b15c265174cece> *)&local_40,
                 (<lambda_2b24c74d71094a6cd0cb82e44167d71b> *)&local_28);
    }
  }
  local_8 = (undefined *)0xfffffffe;
  FUN_004aab0a();
  ExceptionList = local_14;
  return;
}


