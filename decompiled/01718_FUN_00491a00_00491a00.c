// Function: FUN_00491a00
// Entry: 00491a00
// Size: 598 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00491a00(int *param_1,LPCWSTR param_2,uint param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  DWORD DVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint cchWideChar;
  LPSTR lpMultiByteStr;
  undefined4 local_10;
  LPCWSTR local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar6 = param_3;
  cchWideChar = param_3 & 0xfffffffe;
  local_10 = 0;
  piVar3 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 1 + cchWideChar));
  if (piVar3 != (int *)0x0) {
    iVar8 = param_1[2];
    iVar2 = param_1[1];
    lpMultiByteStr = (LPSTR)(*param_1 + param_1[1]);
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar8 = 0;
      uVar6 = 0;
      if (cchWideChar != 0) {
        if (param_5 == 0) {
          uVar6 = 0;
          do {
            uVar5 = CONCAT11(*(undefined1 *)((int)param_2 + uVar6 + 1),
                             *(undefined1 *)((int)param_2 + uVar6));
            if (0xff < uVar5) {
              local_10 = 0xffffffff;
              uVar5 = 0x3f;
            }
            *lpMultiByteStr = (CHAR)uVar5;
            uVar6 = uVar6 + 2;
            lpMultiByteStr = lpMultiByteStr + 1;
          } while (uVar6 < cchWideChar);
        }
        else {
          do {
            uVar5 = CONCAT11(*(undefined1 *)((int)param_2 + uVar6),
                             *(undefined1 *)((int)param_2 + uVar6 + 1));
            if (0xff < uVar5) {
              local_10 = 0xffffffff;
              uVar5 = 0x3f;
            }
            *lpMultiByteStr = (CHAR)uVar5;
            uVar6 = uVar6 + 2;
            lpMultiByteStr = lpMultiByteStr + 1;
          } while (uVar6 < cchWideChar);
        }
        iVar8 = (cchWideChar - 1 >> 1) + 1;
      }
      iVar2 = param_1[1];
      param_1[1] = iVar2 + iVar8;
      *(undefined1 *)(iVar2 + iVar8 + *param_1) = 0;
      return local_10;
    }
    local_c = (LPCWSTR)0x0;
    local_8 = 0;
    local_4 = 0;
    if (param_5 != 0) {
      piVar3 = FUN_0048d4d0((int *)&local_c,(LPVOID)(cchWideChar + 2));
      if (piVar3 == (int *)0x0) {
        return 0xffffffff;
      }
      FUN_0044c490((uint *)local_c,(uint *)param_2,cchWideChar);
      uVar9 = 0;
      param_2 = local_c;
      if (cchWideChar != 0) {
        do {
          puVar7 = (undefined1 *)((int)local_c + uVar9);
          uVar9 = uVar9 + 2;
          uVar1 = *puVar7;
          *puVar7 = puVar7[1];
          puVar7[1] = uVar1;
        } while (uVar9 < cchWideChar);
      }
    }
    param_3 = 0;
    iVar8 = WideCharToMultiByte(*(UINT *)(param_4 + 0x10),0,param_2,(int)uVar6 >> 1,lpMultiByteStr,
                                (iVar8 - iVar2) + -1,(LPCSTR)0x0,(LPBOOL)&param_3);
    while ((iVar8 == 0 && (DVar4 = GetLastError(), DVar4 == 0x7a))) {
      iVar8 = WideCharToMultiByte(*(UINT *)(param_4 + 0x10),0,param_2,cchWideChar,(LPSTR)0x0,0,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      piVar3 = FUN_0048d4d0(param_1,(LPVOID)(iVar8 + 1));
      if (piVar3 == (int *)0x0) {
        return 0xffffffff;
      }
      param_3 = 0;
      iVar8 = WideCharToMultiByte(*(UINT *)(param_4 + 0x10),0,param_2,(int)uVar6 >> 1,
                                  (LPSTR)(*param_1 + param_1[1]),(param_1[2] - param_1[1]) + -1,
                                  (LPCSTR)0x0,(LPBOOL)&param_3);
    }
    local_8 = 0;
    local_4 = 0;
    FUN_0047d191(local_c);
    iVar2 = param_1[1];
    param_1[1] = iVar2 + iVar8;
    *(undefined1 *)(iVar2 + iVar8 + *param_1) = 0;
    if ((iVar8 != 0) && (param_3 == 0)) {
      return 0;
    }
  }
  return 0xffffffff;
}


