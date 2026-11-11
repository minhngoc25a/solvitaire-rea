// Function: FUN_00439680
// Entry: 00439680
// Size: 407 bytes
// Thunk: false
// External: false


int __cdecl FUN_00439680(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int iVar7;
  BOOL BVar8;
  uint uVar9;
  HANDLE local_8;
  int local_4;
  
  local_4 = 0;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5252);
  }
  if (param_2 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"pCmd != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5253);
  }
  if (param_2[1] == 0) {
    local_4 = 1;
    local_8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    if (local_8 == (HANDLE)0x0) {
      DVar6 = GetLastError();
      iVar7 = FUN_00435680(DVar6);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0xac);
  if (puVar1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40d7);
  }
  else {
    WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
  }
  iVar7 = *(int *)(param_1 + 0xb8);
  while (iVar7 == 4) {
    iVar7 = *(int *)(param_1 + 0xb8);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar9 = *(int *)(param_1 + 0xb4) + iVar7 & 3;
  puVar2 = (undefined4 *)(param_1 + 0xbc + uVar9 * 0x18);
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(undefined8 *)(param_1 + 0xcc + uVar9 * 0x18) = *(undefined8 *)(param_2 + 4);
  *(HANDLE **)(param_1 + 0xc0 + uVar9 * 0x18) = &local_8;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  if ((undefined4 *)(param_1 + 0xb0) == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x417e);
  }
  else {
    BVar8 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0xb0),1,(LPLONG)0x0);
    if (BVar8 == 0) {
      GetLastError();
    }
  }
  if (puVar1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40e5);
  }
  else {
    SetEvent((HANDLE)*puVar1);
  }
  if (local_4 != 0) {
    DVar6 = WaitForSingleObject(local_8,0xffffffff);
    if ((DVar6 != 0) && (DVar6 != 0x102)) {
      GetLastError();
    }
    CloseHandle(local_8);
  }
  return 0;
}


