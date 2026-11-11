// Function: operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
// Entry: 004aa9de
// Size: 128 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2866be3712abc81a800a822484c830d8>,class <lambda_39ca0ed439415581b5b15c265174cece> &,class
   <lambda_2b24c74d71094a6cd0cb82e44167d71b> >(class <lambda_2866be3712abc81a800a822484c830d8>
   &&,class <lambda_39ca0ed439415581b5b15c265174cece> &,class
   <lambda_2b24c74d71094a6cd0cb82e44167d71b> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2866be3712abc81a800a822484c830d8> *param_1,
          <lambda_39ca0ed439415581b5b15c265174cece> *param_2,
          <lambda_2b24c74d71094a6cd0cb82e44167d71b> *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *local_14;
  
  __lock_file(*(FILE **)param_1);
  uVar1 = FUN_004aa960(**(int **)param_2,*(int **)(param_2 + 4));
  if (((char)uVar1 != '\0') &&
     ((**(char **)(param_2 + 8) != '\0' || ((*(uint *)(**(int **)param_2 + 0xc) >> 1 & 1) != 0)))) {
    iVar2 = FUN_004aa86f((FILE *)**(undefined4 **)param_2);
    if (iVar2 == -1) {
      **(undefined4 **)(param_2 + 0xc) = 0xffffffff;
    }
    else {
      **(int **)(param_2 + 4) = **(int **)(param_2 + 4) + 1;
    }
  }
  FUN_004aaa5e();
  ExceptionList = local_14;
  return;
}


