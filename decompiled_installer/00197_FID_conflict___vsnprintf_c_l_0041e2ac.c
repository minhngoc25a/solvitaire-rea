// Function: FID_conflict:__vsnprintf_c_l
// Entry: 0041e2ac
// Size: 45 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c_l
    __vsprintf_p_l
    __vsprintf_s_l
    __vswprintf_c_l
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
FID_conflict___vsnprintf_c_l
          (wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00417ffc();
  iVar2 = FUN_004543ca(*puVar1,puVar1[1],(undefined2 ****)_DstBuf,_MaxCount,(int)_Format,
                       &_Locale->locinfo,_ArgList);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


