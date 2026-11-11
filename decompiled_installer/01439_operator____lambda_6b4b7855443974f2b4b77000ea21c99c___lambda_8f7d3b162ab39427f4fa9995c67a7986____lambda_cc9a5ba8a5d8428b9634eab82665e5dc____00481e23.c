// Function: operator()<<lambda_6b4b7855443974f2b4b77000ea21c99c>,<lambda_8f7d3b162ab39427f4fa9995c67a7986>&,<lambda_cc9a5ba8a5d8428b9634eab82665e5dc>_>
// Entry: 00481e23
// Size: 109 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_6b4b7855443974f2b4b77000ea21c99c>,class <lambda_8f7d3b162ab39427f4fa9995c67a7986> &,class
   <lambda_cc9a5ba8a5d8428b9634eab82665e5dc> >(class <lambda_6b4b7855443974f2b4b77000ea21c99c>
   &&,class <lambda_8f7d3b162ab39427f4fa9995c67a7986> &,class
   <lambda_cc9a5ba8a5d8428b9634eab82665e5dc> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_6b4b7855443974f2b4b77000ea21c99c>,<lambda_8f7d3b162ab39427f4fa9995c67a7986>&,<lambda_cc9a5ba8a5d8428b9634eab82665e5dc>_>
          (__crt_seh_guarded_call<int> *this,<lambda_6b4b7855443974f2b4b77000ea21c99c> *param_1,
          <lambda_8f7d3b162ab39427f4fa9995c67a7986> *param_2,
          <lambda_cc9a5ba8a5d8428b9634eab82665e5dc> *param_3)

{
  BOOL BVar1;
  void *local_14;
  
  ___acrt_lock(*(int *)param_1);
  DAT_00544664 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>
                           ((_func_int_wchar_t_ptr_ulong_long *)**(undefined4 **)param_2);
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_00481e16,1);
  DAT_00544664 = (_func_int_wchar_t_ptr_ulong_long *)DAT_0053fbc0;
  FUN_00481e93();
  ExceptionList = local_14;
  return BVar1;
}


