// Function: FUN_004359b0
// Entry: 004359b0
// Size: 83 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004359b0(LONG param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4154);
    return 0xfffffffe;
  }
  pvVar1 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_1,0x7fffffff,(LPCWSTR)0x0);
  *param_2 = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar3 = FUN_00435680(DVar2);
    return uVar3;
  }
  return 0;
}


