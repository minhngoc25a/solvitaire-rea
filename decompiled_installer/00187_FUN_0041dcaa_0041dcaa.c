// Function: FUN_0041dcaa
// Entry: 0041dcaa
// Size: 575 bytes
// Thunk: false
// External: false


int FUN_0041dcaa(void)

{
  DWORDLONG dwlConditionMask;
  bool bVar1;
  BOOL BVar2;
  BOOL BVar3;
  undefined3 extraout_var;
  int iVar4;
  _OSVERSIONINFOW local_46c;
  undefined4 local_350;
  DWORD local_34c;
  DWORD local_348;
  uint local_344;
  _OSVERSIONINFOW local_234;
  _OSVERSIONINFOEXW local_120;
  
  local_234.dwOSVersionInfoSize = 0x114;
  local_120.dwOSVersionInfoSize = 0x11c;
  local_120.szCSDVersion[0] = L'\0';
  iVar4 = 200;
  local_120.dwMajorVersion = 0;
  local_120.dwMinorVersion = 0;
  local_120.dwBuildNumber = 0;
  local_120.dwPlatformId = 0;
  _memset(local_120.szCSDVersion + 1,0,0xfe);
  local_120.wSuiteMask = 0;
  local_120.wProductType = '\x01';
  local_120.wReserved = '\0';
  local_120.wServicePackMajor = 0;
  local_120.wServicePackMinor = 0;
  dwlConditionMask = (DWORDLONG)VerSetConditionMask(0,0,0x80,1);
  BVar2 = VerifyVersionInfoW(&local_120,0x80,dwlConditionMask);
  BVar3 = GetVersionExW(&local_234);
  if (BVar3 != 0) {
    if (local_234.dwPlatformId == 1) {
      if (local_234.dwMinorVersion == 0) {
        iVar4 = 10;
      }
      else if (local_234.dwMinorVersion == 10) {
        iVar4 = 0x1e;
      }
      else if (local_234.dwMinorVersion == 0x5a) {
        iVar4 = 0x28;
      }
    }
    else if (local_234.dwPlatformId == 2) {
      bVar1 = FUN_0041dee9(&local_350);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        local_46c.dwOSVersionInfoSize = 0x11c;
        BVar3 = GetVersionExW(&local_46c);
        local_348 = local_234.dwMinorVersion;
        local_34c = local_234.dwMajorVersion;
        local_344 = 0;
        if (BVar3 == 0) {
          return 200;
        }
      }
      if (local_34c == 3) {
        iVar4 = 5;
      }
      else if (local_34c == 4) {
        iVar4 = 0x14;
      }
      else if (local_34c == 5) {
        if (local_348 == 0) {
          iVar4 = 0x32;
        }
        else if (local_348 == 1) {
          iVar4 = 0x3c;
        }
        else if (local_348 == 2) {
          iVar4 = (-(uint)(BVar2 != 0) & 0xfffffffb) + 0x41;
        }
      }
      else if (local_34c == 6) {
        if (local_348 == 0) {
          iVar4 = (-(uint)(BVar2 != 0) & 0xfffffffb) + 0x4b;
        }
        else if (local_348 == 1) {
          iVar4 = (-(uint)(BVar2 != 0) & 0xfffffffb) + 0x55;
        }
        else if (local_348 == 2) {
          iVar4 = (-(uint)(BVar2 != 0) & 0xfffffffb) + 0x5f;
        }
        else if (local_348 == 3) {
          iVar4 = (-(uint)(BVar2 != 0) & 0xfffffffb) + 0x69;
        }
      }
      else if ((local_34c == 10) && (local_348 == 0)) {
        if (BVar2 == 0) {
          if (local_344 - 0x3839 < 0x772) {
            iVar4 = 0x70;
          }
          else if (local_344 - 0x4550 < 0x26c) {
            iVar4 = 0x72;
          }
          else if (0x4f7b < local_344) {
            iVar4 = (-(uint)(local_344 < 0x65f4) & 0xfffffffa) + 0x7a;
          }
        }
        else {
          iVar4 = (-(uint)(local_344 < 22000) & 0xfffffff6) + 0x78;
        }
      }
    }
  }
  return iVar4;
}


