// Function: FUN_00403cc0
// Entry: 00403cc0
// Size: 263 bytes
// Thunk: false
// External: false


BOOL __cdecl FUN_00403cc0(LPSTR param_1,HANDLE param_2)

{
  BOOL BVar1;
  int iVar2;
  LPPROCESS_INFORMATION p_Var3;
  LPSTARTUPINFOA p_Var4;
  _PROCESS_INFORMATION local_70;
  _STARTUPINFOA local_60;
  
  p_Var3 = &local_70;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->hProcess = (HANDLE)0x0;
    p_Var3 = (LPPROCESS_INFORMATION)&p_Var3->hThread;
  }
  p_Var4 = &local_60;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var4->cb = 0;
    p_Var4 = (LPSTARTUPINFOA)&p_Var4->lpReserved;
  }
  local_60.cb = 0x44;
  local_60.dwFlags = 0x100;
  local_60.hStdError = param_2;
  local_60.hStdOutput = param_2;
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fprintf(DAT_00410a2c,"Create process: %s\n",param_1);
  }
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1
                         ,0x8000000,(LPVOID)0x0,(LPCSTR)0x0,&local_60,&local_70);
  if (BVar1 == 0) {
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Cannot create process %s\n",param_1);
    }
  }
  else {
    CloseHandle(local_70.hProcess);
    CloseHandle(local_70.hThread);
  }
  CloseHandle(param_2);
  return BVar1;
}


