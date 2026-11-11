// Function: FUN_004301d0
// Entry: 004301d0
// Size: 294 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004301d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_608 [386];
  
  if ((param_1 == 0) || (param_4 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  _memset(local_608,0,0x608);
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = param_3;
    puVar4 = local_608;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x94);
    if (puVar3 != (undefined4 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar3,0xffffffff);
      uVar1 = (**(code **)(param_1 + 0xc))(param_1,param_2,param_3,local_608);
      SetEvent((HANDLE)*puVar3);
      puVar3 = local_608;
      for (iVar2 = 0x182; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      }
      return uVar1;
    }
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40d7);
    uVar1 = (**(code **)(param_1 + 0xc))(param_1,param_2,param_3,local_608);
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40e5);
    puVar3 = local_608;
    for (iVar2 = 0x182; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_4 = *puVar3;
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
    }
    return uVar1;
  }
  return 0xfffffffd;
}


