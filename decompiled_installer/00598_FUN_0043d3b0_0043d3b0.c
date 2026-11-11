// Function: FUN_0043d3b0
// Entry: 0043d3b0
// Size: 224 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0043d3b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5dcf);
  }
  puVar2 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"ppDirectSound != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5dd0);
  }
  *puVar2 = 0;
  param_1 = 0;
  uVar4 = param_3;
  iVar3 = (**(code **)(iVar1 + 0xac))(param_3,&param_1,0);
  if (iVar3 < 0) {
    FUN_004277a0(*(int *)(iVar1 + 0x38),1,0x52a334);
    return 0xfffffe6f;
  }
  iVar3 = (**(code **)(iVar1 + 0x154))();
  if (iVar3 == 0) {
    iVar3 = (**(code **)(iVar1 + 0x158))();
  }
  iVar3 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,iVar3,3 - (uint)(unaff_ESI != 1));
  if (iVar3 < 0) {
    FUN_004277a0(*(int *)(iVar1 + 0x38),1,0x52f8f0);
    uVar4 = FUN_00435aa0(iVar3);
    return uVar4;
  }
  *puVar2 = uVar4;
  return 0;
}


