// Function: FUN_0048e8e0
// Entry: 0048e8e0
// Size: 505 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048e8e0(int *param_1,LPCWSTR param_2,int param_3,UINT param_4)

{
  WCHAR WVar1;
  int cchWideChar;
  UINT UVar2;
  int *piVar3;
  undefined1 *puVar4;
  LPBOOL lpUsedDefaultChar;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4;
  
  UVar2 = param_4;
  cchWideChar = param_3;
  local_4 = 0;
  if (param_4 == 0) {
    param_4 = FUN_0048e4b0();
  }
  else {
    param_4 = *(UINT *)(param_4 + 0x10);
  }
  if (param_4 == 0) {
    piVar3 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 1 + cchWideChar));
    if (piVar3 != (int *)0x0) {
      iVar7 = 0;
      puVar4 = (undefined1 *)(param_1[1] + *param_1);
      param_3 = 0;
      if (0 < cchWideChar) {
        do {
          WVar1 = *param_2;
          if (WVar1 == L'\0') break;
          param_2 = param_2 + 1;
          if ((ushort)WVar1 < 0x100) {
            *puVar4 = (char)WVar1;
          }
          else {
            *puVar4 = 0x3f;
            param_3 = 1;
          }
          iVar7 = iVar7 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar7 < cchWideChar);
      }
LAB_0048eab4:
      param_1[1] = param_1[1] + iVar7;
      *(undefined1 *)(param_1[1] + *param_1) = 0;
      if (param_3 != 0) {
        local_4 = 0xffffffff;
      }
      return local_4;
    }
  }
  else if ((UVar2 == 0) || ((*(uint *)(UVar2 + 0x18) & 0x1400) == 0)) {
    piVar3 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + cchWideChar * 2 + 1));
    while (piVar3 != (int *)0x0) {
      param_3 = 0;
      if ((param_4 == 0xfde9) || (UVar2 == 0)) {
        lpUsedDefaultChar = (LPBOOL)0x0;
      }
      else {
        lpUsedDefaultChar = &param_3;
      }
      iVar7 = WideCharToMultiByte(param_4,0,param_2,cchWideChar,(LPSTR)(*param_1 + param_1[1]),
                                  (param_1[2] - param_1[1]) + -1,(LPCSTR)0x0,lpUsedDefaultChar);
      if (iVar7 != 0) goto LAB_0048eab4;
      DVar5 = GetLastError();
      if (DVar5 != 0x7a) {
        local_4 = 0xffffffff;
        goto LAB_0048eab4;
      }
      piVar3 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + cchWideChar));
    }
  }
  else {
    piVar3 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + cchWideChar * 2 + 2));
    if (piVar3 != (int *)0x0) {
      iVar7 = 0;
      iVar6 = *param_1 + param_1[1];
      param_3 = 0;
      if (0 < cchWideChar) {
        if ((*(uint *)(UVar2 + 0x18) & 0x400) != 0) {
          do {
            WVar1 = *param_2;
            if (WVar1 == L'\0') goto LAB_0048ea1a;
            param_2 = param_2 + 1;
            *(char *)(iVar6 + iVar7 * 2) = (char)((ushort)WVar1 >> 8);
            *(char *)(iVar6 + 1 + iVar7 * 2) = (char)WVar1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < cchWideChar);
          iVar7 = iVar7 * 2;
          goto LAB_0048eab4;
        }
        do {
          WVar1 = *param_2;
          if (WVar1 == L'\0') break;
          *(char *)(iVar6 + iVar7 * 2) = (char)WVar1;
          param_2 = param_2 + 1;
          *(char *)(iVar6 + 1 + iVar7 * 2) = (char)((ushort)WVar1 >> 8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < cchWideChar);
      }
LAB_0048ea1a:
      iVar7 = iVar7 * 2;
      goto LAB_0048eab4;
    }
  }
  return 0xffffffff;
}


