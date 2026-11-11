// Function: ___acrt_EnumSystemLocalesEx@16
// Entry: 00481524
// Size: 84 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_EnumSystemLocalesEx@16
   
   Library: Visual Studio 2019 Release */

void ___acrt_EnumSystemLocalesEx_16
               (_func_int_wchar_t_ptr_ulong_long *param_1,ulong param_2,long param_3,void *param_4)

{
  _func_int__func_int_wchar_t_ptr_ulong_long_ptr_ulong_long_void_ptr *p_Var1;
  _func_int_wchar_t_ptr_ulong_long *p_Var2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined4 local_14;
  _func_int_wchar_t_ptr_ulong_long **local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<int> local_5;
  
  p_Var1 = try_get_EnumSystemLocalesEx();
  if (p_Var1 == (_func_int__func_int_wchar_t_ptr_ulong_long_ptr_ulong_long_void_ptr *)0x0) {
    local_10 = &param_1;
    local_c = 4;
    local_14 = 4;
    __crt_seh_guarded_call<int>::
    operator()<<lambda_6b4b7855443974f2b4b77000ea21c99c>,<lambda_8f7d3b162ab39427f4fa9995c67a7986>&,<lambda_cc9a5ba8a5d8428b9634eab82665e5dc>_>
              (&local_5,(<lambda_6b4b7855443974f2b4b77000ea21c99c> *)&local_14,
               (<lambda_8f7d3b162ab39427f4fa9995c67a7986> *)&local_10,
               (<lambda_cc9a5ba8a5d8428b9634eab82665e5dc> *)&local_c);
  }
  else {
    p_Var2 = param_1;
    uVar3 = param_2;
    lVar4 = param_3;
    pvVar5 = param_4;
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(p_Var2,uVar3,lVar4,pvVar5);
  }
  return;
}


