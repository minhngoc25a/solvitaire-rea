// Function: FUN_0043a5d0
// Entry: 0043a5d0
// Size: 635 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0043a5d0(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  int iVar1;
  char *pcVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar3;
  int *piVar4;
  int local_130;
  undefined4 *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  undefined8 local_108;
  wchar_t local_100 [2];
  wchar_t awStack_fc [2];
  wchar_t awStack_f8 [2];
  wchar_t awStack_f4 [2];
  wchar_t local_f0 [2];
  wchar_t awStack_ec [2];
  wchar_t awStack_e8 [2];
  wchar_t awStack_e4 [2];
  wchar_t local_e0 [4];
  wchar_t local_d8;
  int iStack_c;
  
  local_128 = 0;
  if (((param_2 == 4) && (param_4 != 0)) && (param_3 == (undefined4 *)0x0)) {
    local_120 = param_4;
    local_12c = &local_118;
    local_128 = 1;
    uStack_114 = 0;
    param_3 = (undefined4 *)local_100;
    local_11c = (uint)(param_5 != 0);
    local_108 = 0;
    local_118 = 0x41;
    puStack_10c = &local_124;
    local_100 = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._0_4_;
    awStack_fc = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._4_4_;
    awStack_f8 = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._8_4_;
    awStack_f4 = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._12_4_;
    local_124 = 1;
    local_f0 = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._16_4_;
    awStack_ec = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._20_4_;
    awStack_e8 = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._24_4_;
    awStack_e4 = (wchar_t  [2])u_VAD_Process_Loopback_0052cb38._28_4_;
    uStack_110 = 0xc;
    local_e0 = (wchar_t  [4])u_VAD_Process_Loopback_0052cb38._32_8_;
    local_d8 = u_VAD_Process_Loopback_0052cb38[0x14];
  }
  else {
    local_12c = (undefined4 *)0x0;
  }
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x548c);
  }
  if (param_6 == 0) {
    FID_conflict___assert
              (L"ppAudioClient != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x548d);
  }
  if (param_7 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"ppMMDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x548e);
  }
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53e1);
  }
  if (param_7 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"ppMMDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53e2);
  }
  piVar4 = &local_130;
  piVar3 = (int *)&DAT_0050c2d0;
  iVar1 = (**(code **)(param_1 + 0x140))(&DAT_0050c2d0,0,0x17,&DAT_0050c2e0);
  if (iVar1 < 0) {
    pcVar2 = "[WASAPI] Failed to create IMMDeviceEnumerator.\n";
LAB_0043a7aa:
    FUN_004277a0(*(int *)(param_1 + 0x38),1,(int)pcVar2);
    iVar1 = FUN_00435aa0(iVar1);
    if (iVar1 != 0) goto LAB_0043a7fc;
  }
  else {
    if ((wchar_t *)param_3 == (wchar_t *)0x0) {
      iVar1 = (**(code **)(*piVar4 + 0x10))(piVar4,iStack_c == 2,0);
    }
    else {
      iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4,param_3,param_7);
    }
    (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar1 < 0) {
      pcVar2 = "[WASAPI] Failed to retrieve IMMDevice.\n";
      goto LAB_0043a7aa;
    }
  }
  iVar1 = (**(code **)(*(int *)*param_7 + 0xc))
                    ((int *)*param_7,&DAT_0050c270,0x17,unaff_EDI,param_1);
  if (-1 < iVar1) {
    return 0;
  }
  iVar1 = FUN_00435aa0(iVar1);
  if (iVar1 == 0) {
    return 0;
  }
LAB_0043a7fc:
  if (unaff_ESI != 0) {
    FUN_004277a0(*(int *)(param_1 + 0x38),1,0x52fff8);
  }
  return iVar1;
}


