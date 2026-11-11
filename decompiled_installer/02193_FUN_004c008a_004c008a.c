// Function: FUN_004c008a
// Entry: 004c008a
// Size: 450 bytes
// Thunk: false
// External: false


byte * __cdecl FUN_004c008a(LPWSTR param_1,byte *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  DWORD DVar5;
  byte *pbVar6;
  uint local_1c;
  byte *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = param_4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0050bb0b;
  local_10 = ExceptionList;
  pbVar6 = (byte *)0x0;
  ppvVar3 = &local_10;
  if (param_1 != (LPWSTR)0x0) {
    if (param_3 == (byte *)0x0) {
      return (byte *)0x0;
    }
    ExceptionList = &local_10;
    *param_1 = L'\0';
    ppvVar3 = ExceptionList;
  }
  ExceptionList = ppvVar3;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_0044ef90(param_4);
    }
    if (*(int *)(piVar2[3] + 8) == 0xfde9) {
      local_1c = 0;
      local_18 = (byte *)0x0;
      pbVar6 = (byte *)FUN_004c705a(param_3,(ushort *)param_1,&param_2,(uint)param_3,&local_1c,
                                    (int)piVar2);
      ExceptionList = local_10;
      return pbVar6;
    }
    iVar4 = *(int *)(piVar2[3] + 0xa8);
    if (param_1 == (LPWSTR)0x0) {
      if (iVar4 == 0) {
        pbVar6 = param_2 + 1;
        do {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
        } while (bVar1 != 0);
        ExceptionList = local_10;
        return param_2 + -(int)pbVar6;
      }
      iVar4 = FUN_0048139c(*(uint *)(piVar2[3] + 8),9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
      if (iVar4 != 0) goto LAB_004c023b;
      *(undefined1 *)(piVar2 + 7) = 1;
      piVar2[6] = 0x2a;
    }
    else {
      if (iVar4 == 0) {
        if (param_3 == (byte *)0x0) {
          ExceptionList = local_10;
          return (byte *)0x0;
        }
        do {
          *param_1 = (ushort)pbVar6[(int)param_2];
          if (pbVar6[(int)param_2] == 0) {
            ExceptionList = local_10;
            return pbVar6;
          }
          pbVar6 = pbVar6 + 1;
          param_1 = param_1 + 1;
        } while (pbVar6 < param_3);
        ExceptionList = local_10;
        return pbVar6;
      }
      iVar4 = FUN_0048139c(*(uint *)(piVar2[3] + 8),9,(LPCSTR)param_2,-1,param_1,(int)param_3);
      if (iVar4 != 0) {
LAB_004c023b:
        ExceptionList = local_10;
        return (byte *)(iVar4 + -1);
      }
      DVar5 = GetLastError();
      local_14 = param_2;
      pbVar6 = param_3;
      if (DVar5 == 0x7a) {
        while (pbVar6 != (byte *)0x0) {
          local_18 = pbVar6 + -1;
          if (*local_14 == 0) break;
          if ((*(short *)(*(int *)piVar2[3] + (uint)*local_14 * 2) < 0) &&
             (local_14 = local_14 + 1, *local_14 == 0)) goto LAB_004c0192;
          local_14 = local_14 + 1;
          pbVar6 = local_18;
        }
        pbVar6 = (byte *)FUN_0048139c(*(uint *)(piVar2[3] + 8),1,(LPCSTR)param_2,
                                      (int)local_14 - (int)param_2,param_1,(int)param_3);
        if (pbVar6 != (byte *)0x0) {
          ExceptionList = local_10;
          return pbVar6;
        }
      }
LAB_004c0192:
      *(undefined1 *)(piVar2 + 7) = 1;
      piVar2[6] = 0x2a;
      *param_1 = L'\0';
    }
  }
  ExceptionList = local_10;
  return (byte *)0xffffffff;
}


