// Function: FUN_0043a290
// Entry: 0043a290
// Size: 818 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0043a290(uint *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  int *unaff_ESI;
  ushort *unaff_EDI;
  int *piStack_658;
  LPCWSTR lpWideCharStr;
  int *piVar6;
  ulonglong uStack_63c;
  undefined1 auStack_638 [4];
  undefined4 local_634;
  undefined4 local_630;
  uint auStack_628 [58];
  CHAR aCStack_540 [280];
  undefined4 uStack_428;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  int iStack_4;
  
  uStack_63c = CONCAT44(auStack_638,unaff_EBX);
  local_634 = 0;
  if (param_1 == (uint *)0x0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5454);
  }
  if (param_4 == 0) {
    FID_conflict___assert
              (L"callback != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5455);
  }
  uStack_63c = uStack_63c & 0xffffffff;
  local_630 = 0;
  if (param_1 == (uint *)0x0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53ad);
  }
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pDeviceEnumerator != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53ae);
  }
  if (param_3 == 1) {
LAB_0043a35f:
    piVar3 = (int *)0x0;
  }
  else {
    if (param_3 != 2) {
      piStack_658 = (int *)0x43a35c;
      FID_conflict___assert
                (L"0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x538b);
      goto LAB_0043a35f;
    }
    piVar3 = (int *)0x1;
  }
  lpWideCharStr = (LPCWSTR)0x0;
  piStack_658 = param_2;
  iVar1 = (**(code **)(*param_2 + 0x10))();
  if (iVar1 < 0) {
    unaff_EDI = (ushort *)0x0;
  }
  else {
    iVar1 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&stack0xfffff9c0);
    (**(code **)(*(int *)lpWideCharStr + 8))(lpWideCharStr);
    unaff_ESI = (int *)0x0;
    param_3 = iStack_4;
    if (iVar1 < 0) {
      unaff_EDI = (ushort *)0x0;
    }
  }
  if (param_3 == 1) {
LAB_0043a3d8:
    piVar4 = (int *)0x0;
  }
  else {
    if (param_3 != 2) {
      FID_conflict___assert
                (L"0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x538b);
      goto LAB_0043a3d8;
    }
    piVar4 = (int *)0x1;
  }
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,piVar4,1,&stack0xfffff9bc);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,&stack0xfffff9bc);
    if (iVar1 < 0) {
      if (param_1 == (uint *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_1[0xe];
      }
      FUN_004277a0(uVar5,1,0x52b6fc);
      uVar2 = FUN_00435aa0(iVar1);
      goto LAB_0043a598;
    }
    uVar5 = 0;
    if (unaff_EBP != 0) {
      do {
        _memset(auStack_628,0,0x608);
        iVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,uVar5,&stack0xfffff9b8);
        piVar6 = unaff_ESI;
        if (-1 < iVar1) {
          if (param_1 == (uint *)0x0) {
            FID_conflict___assert
                      (L"pContext != ((void *)0)",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x5419);
          }
          if (unaff_ESI == (int *)0x0) {
            FID_conflict___assert
                      (L"pMMDevice != ((void *)0)",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x541a);
          }
          iVar1 = FUN_0043a050(param_1,unaff_ESI,auStack_628);
          if (((iVar1 == 0) && (unaff_EDI != (ushort *)0x0)) &&
             (iVar1 = FUN_00435d80((ushort *)auStack_628,unaff_EDI), iVar1 == 0)) {
            uStack_428 = 1;
          }
          iVar1 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,0,&stack0xfffff9b4);
          if (-1 < iVar1) {
            piVar6 = (int *)0x0;
            unaff_EBP = 0;
            uStack_63c = 0;
            iVar1 = (**(code **)(*piStack_658 + 0x14))(piStack_658,&DAT_0050c238,&stack0xfffff9b4);
            if (-1 < iVar1) {
              WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,aCStack_540,0x100,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
              (*(code *)param_1[0x52])(&piStack_658);
            }
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          (**(code **)(*piVar3 + 8))(piVar3);
          iVar1 = (*pcStack_20)(param_1,uStack_24,auStack_638,uStack_1c);
          if (iVar1 == 0) break;
        }
        uVar5 = uVar5 + 1;
        unaff_ESI = piVar6;
      } while (uVar5 < unaff_EBP);
    }
  }
  uVar2 = 0;
LAB_0043a598:
  if (unaff_EDI != (ushort *)0x0) {
    (*(code *)param_1[0x51])(unaff_EDI);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return uVar2;
}


