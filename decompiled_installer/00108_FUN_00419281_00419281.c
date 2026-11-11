// Function: FUN_00419281
// Entry: 00419281
// Size: 45 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00419281(undefined4 *param_1)

{
  undefined4 *nNumberOfBytesToWrite;
  undefined4 *puVar1;
  
  puVar1 = param_1;
  nNumberOfBytesToWrite = (undefined4 *)param_1[2];
  WriteFile((HANDLE)*param_1,(LPCVOID)param_1[1],(DWORD)nNumberOfBytesToWrite,(LPDWORD)&param_1,
            (LPOVERLAPPED)0x0);
  puVar1[2] = 0;
  return param_1 == nNumberOfBytesToWrite;
}


