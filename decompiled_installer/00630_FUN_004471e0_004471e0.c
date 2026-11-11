// Function: FUN_004471e0
// Entry: 004471e0
// Size: 200 bytes
// Thunk: false
// External: false


void __cdecl FUN_004471e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pConfig != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd2f1);
  }
  uVar6 = param_2[2];
  if ((uint)param_2[3] <= (uint)param_2[2]) {
    uVar6 = param_2[3];
  }
  if ((((param_2[0xc] != 0) || (param_2[4] != param_2[5])) && (param_2[0x11] != 0)) ||
     (((iVar5 = param_2[1], iVar5 != 2 && (iVar5 != 5)) &&
      ((iVar5 = *param_2, iVar5 != 2 && (iVar5 != 5)))))) {
    iVar5 = 5;
  }
  iVar1 = param_2[5];
  iVar2 = param_2[4];
  iVar3 = param_2[0x11];
  iVar4 = param_2[0x14];
  *param_1 = iVar5;
  param_1[1] = uVar6;
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  param_1[4] = iVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[7] = iVar4;
  param_1[5] = param_2[0x12];
  param_1[6] = param_2[0x13];
  return;
}


