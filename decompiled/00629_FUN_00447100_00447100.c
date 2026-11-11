// Function: FUN_00447100
// Entry: 00447100
// Size: 217 bytes
// Thunk: false
// External: false


void __cdecl FUN_00447100(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pConfig != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd2e3);
    FID_conflict___assert
              (L"pConfig != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd2c7);
    FID_conflict___assert
              (L"pConfig != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd2c0);
  }
  if ((((param_2[0xc] != 0) || (param_2[4] != param_2[5])) && (param_2[0x11] != 0)) ||
     (((iVar7 = param_2[1], iVar7 != 2 && (iVar7 != 5)) &&
      ((iVar7 = *param_2, iVar7 != 2 && (iVar7 != 5)))))) {
    iVar7 = 5;
  }
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  iVar3 = param_2[6];
  iVar4 = param_2[9];
  iVar5 = param_2[7];
  iVar6 = param_2[0xb];
  *param_1 = iVar7;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  param_1[4] = iVar5;
  param_1[5] = iVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[7] = iVar6;
  param_1[6] = param_2[10];
  return;
}


