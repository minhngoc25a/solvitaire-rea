// Function: FUN_00417232
// Entry: 00417232
// Size: 60 bytes
// Thunk: false
// External: false


void __cdecl FUN_00417232(undefined4 *param_1)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL BVar1;
  DWORD dwOptions;
  HANDLE local_8;
  
  dwOptions = 2;
  BVar1 = 0;
  dwDesiredAccess = 0;
  lpTargetHandle = &local_8;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = (HANDLE)*param_1;
  hSourceProcessHandle = GetCurrentProcess();
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,BVar1,dwOptions);
  if (BVar1 != 0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = local_8;
  }
  return;
}


