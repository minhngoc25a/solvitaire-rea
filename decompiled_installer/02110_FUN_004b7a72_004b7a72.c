// Function: FUN_004b7a72
// Entry: 004b7a72
// Size: 212 bytes
// Thunk: false
// External: false


wchar_t FUN_004b7a72(wchar_t param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int local_18;
  int local_14;
  char local_c;
  wchar_t local_8 [2];
  
  if (param_1 == L'\xffff') {
    return 0xffff;
  }
  FUN_00425544(&local_18,param_2);
  bVar1 = (byte)param_1;
  if (*(int *)(local_14 + 8) == 0xfde9) {
    if ((ushort)param_1 < 0x80) {
      if (((&DAT_0050edf2)[(uint)bVar1 * 2] & 1) != 0) {
        bVar1 = *(byte *)(*(int *)(local_14 + 0x94) + (uint)bVar1);
      }
      param_1 = (wchar_t)bVar1;
    }
    else {
LAB_004b7b07:
      iVar2 = ___acrt_LCMapStringW(*(wchar_t **)(local_14 + 0xa8),0x100,&param_1,1,local_8,1);
      if (iVar2 != 0) goto LAB_004b7b33;
    }
  }
  else if ((ushort)param_1 < 0x100) {
    if (((&DAT_0050edf2)[(uint)bVar1 * 2] & 1) == 0) {
      param_1 = param_1 & 0xff;
    }
    else {
      param_1 = (wchar_t)*(byte *)(*(int *)(local_14 + 0x94) + (uint)bVar1);
    }
  }
  else if (*(int *)(local_14 + 0xa8) != 0) goto LAB_004b7b07;
  local_8[0] = param_1;
LAB_004b7b33:
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return local_8[0];
}


