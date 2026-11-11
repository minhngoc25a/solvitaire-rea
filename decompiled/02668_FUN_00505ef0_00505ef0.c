// Function: FUN_00505ef0
// Entry: 00505ef0
// Size: 628 bytes
// Thunk: false
// External: false


void __cdecl FUN_00505ef0(uint *param_1,int *param_2,uint *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  puVar3 = param_1;
  uVar8 = param_1[0x437c];
  if (param_1[0x437b] != uVar8) {
    *param_4 = param_1[uVar8 * 0xb + 0x4382] - uVar8;
    *param_3 = param_1[param_1[0x437c] * 0xb + 0x4383];
    param_1[0x437c] = param_1[param_1[0x437c] * 0xb + 0x4382];
    return;
  }
  if (param_2[6] == 0) {
    if (0x7f < param_1[0x4369]) {
      FUN_00506280((uint)param_1);
    }
    if (0xf < param_1[0x437a]) {
      local_14 = param_1 + 0x436a;
      local_18 = 0;
      do {
        param_1 = (uint *)0x4;
        uVar7 = 0;
        iVar5 = 1;
        uVar8 = local_18;
        do {
          iVar1 = iVar5 * 2;
          uVar4 = uVar8 & 1;
          uVar8 = uVar8 >> 1;
          iVar5 = uVar4 + iVar5 * 2;
          uVar7 = uVar7 + (byte)(&DAT_00522710)
                                [(uint)(*(ushort *)((int)puVar3 + iVar1 + 0x70f0) >> 4) ^
                                 -uVar4 >> 4 & 0x7f];
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
        local_18 = local_18 + 1;
        *local_14 = uVar7;
        local_14 = local_14 + 1;
      } while (local_18 < 0x10);
      puVar3[0x437a] = 0;
    }
  }
  param_1 = (uint *)FUN_00506480((int)puVar3,param_2,param_3,param_4,param_5);
  if (param_1 != (uint *)0xffffffff) {
    local_10 = puVar3[0x7d];
    uStack_c = puVar3[0x7e];
    uStack_8 = puVar3[0x7f];
    uStack_4 = puVar3[0x80];
    puVar6 = (uint *)0x1;
    if ((uint *)0x1 < param_1) {
      do {
        uVar8 = FUN_00509370(param_2,(int *)(puVar3 + 0x2a5),(int)(puVar3 + 0x81));
        puVar3[0x2a6] = uVar8;
        if ((uint)param_2[0x12] <= uVar8) break;
        uVar8 = (param_2[8] - param_2[5]) + 1;
        if (0xfffU - (int)puVar6 <= uVar8) {
          uVar8 = 0xfffU - (int)puVar6;
        }
        param_1 = (uint *)FUN_00506a60(puVar3,(int *)&local_10,(byte *)(*param_2 + -1 + param_2[5]),
                                       (uint)param_1,param_5 + (int)puVar6,(uint)puVar6,
                                       param_2[0x12],uVar8);
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (puVar6 < param_1);
    }
    puVar3[0x437b] = (uint)puVar6;
    uVar8 = puVar3[(int)puVar6 * 0xb + 0x4383];
    puVar9 = (uint *)puVar3[(int)puVar6 * 0xb + 0x4382];
    do {
      if ((char)puVar3[(int)puVar6 * 0xb + 0x437e] != '\0') {
        puVar3[(int)puVar9 * 0xb + 0x4383] = 0xffffffff;
        *(undefined1 *)(puVar3 + (int)puVar9 * 0xb + 0x437e) = 0;
        puVar3[(int)puVar9 * 0xb + 0x4382] = (int)puVar9 - 1;
        if (*(char *)((int)puVar3 + (int)puVar6 * 0x2c + 0x10df9) != '\0') {
          *(undefined1 *)(puVar3 + (int)puVar9 * 0xb + 0x4373) = 0;
          puVar3[(int)puVar9 * 0xb + 0x4377] = puVar3[(int)puVar6 * 0xb + 0x437f];
          puVar3[(int)puVar9 * 0xb + 0x4378] = puVar3[(int)puVar6 * 0xb + 0x4380];
        }
      }
      puVar2 = (uint *)puVar3[(int)puVar9 * 0xb + 0x4382];
      uVar7 = puVar3[(int)puVar9 * 0xb + 0x4383];
      puVar3[(int)puVar9 * 0xb + 0x4382] = (uint)puVar6;
      puVar3[(int)puVar9 * 0xb + 0x4383] = uVar8;
      bVar10 = puVar9 != (uint *)0x0;
      puVar6 = puVar9;
      uVar8 = uVar7;
      puVar9 = puVar2;
    } while (bVar10);
    puVar3[0x437c] = puVar3[0x4382];
    *param_4 = puVar3[0x4382];
    *param_3 = puVar3[0x4383];
  }
  return;
}


