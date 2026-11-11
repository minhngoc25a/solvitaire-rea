// Function: FUN_00445fc0
// Entry: 00445fc0
// Size: 982 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00445fc0(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  uint uStack_4;
  
  uVar3 = param_3;
  uVar2 = param_2;
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd13a);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pFramesOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd13b);
  }
  if (param_3 == 0) {
    FID_conflict___assert
              (L"pFramesIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd13c);
  }
  if (param_1[1] != 1) {
    FID_conflict___assert
              (L"pConverter->channelsIn == 1",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd13d);
  }
  switch(*param_1) {
  case 1:
    if ((param_5 != 0) || (param_4 != 0)) {
      uVar2 = param_1[2];
      local_8 = 0;
      param_3 = 0;
      while( true ) {
        do {
          uVar6 = 0;
          if (uVar2 != 0) {
            do {
              iVar4 = local_8 * uVar2 + uVar6;
              uVar6 = uVar6 + 1;
              *(undefined1 *)(iVar4 + param_2) = *(undefined1 *)(uVar3 + local_8);
              uVar2 = param_1[2];
            } while (uVar6 < uVar2);
          }
          bVar7 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          param_3 = param_3 + bVar7;
        } while (param_3 < param_5);
        if (param_5 < param_3) break;
        if (param_4 <= local_8) {
          return 0;
        }
      }
    }
    break;
  case 2:
    uVar2 = param_1[2];
    local_8 = 0;
    uStack_4 = 0;
    if (uVar2 == 2) {
      if ((param_5 != 0) || (param_4 != 0)) {
        while( true ) {
          do {
            *(undefined2 *)(param_2 + local_8 * 4) = *(undefined2 *)(param_3 + local_8 * 2);
            *(undefined2 *)(param_2 + 2 + local_8 * 4) = *(undefined2 *)(param_3 + local_8 * 2);
            bVar7 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar7;
          } while (uStack_4 < param_5);
          if (param_5 < uStack_4) break;
          if (param_4 <= local_8) {
            return 0;
          }
        }
      }
    }
    else if ((param_5 != 0) || (param_4 != 0)) {
      param_3 = 0;
      while( true ) {
        do {
          uVar6 = 0;
          if (uVar2 != 0) {
            do {
              iVar4 = local_8 * uVar2 + uVar6;
              uVar6 = uVar6 + 1;
              *(undefined2 *)(param_2 + iVar4 * 2) = *(undefined2 *)(uVar3 + local_8 * 2);
              uVar2 = param_1[2];
            } while (uVar6 < uVar2);
          }
          bVar7 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          param_3 = param_3 + bVar7;
        } while (param_3 < param_5);
        if (param_5 < param_3) break;
        if (param_4 <= local_8) {
          return 0;
        }
      }
    }
    break;
  case 3:
    if ((param_5 != 0) || (param_4 != 0)) {
      uVar3 = param_1[2];
      local_8 = 0;
      param_2 = 0;
      uVar6 = local_8;
      while( true ) {
        do {
          if (uVar3 != 0) {
            iVar4 = param_3 + uVar6 * 2;
            local_8 = 0;
            do {
              iVar5 = uVar6 * uVar3 + local_8;
              local_8 = local_8 + 1;
              iVar1 = uVar2 + iVar5 * 2;
              *(undefined1 *)(iVar5 + iVar1) = *(undefined1 *)(iVar4 + uVar6);
              *(undefined1 *)(iVar5 + 1 + iVar1) = *(undefined1 *)(iVar4 + 1 + uVar6);
              *(undefined1 *)(iVar5 + 2 + iVar1) = *(undefined1 *)(iVar4 + 2 + uVar6);
              uVar3 = param_1[2];
            } while (local_8 < uVar3);
          }
          bVar7 = 0xfffffffe < uVar6;
          uVar6 = uVar6 + 1;
          param_2 = param_2 + bVar7;
        } while (param_2 < param_5);
        if (param_5 < param_2) break;
        if (param_4 <= uVar6) {
          return 0;
        }
      }
    }
    break;
  case 4:
    if ((param_5 != 0) || (param_4 != 0)) {
      uVar2 = param_1[2];
      local_8 = 0;
      param_3 = 0;
      while( true ) {
        do {
          uVar6 = 0;
          if (uVar2 != 0) {
            do {
              iVar4 = local_8 * uVar2 + uVar6;
              uVar6 = uVar6 + 1;
              *(undefined4 *)(param_2 + iVar4 * 4) = *(undefined4 *)(uVar3 + local_8 * 4);
              uVar2 = param_1[2];
            } while (uVar6 < uVar2);
          }
          bVar7 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          param_3 = param_3 + bVar7;
        } while (param_3 < param_5);
        if (param_5 < param_3) break;
        if (param_4 <= local_8) {
          return 0;
        }
      }
    }
    break;
  case 5:
    uVar2 = param_1[2];
    local_8 = 0;
    uStack_4 = 0;
    if (uVar2 == 2) {
      if ((param_5 != 0) || (param_4 != 0)) {
        while( true ) {
          do {
            *(undefined4 *)(param_2 + local_8 * 8) = *(undefined4 *)(param_3 + local_8 * 4);
            *(undefined4 *)(param_2 + 4 + local_8 * 8) = *(undefined4 *)(param_3 + local_8 * 4);
            bVar7 = 0xfffffffe < local_8;
            local_8 = local_8 + 1;
            uStack_4 = uStack_4 + bVar7;
          } while (uStack_4 < param_5);
          if (param_5 < uStack_4) break;
          if (param_4 <= local_8) {
            return 0;
          }
        }
      }
    }
    else if ((param_5 != 0) || (param_4 != 0)) {
      param_3 = 0;
      do {
        uVar6 = 0;
        if (uVar2 != 0) {
          do {
            iVar4 = uVar2 * local_8 + uVar6;
            uVar6 = uVar6 + 1;
            *(undefined4 *)(param_2 + iVar4 * 4) = *(undefined4 *)(uVar3 + local_8 * 4);
            uVar2 = param_1[2];
          } while (uVar6 < uVar2);
        }
        bVar7 = 0xfffffffe < local_8;
        local_8 = local_8 + 1;
        param_3 = param_3 + bVar7;
      } while ((param_3 < param_5) || ((param_3 <= param_5 && (local_8 < param_4))));
    }
    break;
  default:
    return 0xfffffffd;
  }
  return 0;
}


