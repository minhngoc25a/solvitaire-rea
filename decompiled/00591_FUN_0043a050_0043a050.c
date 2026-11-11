// Function: FUN_0043a050
// Entry: 0043a050
// Size: 167 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0043a050(uint *param_1,int *param_2,uint *param_3)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  int unaff_EBX;
  
  puVar2 = param_3;
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pDeviceID != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53fe);
  }
  iVar3 = (**(code **)(*param_2 + 0x14))(param_2,&param_3);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  iVar3 = 0;
  sVar1 = (short)*param_1;
  while (sVar1 != 0) {
    iVar3 = iVar3 + 1;
    sVar1 = *(short *)((int)param_1 + iVar3 * 2);
  }
  if (iVar3 + 1U < 0x41) {
    FUN_0044c490(puVar2,param_1,iVar3 * 2);
    *(undefined2 *)(iVar3 * 2 + (int)puVar2) = 0;
    (**(code **)(unaff_EBX + 0x144))(param_1);
    return 0;
  }
  (**(code **)(unaff_EBX + 0x144))(param_1);
  FID_conflict___assert
            (L"0",L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
             0x5405);
  return 0xffffffff;
}


