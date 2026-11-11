// Function: FUN_00405080
// Entry: 00405080
// Size: 98 bytes
// Thunk: false
// External: false


void FUN_00405080(void)

{
  DWORD *pDVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
  for (pDVar1 = DAT_0041004c; pDVar1 != (DWORD *)0x0; pDVar1 = (DWORD *)pDVar1[2]) {
    pvVar2 = TlsGetValue(*pDVar1);
    DVar3 = GetLastError();
    if ((DVar3 == 0) && (pvVar2 != (LPVOID)0x0)) {
      (*(code *)pDVar1[1])(pvVar2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
  return;
}


