// Function: FUN_00491c60
// Entry: 00491c60
// Size: 356 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00491c60(int *param_1,LPCSTR param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  WCHAR WVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  char cVar8;
  LPWSTR lpWideCharStr;
  
  piVar4 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + param_3 * 2 + 2));
  if (piVar4 != (int *)0x0) {
    lpWideCharStr = (LPWSTR)(*param_1 + param_1[1]);
    if (*(UINT *)(param_4 + 0xc) == 0) {
      uVar7 = 0;
      if (param_3 != 0) {
        do {
          cVar3 = param_2[uVar7];
          if (cVar3 == '\0') break;
          cVar8 = cVar3 >> 7;
          if (param_5 != 0) {
            cVar8 = cVar3;
            cVar3 = cVar3 >> 7;
          }
          *(char *)lpWideCharStr = cVar3;
          uVar7 = uVar7 + 1;
          *(char *)((int)lpWideCharStr + 1) = cVar8;
          lpWideCharStr = lpWideCharStr + 1;
        } while (uVar7 < param_3);
      }
      iVar5 = param_1[1] + uVar7 * 2;
      param_1[1] = iVar5;
      *(undefined1 *)(iVar5 + *param_1) = 0;
      *(undefined1 *)(*param_1 + 1 + param_1[1]) = 0;
      return 0;
    }
    iVar5 = MultiByteToWideChar(*(UINT *)(param_4 + 0xc),1,param_2,param_3,lpWideCharStr,
                                param_1[2] + -2 >> 1);
    while ((iVar5 == 0 && (DVar6 = GetLastError(), DVar6 == 0x7a))) {
      iVar5 = MultiByteToWideChar(*(UINT *)(param_4 + 0xc),1,param_2,param_3,(LPWSTR)0x0,0);
      piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar5 * 2 + 2));
      if (piVar4 == (int *)0x0) {
        return 0xffffffff;
      }
      lpWideCharStr = (LPWSTR)(*param_1 + param_1[1]);
      iVar5 = MultiByteToWideChar(*(UINT *)(param_4 + 0xc),1,param_2,param_3,lpWideCharStr,
                                  param_1[2] + -2 >> 1);
    }
    iVar1 = param_1[1] + iVar5 * 2;
    param_1[1] = iVar1;
    *(undefined1 *)(iVar1 + *param_1) = 0;
    *(undefined1 *)(*param_1 + 1 + param_1[1]) = 0;
    if (iVar5 != 0) {
      while (param_5 != 0) {
        WVar2 = *lpWideCharStr;
        *(undefined1 *)lpWideCharStr = *(undefined1 *)((int)lpWideCharStr + 1);
        *(char *)((int)lpWideCharStr + 1) = (char)WVar2;
        iVar5 = iVar5 + -1;
        lpWideCharStr = lpWideCharStr + 1;
        param_5 = iVar5;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


