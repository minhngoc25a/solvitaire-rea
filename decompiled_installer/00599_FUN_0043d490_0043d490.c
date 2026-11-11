// Function: FUN_0043d490
// Entry: 0043d490
// Size: 547 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0043d490(int param_1,int *param_2,undefined2 *param_3,undefined2 *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  uint local_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5e0b);
  }
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pDirectSoundCapture != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5e0c);
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  local_10 = 0x10;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_10);
  if (iVar1 < 0) {
    if (param_1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    FUN_004277a0(iVar3,1,0x52f940);
    uVar2 = FUN_00435aa0(iVar1);
    return uVar2;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = (short)iStack_c;
  }
  uVar4 = 0x10;
  uVar2 = 48000;
  if (iStack_c == 1) {
    if ((local_10 & 0x4000) != 0) goto LAB_0043d698;
    if ((local_10 & 0x400) != 0) {
      uVar2 = 0xac44;
      goto LAB_0043d698;
    }
    if ((local_10 & 0x40) != 0) {
      uVar2 = 0x5622;
      goto LAB_0043d698;
    }
    if ((local_10 & 4) != 0) {
      uVar2 = 0x2b11;
      goto LAB_0043d698;
    }
    if ((local_10 & 0x40000) != 0) {
      uVar2 = 96000;
      goto LAB_0043d698;
    }
    uVar4 = 8;
    if ((local_10 & 0x1000) != 0) goto LAB_0043d698;
    if ((local_10 & 0x100) != 0) {
      uVar2 = 0xac44;
      goto LAB_0043d698;
    }
    if ((local_10 & 0x10) != 0) {
      uVar2 = 0x5622;
      goto LAB_0043d698;
    }
    if ((local_10 & 1) != 0) {
      uVar2 = 0x2b11;
      goto LAB_0043d698;
    }
    local_10 = local_10 & 0x10000;
  }
  else {
    if ((iStack_c != 2) || ((local_10 & 0x8000) != 0)) goto LAB_0043d698;
    if ((local_10 & 0x800) != 0) {
      uVar2 = 0xac44;
      goto LAB_0043d698;
    }
    if ((char)local_10 < '\0') {
      uVar2 = 0x5622;
      goto LAB_0043d698;
    }
    if ((local_10 & 8) != 0) {
      uVar2 = 0x2b11;
      goto LAB_0043d698;
    }
    if ((local_10 & 0x80000) != 0) {
      uVar2 = 96000;
      goto LAB_0043d698;
    }
    uVar4 = 8;
    if ((local_10 & 0x2000) != 0) goto LAB_0043d698;
    if ((local_10 & 0x200) != 0) {
      uVar2 = 0xac44;
      goto LAB_0043d698;
    }
    if ((local_10 & 0x20) != 0) {
      uVar2 = 0x5622;
      goto LAB_0043d698;
    }
    if ((local_10 & 2) != 0) {
      uVar2 = 0x2b11;
      goto LAB_0043d698;
    }
    local_10 = local_10 & 0x20000;
  }
  uVar4 = 8;
  if (local_10 == 0) {
    uVar4 = 0x10;
  }
  else {
    uVar2 = 96000;
  }
LAB_0043d698:
  if (param_2 != (int *)0x0) {
    *(undefined2 *)param_2 = uVar4;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar2;
  }
  return 0;
}


