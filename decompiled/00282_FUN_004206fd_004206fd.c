// Function: FUN_004206fd
// Entry: 004206fd
// Size: 72 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004206fd(void)

{
  LPVOID lpMem;
  
  lpMem = TlsGetValue(DAT_005434a0);
  if (lpMem != (LPVOID)0x0) {
    (**(code **)((int)lpMem + 0x5c))(lpMem);
    if (*(code **)((int)lpMem + 0x70) != (code *)0x0) {
      (**(code **)((int)lpMem + 0x70))(lpMem,1);
    }
    HeapFree(DAT_00542264,0,lpMem);
    TlsSetValue(DAT_005434a0,(LPVOID)0x0);
    _DAT_005434a4 = 0;
  }
  return;
}


