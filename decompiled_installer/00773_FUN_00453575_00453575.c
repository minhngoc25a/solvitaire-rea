// Function: FUN_00453575
// Entry: 00453575
// Size: 206 bytes
// Thunk: false
// External: false


undefined4 FUN_00453575(LPCWSTR param_1)

{
  int *piVar1;
  SIZE_T dwBytes;
  LPCWSTR lpMultiByteStr;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPCWSTR lpWideCharStr;
  undefined4 *puVar5;
  
  uVar4 = 0;
  piVar1 = (int *)FUN_00423ccb(DAT_00543794);
  uVar3 = uVar4;
  if (((*piVar1 != 0) || (piVar1[1] != 0)) && (piVar1[10] == 0)) {
    lpWideCharStr = L"";
    if (param_1 != (LPCWSTR)0x0) {
      lpWideCharStr = param_1;
    }
    dwBytes = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    lpMultiByteStr = HeapAlloc(DAT_00542264,0,dwBytes);
    uVar3 = 0;
    if (lpMultiByteStr != (LPCWSTR)0x0) {
      WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)lpMultiByteStr,dwBytes,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      if ((undefined4 *)piVar1[8] == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)piVar1[7];
      }
      else {
        puVar5 = *(undefined4 **)piVar1[8];
      }
      while( true ) {
        uVar3 = uVar4;
        if ((puVar5 == (undefined4 *)0x0) || (puVar5[2] == 1)) goto LAB_00453627;
        if ((puVar5[2] != 2) &&
           (iVar2 = FUN_0044e814((byte *)puVar5[2],(byte *)lpMultiByteStr), iVar2 == 0)) break;
        puVar5 = (undefined4 *)*puVar5;
      }
      uVar3 = puVar5[3];
LAB_00453627:
      if (lpMultiByteStr != lpWideCharStr) {
        HeapFree(DAT_00542264,0,lpMultiByteStr);
      }
    }
  }
  return uVar3;
}


