// Function: _isspace
// Entry: 00484620
// Size: 132 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl _isspace(int _C)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  int *local_8;
  
  if (DAT_005441f0 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_00540690 + _C * 2) & 8;
    }
  }
  else {
    p_Var1 = FUN_0047dbec();
    local_8 = *(int **)(p_Var1 + 0x4c);
    ___acrt_update_locale_info((int)p_Var1,(int *)&local_8);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_8 + _C * 2) & 8;
    }
    if (1 < local_8[1]) {
      iVar2 = __isctype_l(_C,8,(_locale_t)0x0);
      return iVar2;
    }
  }
  return 0;
}


