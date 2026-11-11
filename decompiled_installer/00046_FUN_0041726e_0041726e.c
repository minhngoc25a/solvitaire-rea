// Function: FUN_0041726e
// Entry: 0041726e
// Size: 1351 bytes
// Thunk: false
// External: false


int * FUN_0041726e(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,uint param_4,int param_5)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  LPWSTR lpCommandLine;
  HANDLE pvVar4;
  int *piVar5;
  LPCWSTR pWVar6;
  uint uVar7;
  HANDLE local_c0;
  HANDLE local_bc;
  HANDLE local_b8;
  BOOL local_b4;
  HANDLE local_b0;
  HANDLE local_ac;
  HANDLE local_a8;
  LPWSTR local_a4;
  uint local_a0;
  _SECURITY_ATTRIBUTES local_9c;
  _PROCESS_INFORMATION local_90;
  _STARTUPINFOW local_80;
  SHELLEXECUTEINFOW local_3c;
  
  local_bc = (HANDLE)0x0;
  piVar5 = (int *)0x0;
  local_ac = (HANDLE)0x0;
  local_b0 = (HANDLE)0x0;
  local_c0 = (HANDLE)0x0;
  local_a8 = (HANDLE)0x0;
  local_b8 = (HANDLE)0x0;
  local_b4 = 0;
  _memset(&local_9c,0,0xc);
  local_9c.nLength = 0xc;
  local_9c.lpSecurityDescriptor = (LPVOID)0x0;
  local_9c.bInheritHandle = 1;
  _memset(&local_80,0,0x44);
  local_80.dwFlags = 1;
  local_80.cb = 0x44;
  local_80.wShowWindow = (WORD)((param_4 & 2) == 0);
  uVar7 = (-(uint)((param_4 & 2) != 0) & 0x10) + 0x20;
  if ((((param_4 & 0x40) == 0) || (param_5 == 0)) || (*(HANDLE *)(param_5 + 0xc) == (HANDLE)0x0)) {
    if ((((byte)param_4 & 0x14) == 0x14) &&
       (BVar1 = CreatePipe(&local_bc,&local_ac,&local_9c,0), BVar1 != 0)) {
      local_80.dwFlags = local_80.dwFlags | 0x100;
      local_80.hStdInput = local_bc;
      FUN_00417232(&local_ac);
      uVar7 = 0x20;
      local_b4 = 1;
    }
  }
  else {
    local_80.dwFlags = 0x101;
    uVar7 = 0x20;
    local_b4 = 1;
    local_80.hStdInput = *(HANDLE *)(param_5 + 0xc);
  }
  local_a0 = param_4 & 4;
  if (local_a0 != 0) {
    if (((param_4 & 8) != 0) && (BVar1 = CreatePipe(&local_b0,&local_c0,&local_9c,0), BVar1 != 0)) {
      local_80.dwFlags = local_80.dwFlags | 0x100;
      local_80.hStdOutput = local_c0;
      FUN_00417232(&local_b0);
      uVar7 = uVar7 & 0xffffffef;
      local_b4 = 1;
    }
    if (((param_4 & 0x20) != 0) && (BVar1 = CreatePipe(&local_a8,&local_b8,&local_9c,0), BVar1 != 0)
       ) {
      local_80.dwFlags = local_80.dwFlags | 0x100;
      local_80.hStdError = local_b8;
      FUN_00417232(&local_a8);
      uVar7 = uVar7 & 0xffffffef;
      local_b4 = 1;
    }
  }
  if ((local_80.dwFlags & 0x100) != 0) {
    if (local_80.hStdInput == (HANDLE)0x0) {
      local_80.hStdInput = GetStdHandle(0xfffffff6);
    }
    if (local_80.hStdOutput == (HANDLE)0x0) {
      local_80.hStdOutput = GetStdHandle(0xfffffff5);
    }
    if (local_80.hStdError == (HANDLE)0x0) {
      local_80.hStdError = GetStdHandle(0xfffffff4);
    }
  }
  if (param_1 == (LPCWSTR)0x0) {
    param_1 = L"";
  }
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = L"";
  }
  uVar2 = FUN_0044be0a(param_1);
  uVar3 = FUN_0044be0a(param_2);
  lpCommandLine = HeapAlloc(DAT_00542264,0,(uVar2 + uVar3) * 2 + 8);
  local_a4 = lpCommandLine;
  if (*param_1 == L'\"') {
    FUN_0044ca75(lpCommandLine,param_1);
  }
  else {
    FUN_0044ca75(lpCommandLine,(short *)&DAT_0052eec4);
    FUN_0044ca44(lpCommandLine,param_1);
    FUN_0044ca44(lpCommandLine,(short *)&DAT_0052eec4);
  }
  if (*param_2 != L'\0') {
    FUN_0044ca44(lpCommandLine,(short *)&DAT_0052ef3c);
    FUN_0044ca44(lpCommandLine,param_2);
  }
  if (param_3 != (LPCWSTR)0x0) {
    param_3 = (LPCWSTR)((uint)param_3 & -(uint)(*param_3 != L'\0'));
  }
  BVar1 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,local_b4,uVar7,(LPVOID)0x0,param_3,&local_80,
                         &local_90);
  if (BVar1 == 0) {
    if (local_c0 != (HANDLE)0x0) {
      CloseHandle(local_c0);
    }
    if (local_b0 != (HANDLE)0x0) {
      CloseHandle(local_b0);
    }
    if (local_ac != (HANDLE)0x0) {
      CloseHandle(local_ac);
    }
    if (local_bc != (HANDLE)0x0) {
      CloseHandle(local_bc);
    }
    if (local_b8 != (HANDLE)0x0) {
      CloseHandle(local_b8);
    }
    if (local_a8 != (HANDLE)0x0) {
      CloseHandle(local_a8);
    }
    if ((param_4 & 0x78) != 0) goto LAB_00417793;
    if (param_3 == (LPCWSTR)0x0) {
      uVar7 = FUN_0044be0a(param_1);
      for (pWVar6 = param_1 + (uVar7 - 1); param_1 < pWVar6; pWVar6 = pWVar6 + -1) {
        if (*pWVar6 == L'\\') {
          FUN_0044ca75(local_a4,param_1);
          param_3 = local_a4;
          local_a4[((int)pWVar6 - (int)param_1 >> 1) + 1] = L'\0';
          break;
        }
      }
    }
    _memset(&local_3c,0,0x3c);
    local_3c.nShow = (int)local_80.wShowWindow;
    local_3c.lpVerb = (LPCWSTR)0x0;
    local_3c.lpDirectory = param_3;
    local_3c.lpParameters = param_2;
    local_3c.cbSize = 0x3c;
    local_3c.fMask = 0x540;
    local_3c.lpFile = param_1;
    BVar1 = ShellExecuteExW(&local_3c);
    if (BVar1 == 0) goto LAB_00417793;
    if ((param_4 & 1) != 0) {
      WaitForSingleObject(local_3c.hProcess,0xffffffff);
    }
    if (local_a0 == 0) {
      CloseHandle(local_3c.hProcess);
      goto LAB_00417790;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00542900);
    piVar5 = FUN_004257cc((int *)&DAT_005428e4,0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00542900);
    piVar5[1] = -1;
    *piVar5 = (int)local_3c.hProcess;
    pvVar4 = (HANDLE)0x0;
    piVar5[3] = 0;
    piVar5[2] = 0;
  }
  else {
    if (local_c0 != (HANDLE)0x0) {
      CloseHandle(local_c0);
    }
    if (local_bc != (HANDLE)0x0) {
      CloseHandle(local_bc);
    }
    if (local_b8 != (HANDLE)0x0) {
      CloseHandle(local_b8);
    }
    CloseHandle(local_90.hThread);
    if ((param_4 & 1) != 0) {
      WaitForSingleObject(local_90.hProcess,0xffffffff);
    }
    if (local_a0 == 0) {
      CloseHandle(local_90.hProcess);
LAB_00417790:
      piVar5 = (int *)0x1;
      goto LAB_00417793;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00542900);
    piVar5 = FUN_004257cc((int *)&DAT_005428e4,0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00542900);
    *piVar5 = (int)local_90.hProcess;
    piVar5[1] = local_90.dwProcessId;
    piVar5[3] = (int)local_b0;
    piVar5[2] = (int)local_ac;
    pvVar4 = local_a8;
  }
  piVar5[4] = (int)pvVar4;
  piVar5[5] = param_4;
LAB_00417793:
  HeapFree(DAT_00542264,0,local_a4);
  return piVar5;
}


