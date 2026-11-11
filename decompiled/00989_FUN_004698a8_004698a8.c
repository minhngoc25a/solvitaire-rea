// Function: FUN_004698a8
// Entry: 004698a8
// Size: 418 bytes
// Thunk: false
// External: false


void __cdecl FUN_004698a8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int local_20;
  int local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  local_20 = 0x40;
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  pvVar3 = HeapAlloc(DAT_00542264,0,0x100);
  *(LPVOID *)(param_1 + 0xc) = pvVar3;
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar4 = 4;
  local_1c = 0;
  while( true ) {
    uVar11 = *(uint *)(param_1 + 8);
    iVar7 = (int)uVar11 >> 0x1f;
    puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + uVar4);
    if (*(int *)(param_1 + 0x1c) == 0x706c7a31) {
      uVar10 = uVar4 + 0x18;
      iVar12 = iVar12 + (uint)(0xffffffe7 < uVar4);
      if (iVar7 < iVar12) {
        return;
      }
      if ((iVar7 <= iVar12) && (uVar11 < uVar10)) {
        return;
      }
      local_14 = *puVar9;
      local_10 = puVar9[1];
      puVar6 = puVar9 + 3;
      local_c = puVar9[2];
      puVar1 = puVar9 + 4;
      puVar9 = &local_14;
      local_8 = *puVar6;
      local_4 = *(undefined2 *)puVar1;
    }
    else {
      uVar10 = uVar4 + 0x12;
      iVar12 = iVar12 + (uint)(0xffffffed < uVar4);
      if (iVar7 < iVar12) {
        return;
      }
      if ((iVar7 <= iVar12) && (uVar11 < uVar10)) {
        return;
      }
    }
    uVar4 = (uint)*(short *)(puVar9 + 4);
    uVar5 = uVar4 + puVar9[2];
    iVar8 = ((int)uVar4 >> 0x1f) + puVar9[3] + (uint)CARRY4(uVar4,puVar9[2]) + iVar12 +
            (uint)CARRY4(uVar5,uVar10);
    if (iVar7 < iVar8) {
      return;
    }
    if ((iVar7 <= iVar8) && (uVar11 < uVar5 + uVar10)) break;
    if (local_20 <= local_1c) {
      local_20 = local_20 + 0x40;
      pvVar3 = HeapReAlloc(DAT_00542264,8,*(LPVOID *)(param_1 + 0xc),local_20 * 4);
      *(LPVOID *)(param_1 + 0xc) = pvVar3;
    }
    puVar6 = HeapAlloc(DAT_00542264,0,(int)*(short *)(puVar9 + 4) + 0x19);
    uVar2 = puVar9[1];
    *puVar6 = *puVar9;
    puVar6[1] = uVar2;
    uVar2 = puVar9[3];
    puVar6[2] = puVar9[2];
    puVar6[3] = uVar2;
    _strncpy((char *)(puVar6 + 6),(char *)(*(int *)(param_1 + 4) + uVar10),
             (int)*(short *)(puVar9 + 4));
    *(undefined1 *)(*(short *)(puVar9 + 4) + 0x18 + (int)puVar6) = 0;
    uVar4 = (uint)*(short *)(puVar9 + 4);
    uVar11 = uVar10 + uVar4;
    puVar6[4] = uVar11;
    iVar12 = iVar12 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar10,uVar4);
    puVar6[5] = iVar12;
    uVar4 = uVar11 + puVar9[2];
    iVar12 = iVar12 + puVar9[3] + (uint)CARRY4(uVar11,puVar9[2]);
    *(undefined4 **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 4) = puVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    local_1c = *(int *)(param_1 + 0x14);
  }
  return;
}


