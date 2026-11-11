// Function: FUN_0042be60
// Entry: 0042be60
// Size: 687 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042be60(int *param_1,void *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  size_t local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20 [8];
  
  if (param_3 == (int *)0x0) {
    return -2;
  }
  _memset(param_3,0,0xf0);
  iVar2 = FUN_004472b0(param_1,&local_4c);
  if (iVar2 != 0) {
    return iVar2;
  }
  param_3[0x3a] = (int)param_2;
  if (param_2 == (void *)0x0) {
    if (local_4c != 0) {
      FID_conflict___assert
                (L"sz == 0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x2fbb);
    }
  }
  else if (local_4c != 0) {
    _memset(param_2,0,local_4c);
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  param_3[6] = param_1[8];
  if ((param_1[0xc] == 0) && (param_1[4] == param_1[5])) {
    bVar1 = false;
LAB_0042bf3b:
    iVar2 = param_1[1];
    if ((((iVar2 == 2) || (iVar2 == 5)) || (iVar2 = *param_1, iVar2 == 2)) || (iVar2 == 5))
    goto LAB_0042bf59;
  }
  else if (((param_1[0xc] == 0) && (bVar1 = true, param_1[4] == param_1[5])) ||
          (bVar1 = true, param_1[0x11] == 0)) goto LAB_0042bf3b;
  iVar2 = 5;
LAB_0042bf59:
  piVar3 = (int *)FUN_00447100(local_20,param_1);
  local_40 = *piVar3;
  iStack_3c = piVar3[1];
  iStack_38 = piVar3[2];
  iStack_34 = piVar3[3];
  local_30 = piVar3[4];
  iStack_2c = piVar3[5];
  iStack_28 = piVar3[6];
  iStack_24 = piVar3[7];
  iVar4 = FUN_0042b230(&local_40,(void *)(local_48 + (int)param_2),param_3 + 8);
  if (iVar4 == 0) {
    if (param_3[0xc] != 1) {
      *(undefined1 *)((int)param_3 + 0xe2) = 1;
    }
    if (bVar1) {
      piVar3 = (int *)FUN_004471e0(local_20,param_1);
      local_40 = *piVar3;
      iStack_3c = piVar3[1];
      iStack_38 = piVar3[2];
      iStack_34 = piVar3[3];
      local_30 = piVar3[4];
      iStack_2c = piVar3[5];
      iStack_28 = piVar3[6];
      iStack_24 = piVar3[7];
      iVar4 = FUN_0042b130(&local_40,local_44 + (int)param_2,param_3 + 0x14);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(undefined1 *)((int)param_3 + 0xe3) = 1;
    }
    if ((*(char *)((int)param_3 + 0xe2) == '\0') && (*(char *)((int)param_3 + 0xe3) == '\0')) {
      *(undefined1 *)(param_3 + 0x38) = 0;
      *(bool *)((int)param_3 + 0xe1) = *param_3 != param_3[1];
    }
    else {
      if (*param_3 != iVar2) {
        *(undefined1 *)(param_3 + 0x38) = 1;
      }
      if (param_3[1] != iVar2) {
        *(undefined1 *)((int)param_3 + 0xe1) = 1;
      }
    }
    if ((((char)param_3[0x38] == '\0') && (*(char *)((int)param_3 + 0xe1) == '\0')) &&
       ((*(char *)((int)param_3 + 0xe2) == '\0' && (*(char *)((int)param_3 + 0xe3) == '\0')))) {
      *(undefined1 *)(param_3 + 0x39) = 1;
    }
    if ((char)param_3[0x39] != '\0') {
      param_3[7] = 0;
      return 0;
    }
    if ((uint)param_3[2] < (uint)param_3[3]) {
      if (*(char *)((int)param_3 + 0xe2) != '\x01') {
        FID_conflict___assert
                  (L"pConverter->hasChannelConverter == 1",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd3b3);
      }
      param_3[7] = (uint)(*(char *)((int)param_3 + 0xe3) != '\0') * 2 + 2;
      return 0;
    }
    if (*(char *)((int)param_3 + 0xe2) != '\0') {
      iVar2 = 5;
      if (*(char *)((int)param_3 + 0xe3) == '\0') {
        iVar2 = 2;
      }
      param_3[7] = iVar2;
      return 0;
    }
    iVar2 = 3;
    if (*(char *)((int)param_3 + 0xe3) == '\0') {
      iVar2 = 1;
    }
    param_3[7] = iVar2;
    iVar4 = 0;
  }
  return iVar4;
}


