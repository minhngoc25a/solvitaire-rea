// Function: FUN_004848ed
// Entry: 004848ed
// Size: 362 bytes
// Thunk: false
// External: false


int __cdecl FUN_004848ed(int *param_1,byte *param_2,uint param_3,WCHAR param_4,int *param_5)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  piVar1 = param_5;
  if ((param_2 == (byte *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  if (param_3 < 0x80000000) {
    if ((char)param_5[5] == '\0') {
      FUN_0044ef90(param_5);
    }
    local_c = *(uint *)(piVar1[3] + 8);
    if (local_c == 0xfde9) {
      local_10 = 0;
      local_c = 0;
      iVar3 = FUN_004c718e(param_2,(uint)(ushort)param_4,&local_10,(int)piVar1);
      if (param_1 != (int *)0x0) {
        *param_1 = iVar3;
      }
      if (iVar3 < 5) {
        return 0;
      }
      if ((char)piVar1[7] != '\0') {
        return piVar1[6];
      }
      return 0;
    }
    if (*(int *)(piVar1[3] + 0xa8) == 0) {
      local_8 = 0xff;
      if (0xff < (ushort)param_4) {
        if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
          _memset(param_2,0,param_3);
        }
        goto LAB_004849c0;
      }
      if (param_2 == (byte *)0x0) {
LAB_004849d9:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (byte)param_4;
        goto LAB_004849d9;
      }
    }
    else {
      local_8 = 0;
      iVar3 = FUN_004c42a4(local_c,0,&param_4,1,(LPSTR)param_2,param_3,0,&local_8);
      if (iVar3 != 0) {
        if (local_8 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar3;
          return 0;
        }
LAB_004849c0:
        piVar1[6] = 0x2a;
        *(undefined1 *)(piVar1 + 7) = 1;
        return 0x2a;
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x7a) goto LAB_004849c0;
      if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
        _memset(param_2,0,param_3);
      }
    }
    iVar3 = 0x22;
  }
  else {
    iVar3 = 0x16;
  }
  piVar1[6] = iVar3;
  *(undefined1 *)(piVar1 + 7) = 1;
  FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,piVar1);
  return iVar3;
}


