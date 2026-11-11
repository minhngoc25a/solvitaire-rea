// Function: FUN_0042f180
// Entry: 0042f180
// Size: 453 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_0042f180(uint param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_38;
  uint uStack_34;
  int local_30 [12];
  
  uVar4 = param_1;
  if ((param_1 == 0) || (param_3 == 0 && param_4 == 0)) {
    return 0;
  }
  local_38 = 0;
  uStack_34 = 0;
  if ((param_4 == 0) && (param_3 == 0)) {
LAB_0042f331:
    return CONCAT44(uStack_34,local_38);
  }
  param_1 = 0;
  uVar8 = local_38;
  do {
    uVar5 = *(uint *)(uVar4 + 0x50) - *(uint *)(uVar4 + 0x48);
    uVar6 = (*(int *)(uVar4 + 0x54) - *(int *)(uVar4 + 0x4c)) -
            (uint)(*(uint *)(uVar4 + 0x50) < *(uint *)(uVar4 + 0x48));
    uVar9 = param_3 - uVar8;
    uVar7 = (param_4 - param_1) - (uint)(param_3 < uVar8);
    if ((uVar6 <= uVar7) && ((uVar6 < uVar7 || (uVar5 < uVar9)))) {
      uVar7 = uVar6;
      uVar9 = uVar5;
    }
    if (param_2 != 0) {
      iVar2 = *(int *)(uVar4 + 0x38);
      iVar3 = *(int *)(uVar4 + 0x3c);
      local_30[0] = 0;
      local_30[1] = 1;
      local_30[2] = 2;
      local_30[3] = 3;
      local_30[4] = 4;
      local_30[5] = 4;
      local_30[6] = 0;
      local_30[7] = 1;
      local_30[8] = 2;
      local_30[9] = 3;
      local_30[10] = 4;
      local_30[0xb] = 4;
      FUN_00431ec0((uint *)(local_30[iVar2 + 6] * iVar3 * uVar8 + param_2),
                   (uint *)(local_30[iVar2] * *(int *)(uVar4 + 0x48) * iVar3 +
                           *(int *)(uVar4 + 0x58)),uVar9,uVar7,iVar2,iVar3);
    }
    bVar10 = CARRY4(uVar8,uVar9);
    uVar8 = uVar8 + uVar9;
    param_1 = param_1 + uVar7 + (uint)bVar10;
    puVar1 = (uint *)(uVar4 + 0x48);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar9;
    local_38 = *(uint *)(uVar4 + 0x48);
    *(int *)(uVar4 + 0x4c) = *(int *)(uVar4 + 0x4c) + uVar7 + (uint)CARRY4(uVar5,uVar9);
    uStack_34 = *(uint *)(uVar4 + 0x4c);
    uVar7 = *(uint *)(uVar4 + 0x54);
    if (local_38 == *(uint *)(uVar4 + 0x50)) {
      bVar10 = false;
      if (uStack_34 == uVar7) {
        uStack_34 = param_1;
        local_38 = uVar8;
        if (param_5 != 0) {
          *(undefined4 *)(uVar4 + 0x48) = 0;
          uStack_34 = 0;
          local_38 = 0;
          *(undefined4 *)(uVar4 + 0x4c) = 0;
          goto LAB_0042f2e2;
        }
        goto LAB_0042f331;
      }
    }
    else {
LAB_0042f2e2:
      bVar10 = uStack_34 == uVar7;
    }
    if ((uVar7 <= uStack_34) && ((!bVar10 || (*(uint *)(uVar4 + 0x50) <= local_38)))) {
      FID_conflict___assert
                (L"pAudioBufferRef->cursor < pAudioBufferRef->sizeInFrames",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xe292);
    }
    if (param_4 <= param_1) {
      uStack_34 = param_1;
      local_38 = uVar8;
      if (param_4 < param_1) goto LAB_0042f331;
      if (param_3 <= uVar8) {
        return CONCAT44(param_1,uVar8);
      }
    }
  } while( true );
}


