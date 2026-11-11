// Function: FUN_0040ba30
// Entry: 0040ba30
// Size: 217 bytes
// Thunk: false
// External: false


void FUN_0040ba30(void)

{
  char cVar1;
  LPSTR pCVar2;
  HMODULE pHVar3;
  uint uVar4;
  _STARTUPINFOA local_64;
  undefined1 *local_14;
  
  local_14 = &stack0x00000004;
  FUN_00405060();
  pCVar2 = GetCommandLineA();
  GetStartupInfoA(&local_64);
  if (pCVar2 != (LPSTR)0x0) {
    for (; (cVar1 = *pCVar2, cVar1 == '\t' || (cVar1 == ' ')); pCVar2 = pCVar2 + 1) {
    }
    if (cVar1 == '\"') {
      do {
        pCVar2 = pCVar2 + 1;
        cVar1 = *pCVar2;
        if (cVar1 == '\0') break;
      } while (cVar1 != '\"');
      pCVar2 = pCVar2 + (cVar1 == '\"');
    }
    else {
      for (; (cVar1 = *pCVar2, cVar1 != '\t' && (cVar1 != ' ')); pCVar2 = pCVar2 + 1) {
        if (cVar1 == '\0') goto LAB_0040baa5;
      }
    }
    if ((*pCVar2 == ' ') || (*pCVar2 == '\t')) {
      do {
        do {
          pCVar2 = pCVar2 + 1;
        } while (*pCVar2 == '\t');
      } while (*pCVar2 == ' ');
    }
  }
LAB_0040baa5:
  uVar4 = 10;
  if (((byte)local_64.dwFlags & 1) != 0) {
    uVar4 = (uint)local_64.wShowWindow;
  }
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  FUN_00401803(pHVar3,0,pCVar2,uVar4);
  return;
}


