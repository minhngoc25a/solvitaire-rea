// Function: ___pctype_func
// Entry: 004844bd
// Size: 36 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl ___pctype_func(void)

{
  __acrt_ptd *p_Var1;
  undefined4 *local_8;
  
  p_Var1 = FUN_0047dbec();
  local_8 = *(undefined4 **)(p_Var1 + 0x4c);
  ___acrt_update_locale_info((int)p_Var1,(int *)&local_8);
  return (ushort *)*local_8;
}


