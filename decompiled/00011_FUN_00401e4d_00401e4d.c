// Function: FUN_00401e4d
// Entry: 00401e4d
// Size: 119 bytes
// Thunk: false
// External: false


void FUN_00401e4d(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  
  hModule = GetModuleHandleA("kernel32");
  pFVar1 = GetProcAddress(hModule,"IsWow64Process");
  if (pFVar1 != (FARPROC)0x0) {
    pvVar2 = GetCurrentProcess();
    (*pFVar1)(pvVar2,&DAT_0041001c);
  }
  if (DAT_00410a2c != (FILE *)0x0) {
    puVar3 = &DAT_0040d0f1;
    if (DAT_0041001c == 0) {
      puVar3 = &DAT_0040d0f5;
    }
    fprintf(DAT_00410a2c,"WOW64:\t\t%s\n",puVar3);
  }
  return;
}


