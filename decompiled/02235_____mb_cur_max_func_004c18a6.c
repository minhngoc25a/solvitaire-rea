// Function: ____mb_cur_max_func
// Entry: 004c18a6
// Size: 37 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ____mb_cur_max_func
   
   Library: Visual Studio 2019 Release */

int __cdecl ____mb_cur_max_func(void)

{
  __acrt_ptd *p_Var1;
  int local_8;
  
  p_Var1 = FUN_0047dbec();
  local_8 = *(int *)(p_Var1 + 0x4c);
  ___acrt_update_locale_info((int)p_Var1,&local_8);
  return *(int *)(local_8 + 4);
}


