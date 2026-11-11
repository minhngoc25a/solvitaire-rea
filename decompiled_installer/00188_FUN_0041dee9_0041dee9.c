// Function: FUN_0041dee9
// Entry: 0041dee9
// Size: 71 bytes
// Thunk: false
// External: false


bool __cdecl FUN_0041dee9(undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  _memset(param_1,0,0x11c);
  *param_1 = 0x11c;
  hModule = GetModuleHandleW(L"ntdll.dll");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"RtlGetVersion"), pFVar1 != (FARPROC)0x0)) {
    iVar2 = (*pFVar1)(param_1);
    return (bool)('\x01' - (iVar2 != 0));
  }
  return false;
}


