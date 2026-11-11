// Function: common_flush_all
// Entry: 004aa991
// Size: 77 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  int *local_24;
  bool *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = 0;
  local_24 = &local_c;
  local_10 = 0;
  local_20 = &param_1;
  local_1c = &local_10;
  local_14 = 8;
  local_18 = 8;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
            (&local_5,(<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *)&local_18,
             (<lambda_ab61a845afdef5b7c387490eaf3616ee> *)&local_24,
             (<lambda_c2ffc0b7726aa6be21d5f0026187e748> *)&local_14);
  if (param_1 == false) {
    local_c = local_10;
  }
  return local_c;
}


