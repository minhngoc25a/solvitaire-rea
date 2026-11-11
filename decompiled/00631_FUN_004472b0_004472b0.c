// Function: FUN_004472b0
// Entry: 004472b0
// Size: 339 bytes
// Thunk: false
// External: false


int __cdecl FUN_004472b0(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  int local_64;
  uint local_60 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_2 == (uint *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd306);
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if (((param_1 == (int *)0x0) || (param_1[2] == 0)) || (param_1[3] == 0)) {
LAB_004473f8:
    iVar2 = -2;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    piVar1 = (int *)FUN_00447100((int *)local_60,param_1);
    local_20 = *piVar1;
    iStack_1c = piVar1[1];
    iStack_18 = piVar1[2];
    iStack_14 = piVar1[3];
    local_10 = piVar1[4];
    iStack_c = piVar1[5];
    iStack_8 = piVar1[6];
    iStack_4 = piVar1[7];
    iVar2 = FUN_00445e70((int)&local_20,local_60);
    if (iVar2 != 0) {
      return iVar2;
    }
    local_60[0] = *param_2 + local_60[0];
    *param_2 = local_60[0];
    param_2[2] = local_60[0];
    if ((param_1[0xc] == 0) && (param_1[4] == param_1[5])) goto LAB_004473dd;
    puVar3 = (undefined4 *)FUN_004471e0(&local_20,param_1);
    local_40 = *puVar3;
    uStack_3c = puVar3[1];
    uStack_38 = puVar3[2];
    uStack_34 = puVar3[3];
    local_30 = puVar3[4];
    ppuStack_2c = (undefined **)puVar3[5];
    uStack_28 = puVar3[6];
    uStack_24 = puVar3[7];
    local_64 = 0;
    if (local_30 == 0) {
      ppuVar4 = &PTR_FUN_0053ffb0;
      uVar5 = 0;
    }
    else {
      ppuVar4 = ppuStack_2c;
      uVar5 = uStack_28;
      if (local_30 != 1) goto LAB_004473f8;
    }
    if ((ppuVar4 == (undefined **)0x0) || ((code *)*ppuVar4 == (code *)0x0)) {
      return -0x1d;
    }
    iVar2 = (*(code *)*ppuVar4)(uVar5,&local_40,&local_64);
    if (iVar2 == 0) {
      local_60[0] = *param_2 + local_64;
LAB_004473dd:
      *param_2 = local_60[0] + 7 & 0xfffffff8;
      return 0;
    }
  }
  return iVar2;
}


