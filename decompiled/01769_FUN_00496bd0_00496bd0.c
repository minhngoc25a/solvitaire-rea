// Function: FUN_00496bd0
// Entry: 00496bd0
// Size: 556 bytes
// Thunk: false
// External: false


void __cdecl FUN_00496bd0(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  size_t _Size;
  uint _Size_00;
  
  iVar3 = param_1[0xb];
  piVar1 = param_1 + 0xe;
  puVar2 = (uint *)(param_1 + 0x5ad);
  while( true ) {
    uVar8 = (param_1[0xf] - param_1[0x1d]) - param_1[0x1b];
    if ((uint)(param_1[0xb] + -0x106 + iVar3) <= (uint)param_1[0x1b]) {
      FUN_0044c490((uint *)*piVar1,(uint *)(*piVar1 + iVar3),iVar3 - uVar8);
      param_1[0x1c] = param_1[0x1c] - iVar3;
      uVar5 = param_1[0x1b] - iVar3;
      param_1[0x17] = param_1[0x17] - iVar3;
      param_1[0x1b] = uVar5;
      if (uVar5 < *puVar2) {
        *puVar2 = uVar5;
      }
      FUN_00496b60((int)param_1);
      uVar8 = uVar8 + iVar3;
    }
    piVar4 = (int *)*param_1;
    uVar5 = piVar4[1];
    if (uVar5 == 0) break;
    puVar7 = (uint *)(param_1[0x1d] + param_1[0x1b] + *piVar1);
    if (uVar5 <= uVar8) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) {
      piVar4[1] = uVar5 - uVar8;
      FUN_0044c490(puVar7,(uint *)*piVar4,uVar8);
      if (*(int *)(piVar4[7] + 0x18) == 1) {
        uVar5 = thunk_FUN_004a4c70(piVar4[0xc],(byte *)puVar7,uVar8);
LAB_00496cb0:
        piVar4[0xc] = uVar5;
      }
      else if (*(int *)(piVar4[7] + 0x18) == 2) {
        uVar5 = thunk_FUN_0048b320(piVar4[0xc],puVar7,uVar8);
        goto LAB_00496cb0;
      }
      *piVar4 = *piVar4 + uVar8;
      piVar4[2] = piVar4[2] + uVar8;
    }
    uVar8 = uVar8 + param_1[0x1d];
    param_1[0x1d] = uVar8;
    if (2 < uVar8 + *puVar2) {
      uVar6 = param_1[0x1b] - *puVar2;
      uVar5 = (uint)*(byte *)(uVar6 + *piVar1);
      param_1[0x12] = uVar5;
      param_1[0x12] =
           ((uint)*(byte *)(uVar6 + 1 + *piVar1) ^ uVar5 << ((byte)param_1[0x16] & 0x1f)) &
           param_1[0x15];
      uVar5 = *puVar2;
      do {
        if (uVar5 == 0) break;
        uVar8 = ((uint)*(byte *)(uVar6 + 2 + *piVar1) ^
                param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
        param_1[0x12] = uVar8;
        *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar6) * 2) =
             *(undefined2 *)(param_1[0x11] + uVar8 * 2);
        *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)uVar6;
        uVar6 = uVar6 + 1;
        uVar8 = param_1[0x1d];
        uVar5 = *puVar2 - 1;
        *puVar2 = uVar5;
      } while (2 < uVar8 + uVar5);
    }
    if ((0x105 < uVar8) || (*(int *)(*param_1 + 4) == 0)) break;
  }
  uVar8 = param_1[0x5b0];
  uVar5 = param_1[0xf];
  if (uVar8 < uVar5) {
    uVar6 = param_1[0x1b] + param_1[0x1d];
    if (uVar8 < uVar6) {
      _Size = uVar5 - uVar6;
      if (0x102 < _Size) {
        _Size = 0x102;
      }
      _memset((void *)(param_1[0xe] + uVar6),0,_Size);
      param_1[0x5b0] = _Size + uVar6;
      return;
    }
    if (uVar8 < uVar6 + 0x102) {
      uVar6 = (uVar6 - uVar8) + 0x102;
      _Size_00 = uVar5 - uVar8;
      if (uVar6 <= uVar5 - uVar8) {
        _Size_00 = uVar6;
      }
      _memset((void *)(param_1[0xe] + uVar8),0,_Size_00);
      param_1[0x5b0] = param_1[0x5b0] + _Size_00;
    }
  }
  return;
}


