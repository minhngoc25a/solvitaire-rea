// Function: FUN_0047d4f9
// Entry: 0047d4f9
// Size: 248 bytes
// Thunk: false
// External: false


void FUN_0047d4f9(undefined4 param_1,undefined4 param_2)

{
  undefined4 *Context;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  undefined4 *puVar1;
  LPHANDLE lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL bInheritHandle;
  DWORD dwOptions;
  
  if (DAT_005441c4 == 0) {
    DAT_005441e4 = TlsAlloc();
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005441cc);
    DAT_005441c4 = 1;
  }
  Context = TlsGetValue(DAT_005441e4);
  if (Context == (undefined4 *)0x0) {
    Context = HeapAlloc(DAT_00542264,8,0x14);
    if (Context == (LPVOID)0x0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005441cc);
    if (DAT_005441c8 != (undefined4 *)0x0) {
      *DAT_005441c8 = Context;
    }
    Context[1] = DAT_005441c8;
    DAT_005441c8 = Context;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005441cc);
    dwOptions = 0;
    bInheritHandle = 0;
    dwDesiredAccess = 0x100000;
    lpTargetHandle = (LPHANDLE)(Context + 4);
    hTargetProcessHandle = GetCurrentProcess();
    hSourceHandle = GetCurrentThread();
    hSourceProcessHandle = GetCurrentProcess();
    DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                    dwDesiredAccess,bInheritHandle,dwOptions);
    RegisterWaitForSingleObject
              ((PHANDLE)(Context + 3),(HANDLE)Context[4],(WAITORTIMERCALLBACK)&LAB_0047d66f,Context,
               0xffffffff,8);
    TlsSetValue(DAT_005441e4,Context);
  }
  puVar1 = HeapAlloc(DAT_00542264,0,0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    *puVar1 = Context[2];
    Context[2] = puVar1;
  }
  return;
}


