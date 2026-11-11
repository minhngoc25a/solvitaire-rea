// Function: FUN_004c42a4
// Entry: 004c42a4
// Size: 108 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004c42a4(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
            uint param_7,undefined4 *param_8)

{
  bool bVar1;
  uint dwFlags;
  UINT CodePage;
  
  if ((param_1 == 65000) || (param_1 == 0xfde9)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  dwFlags = FUN_004c4310(param_1,param_2);
  if ((bVar1) && (param_8 != (undefined4 *)0x0)) {
    *param_8 = 0;
  }
  WideCharToMultiByte(CodePage,dwFlags,param_3,param_4,param_5,param_6,
                      (LPCSTR)(~-(uint)bVar1 & param_7),(LPBOOL)(~-(uint)bVar1 & (uint)param_8));
  return;
}


