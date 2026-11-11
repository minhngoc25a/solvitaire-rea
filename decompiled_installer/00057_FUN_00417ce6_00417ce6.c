// Function: FUN_00417ce6
// Entry: 00417ce6
// Size: 244 bytes
// Thunk: false
// External: false


int FUN_00417ce6(LPCWSTR param_1)

{
  bool bVar1;
  int *piVar2;
  SIZE_T dwBytes;
  int iVar3;
  byte *lpMultiByteStr;
  int unaff_EBP;
  undefined4 *puVar4;
  
  bVar1 = false;
  lpMultiByteStr = (byte *)0x0;
  piVar2 = (int *)FUN_00423ccb(DAT_00543794);
  if ((*piVar2 != 0) || (piVar2[1] != 0)) {
    if ((param_1 == (LPCWSTR)0x0) || (*param_1 == L'\0')) {
      piVar2[8] = 0;
      piVar2[9] = 0;
      bVar1 = true;
    }
    else {
      dwBytes = WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      lpMultiByteStr = HeapAlloc(DAT_00542264,0,dwBytes);
      if (lpMultiByteStr == (byte *)0x0) {
        return unaff_EBP;
      }
      WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)lpMultiByteStr,dwBytes,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      for (puVar4 = (undefined4 *)piVar2[7]; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        if ((puVar4[2] == 1) && (iVar3 = FUN_0044e814(lpMultiByteStr,(byte *)puVar4[3]), iVar3 == 0)
           ) {
          piVar2[8] = (int)puVar4;
          piVar2[9] = (int)puVar4;
          bVar1 = true;
          break;
        }
      }
    }
  }
  if (piVar2[10] != 0) {
    HeapFree(DAT_00542264,0,(LPVOID)piVar2[10]);
  }
  if (bVar1) {
    piVar2[10] = 0;
    if (lpMultiByteStr != (byte *)0x0) {
      HeapFree(DAT_00542264,0,lpMultiByteStr);
    }
  }
  else {
    piVar2[10] = (int)lpMultiByteStr;
  }
  return unaff_EBP;
}


