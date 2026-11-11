// Function: FUN_0042fac0
// Entry: 0042fac0
// Size: 77 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042fac0(undefined4 *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40f4);
    return 0xfffffffe;
  }
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *param_1 = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar3 = FUN_00435680(DVar2);
    return uVar3;
  }
  return 0;
}


