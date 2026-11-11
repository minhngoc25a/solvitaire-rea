// Function: FUN_00439aa0
// Entry: 00439aa0
// Size: 1237 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00439aa0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_EBX;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *unaff_retaddr;
  char *pcVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  int *piVar13;
  undefined2 local_168;
  short sStack_166;
  uint uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  short asStack_150 [12];
  undefined1 auStack_138 [12];
  short *psStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char acStack_120 [260];
  int iStack_1c;
  int iStack_10;
  int iStack_4;
  
  local_168 = 0;
  sStack_166 = 0;
  if (param_3 == (int *)0x0) {
    FID_conflict___assert
              (L"pAudioClient != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x530a);
  }
  if (param_4 == 0) {
    FID_conflict___assert
              (L"pInfo != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x530b);
  }
  piVar13 = (int *)&local_168;
  iVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (iVar2 < 0) {
    iVar5 = 0;
    if (iStack_4 != 0) {
      iVar5 = *(int *)(iStack_4 + 0x38);
    }
    FUN_004277a0(iVar5,1,0x52f738);
    uVar3 = FUN_00435aa0(iVar2);
    return uVar3;
  }
  if (unaff_EBX == (int *)0x0) {
    FID_conflict___assert
              (L"pWF != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x52f7);
  }
  if (param_4 == 0) {
    FID_conflict___assert
              (L"pInfo != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x52f8);
  }
  if (*(uint *)(param_4 + 0x204) < 0x40) {
    uVar3 = FUN_00439460((short *)unaff_EBX);
    *(undefined4 *)(param_4 + 0x208 + *(int *)(param_4 + 0x204) * 0x10) = uVar3;
    *(uint *)(param_4 + 0x20c + *(int *)(param_4 + 0x204) * 0x10) =
         (uint)*(ushort *)((int)unaff_EBX + 2);
    *(int *)(param_4 + (*(int *)(param_4 + 0x204) + 0x21) * 0x10) = unaff_EBX[1];
    *(undefined4 *)(param_4 + 0x214 + *(int *)(param_4 + 0x204) * 0x10) = 0;
    *(int *)(param_4 + 0x204) = *(int *)(param_4 + 0x204) + 1;
  }
  iVar2 = (**(code **)(*unaff_retaddr + 0x10))(unaff_retaddr,0,&uStack_164);
  if (iVar2 < 0) {
    if (iStack_10 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iStack_10 + 0x38);
    }
    FUN_004277a0(iVar2,2,0x52f818);
    return 0;
  }
  psStack_12c = (short *)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  acStack_120[0] = '\0';
  acStack_120[1] = '\0';
  acStack_120[2] = '\0';
  acStack_120[3] = '\0';
  acStack_120[4] = '\0';
  acStack_120[5] = '\0';
  acStack_120[6] = '\0';
  acStack_120[7] = '\0';
  acStack_120[8] = '\0';
  acStack_120[9] = '\0';
  acStack_120[10] = '\0';
  acStack_120[0xb] = '\0';
  iVar2 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,&DAT_0050c24c,&psStack_12c);
  if (iVar2 < 0) {
    if (iStack_1c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iStack_1c + 0x38);
    }
    pcVar9 = "[WASAPI] Failed to retrieve device format for device info retrieval.";
  }
  else {
    psVar11 = psStack_12c;
    iVar2 = (**(code **)(*param_3 + 0x1c))(param_3,1,psStack_12c,0);
    if (-1 < iVar2) {
      if (psVar11 == (short *)0x0) {
        FID_conflict___assert
                  (L"pWF != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x52f7);
      }
      if (*(uint *)(param_4 + 0x204) < 0x40) {
        uVar3 = FUN_00439460(psVar11);
        *(undefined4 *)(param_4 + 0x208 + *(int *)(param_4 + 0x204) * 0x10) = uVar3;
        *(uint *)(param_4 + 0x20c + *(int *)(param_4 + 0x204) * 0x10) = (uint)(ushort)psVar11[1];
        *(undefined4 *)(param_4 + (*(int *)(param_4 + 0x204) + 0x21) * 0x10) =
             *(undefined4 *)(psVar11 + 2);
        *(undefined4 *)(param_4 + 0x214 + *(int *)(param_4 + 0x204) * 0x10) = 2;
        *(int *)(param_4 + 0x204) = *(int *)(param_4 + 0x204) + 1;
        (**(code **)(*piVar13 + 8))(piVar13);
        return 0;
      }
      goto LAB_00439f00;
    }
    piVar8 = (int *)(uint)(ushort)psVar11[1];
    if (piVar8 < (int *)0xff) {
      piVar12 = piVar8;
      if (piVar8 != (int *)0x0) {
        piVar6 = (int *)0x0;
        iVar2 = 0xfe;
        if (piVar8 != (int *)0x0) goto LAB_00439cf0;
      }
    }
    else {
      piVar8 = (int *)0xfe;
      piVar6 = (int *)0x0;
      iVar2 = 0xfe;
      piVar12 = (int *)0xfe;
LAB_00439cf0:
      do {
        if (iVar2 == 0) break;
        cVar1 = FUN_00448a20(0,(uint)piVar8,(uint)piVar6);
        acStack_120[(int)piVar6] = cVar1;
        piVar6 = (int *)((int)piVar6 + 1);
        iVar2 = iVar2 + -1;
      } while (piVar6 < piVar8);
    }
    local_168 = 0x28;
    uStack_164 = FUN_004390c0((int)acStack_120,(uint)piVar8);
    uVar10 = 0;
    do {
      asStack_150[0] = 0;
      asStack_150[1] = 0;
      asStack_150[2] = 1;
      asStack_150[3] = 0;
      asStack_150[4] = 2;
      asStack_150[5] = 0;
      asStack_150[6] = 3;
      asStack_150[7] = 0;
      asStack_150[8] = 4;
      asStack_150[9] = 0;
      asStack_150[10] = 4;
      asStack_150[0xb] = 0;
      sStack_166 = asStack_150[*(int *)((int)&DAT_0053fc40 + uVar10) * 2] << 3;
      uStack_160 = DAT_0053fd00;
      uStack_15c = DAT_0053fd04;
      uStack_158 = uRam0053fd08;
      uStack_154 = uRam0053fd0c;
      if (*(int *)((int)&DAT_0053fc40 + uVar10) == 5) {
        uStack_160 = DAT_0053fd10;
        uStack_15c = DAT_0053fd14;
        uStack_158 = uRam0053fd18;
        uStack_154 = uRam0053fd1c;
      }
      uVar7 = 0;
      do {
        uVar3 = *(undefined4 *)((int)&DAT_0053fc08 + uVar7);
        iVar2 = (**(code **)(*param_3 + 0x1c))(param_3,1,&stack0xfffffe88,0);
        if (-1 < iVar2) {
          if (*(uint *)(param_4 + 0x204) < 0x40) {
            uVar4 = FUN_00439460((short *)&stack0xfffffe88);
            *(undefined4 *)(param_4 + 0x208 + *(int *)(param_4 + 0x204) * 0x10) = uVar4;
            *(int **)(param_4 + 0x20c + *(int *)(param_4 + 0x204) * 0x10) = piVar8;
            *(undefined4 *)(param_4 + (*(int *)(param_4 + 0x204) + 0x21) * 0x10) = uVar3;
            *(undefined4 *)(param_4 + 0x214 + *(int *)(param_4 + 0x204) * 0x10) = 2;
            *(int *)(param_4 + 0x204) = *(int *)(param_4 + 0x204) + 1;
          }
          (**(code **)(iStack_1c + 0x148))(auStack_138);
          (**(code **)(*piVar12 + 8))(piVar12);
          return 0;
        }
        uVar7 = uVar7 + 4;
      } while (uVar7 < 0x38);
      uVar10 = uVar10 + 4;
    } while (uVar10 < 0x14);
    (**(code **)(iStack_1c + 0x148))(auStack_138);
    pcVar9 = "[WASAPI] Failed to find suitable device format for device info retrieval.";
    iVar2 = *(int *)(iStack_1c + 0x38);
  }
  FUN_004277a0(iVar2,2,(int)pcVar9);
LAB_00439f00:
  (**(code **)(*piVar13 + 8))(piVar13);
  return 0;
}


