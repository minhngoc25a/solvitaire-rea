// Function: common_xtox_s<unsigned_long,wchar_t>
// Entry: 00479065
// Size: 114 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * const,unsigned
   int,unsigned int,bool)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,uint param_3,uint param_4,bool param_5)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (param_2 == (wchar_t *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return 0x16;
  }
  if (param_3 != 0) {
    *param_2 = L'\0';
    if (param_3 <= param_5 + 1) {
      p_Var1 = FUN_0042470e();
      iVar2 = 0x22;
      goto LAB_004790b8;
    }
    if (param_4 - 2 < 0x23) {
      iVar2 = FUN_004790d7(param_1,param_2,param_3,param_4,param_5);
      return iVar2;
    }
  }
  p_Var1 = FUN_0042470e();
  iVar2 = 0x16;
LAB_004790b8:
  *(int *)p_Var1 = iVar2;
  FUN_004243be();
  return iVar2;
}


