// Function: FUN_004021de
// Entry: 004021de
// Size: 376 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004021de(char *param_1,LPBYTE param_2)

{
  char *pcVar1;
  char *pcVar2;
  LSTATUS LVar3;
  HKEY hKey;
  bool bVar4;
  HKEY local_24;
  DWORD local_20 [4];
  
  pcVar1 = strstr(param_1,"HKEY_CLASSES_ROOT");
  if (pcVar1 == param_1) {
    hKey = (HKEY)0x80000000;
  }
  else {
    pcVar1 = strstr(param_1,"HKEY_CURRENT_USER");
    if (pcVar1 == param_1) {
      hKey = (HKEY)0x80000001;
    }
    else {
      pcVar1 = strstr(param_1,"HKEY_LOCAL_MACHINE");
      if (pcVar1 == param_1) {
        hKey = (HKEY)0x80000002;
      }
      else {
        pcVar1 = strstr(param_1,"HKEY_USERS");
        if (pcVar1 == param_1) {
          hKey = (HKEY)0x80000003;
        }
        else {
          pcVar1 = strstr(param_1,"HKEY_CURRENT_CONFIG");
          if (pcVar1 != param_1) {
            return false;
          }
          hKey = (HKEY)0x80000005;
        }
      }
    }
  }
  pcVar1 = strchr(param_1,0x5c);
  pcVar2 = strrchr(param_1,0x5c);
  *pcVar2 = '\0';
  if ((DAT_0041001c == 0) ||
     (LVar3 = RegOpenKeyExA(hKey,pcVar1 + 1,0,0x20119,&local_24), LVar3 != 0)) {
    bVar4 = false;
    LVar3 = RegOpenKeyExA(hKey,pcVar1 + 1,0,0x20019,&local_24);
    if (LVar3 != 0) goto LAB_00402349;
  }
  LVar3 = RegQueryValueExA(local_24,pcVar2 + 1,(LPDWORD)0x0,local_20,param_2,
                           (LPDWORD)&stack0x0000000c);
  bVar4 = LVar3 == 0;
  RegCloseKey(local_24);
LAB_00402349:
  *pcVar2 = '\\';
  return bVar4;
}


