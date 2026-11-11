// Function: FUN_004b79df
// Entry: 004b79df
// Size: 127 bytes
// Thunk: false
// External: false


void FUN_004b79df(int *param_1,undefined *param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  hModule = LoadLibraryW(L"Kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"InitOnceExecuteOnce");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1,&LAB_004b7a5e,param_2,local_4);
    }
    FreeLibrary(hModule);
    if (pFVar1 != (FARPROC)0x0) {
      return;
    }
  }
  LOCK();
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 1;
    iVar2 = 0;
  }
  UNLOCK();
  if (iVar2 == 0) {
    (*(code *)param_2)();
    LOCK();
    *param_1 = 2;
    UNLOCK();
  }
  else if (iVar2 == 1) {
    while (*param_1 != 2) {
      Sleep(0);
    }
  }
  return;
}


