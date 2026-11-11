// Function: FUN_0044a330
// Entry: 0044a330
// Size: 804 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0044a330(int param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x11903);
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
  }
  if (((param_2 == (int *)0x0) || (piVar2 = (int *)*param_2, piVar2 == (int *)0x0)) ||
     (*piVar2 == 0)) {
    return 0xfffffffe;
  }
  uVar4 = param_2[2];
  local_18 = uVar4;
  if (((*(byte *)(piVar2 + 2) != 0xff) && (local_18 = (uint)*(byte *)(piVar2 + 2), uVar4 != 0xff))
     && (uVar4 != local_18)) {
    return 0xfffffffe;
  }
  bVar1 = *(byte *)((int)piVar2 + 9);
  uVar4 = param_2[3];
  uVar6 = uVar4;
  if (((bVar1 != 0xff) && (uVar6 = (uint)bVar1, uVar4 != 0xff)) && (uVar4 != uVar6)) {
    return 0xfffffffe;
  }
  if (0xfe < local_18) {
    return 0xfffffffe;
  }
  if (0xfe < uVar6) {
    return 0xfffffffe;
  }
  if ((local_18 != 0) && (param_2[4] == 0)) {
    return 0xfffffffe;
  }
  if ((uVar6 != 0) && (param_2[5] == 0)) {
    return 0xfffffffe;
  }
  if ((*(byte *)(piVar2 + 3) & 1) != 0) {
    if (((char)piVar2[2] != '\0') && ((char)piVar2[2] != '\x01')) {
      return 0xfffffffe;
    }
    if (bVar1 != 1) {
      return 0xfffffffe;
    }
    if (*(int *)param_2[4] != *(int *)param_2[5]) {
      return 0xfffffffe;
    }
  }
  *param_3 = 0;
  if (local_18 < 3) {
    uVar5 = 0;
    uVar4 = 0xffffffff;
  }
  else {
    uVar5 = local_18 * 0x34 + 7 & 0xfffffff8;
    uVar4 = 0;
    *param_3 = uVar5;
  }
  param_3[1] = uVar4;
  if (uVar6 < 3) {
    uVar4 = *param_3;
    uVar5 = 0xffffffff;
  }
  else {
    uVar4 = uVar5 + uVar6 * 0x28;
    *param_3 = uVar4;
  }
  param_3[2] = uVar5;
  if ((local_18 == 0) && (uVar6 == 1)) {
    uVar5 = 0xffffffff;
    goto LAB_0044a5ee;
  }
  iVar7 = 0;
  local_14 = 0;
  uVar4 = 0;
  local_10 = 0;
  if (local_18 < 2) {
    if (local_18 != 0) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x200);
      goto LAB_0044a530;
    }
  }
  else {
    local_14 = 0;
    local_10 = 0;
    uVar5 = (uint)*(ushort *)(param_1 + 0x200);
    do {
      local_14 = local_14 + *(int *)(param_2[4] + uVar4 * 4) * uVar5 * 4;
      iVar7 = uVar4 * 4;
      uVar4 = uVar4 + 2;
      local_10 = local_10 + *(int *)(param_2[4] + 4 + iVar7) * uVar5 * 4;
    } while (uVar4 < local_18 - 1);
    iVar7 = 0;
    if (uVar4 < local_18) {
LAB_0044a530:
      iVar7 = uVar5 * *(int *)(param_2[4] + uVar4 * 4) * 4;
    }
  }
  uVar4 = 0;
  iVar7 = iVar7 + local_14 + local_10;
  local_c = 0;
  local_8 = 0;
  if (uVar6 < 2) {
    if (uVar6 != 0) {
      param_2 = (int *)param_2[5];
      uVar5 = (uint)*(ushort *)(param_1 + 0x200);
      goto LAB_0044a5cb;
    }
  }
  else {
    param_2 = (int *)param_2[5];
    local_c = 0;
    local_8 = 0;
    uVar5 = (uint)*(ushort *)(param_1 + 0x200);
    do {
      local_c = local_c + param_2[uVar4] * uVar5 * 4;
      iVar3 = uVar4 + 1;
      uVar4 = uVar4 + 2;
      local_8 = local_8 + param_2[iVar3] * uVar5 * 4;
    } while (uVar4 < uVar6 - 1);
    if (uVar4 < uVar6) {
LAB_0044a5cb:
      iVar7 = iVar7 + uVar5 * param_2[uVar4] * 4;
    }
  }
  uVar5 = *param_3;
  uVar4 = (local_c + 7 + local_8 + iVar7 & 0xfffffff8U) + uVar5;
LAB_0044a5ee:
  param_3[3] = uVar5;
  param_3[4] = local_18;
  *param_3 = uVar4 + 7 & 0xfffffff8;
  param_3[5] = uVar6;
  return 0;
}


