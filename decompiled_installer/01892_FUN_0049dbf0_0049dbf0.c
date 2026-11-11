// Function: FUN_0049dbf0
// Entry: 0049dbf0
// Size: 334 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049dbf0(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_2 + 8) & 0xfffffffc;
  uVar3 = *(uint *)(uVar8 + 8) & 0xfffffffc;
  uVar4 = (uint)(uVar8 == *(uint *)(uVar3 + 4));
  uVar6 = uVar4 ^ 1;
  iVar1 = *(int *)(uVar3 + uVar6 * 4);
  while( true ) {
    uVar2 = uVar3;
    if ((iVar1 == 0) || ((*(uint *)(iVar1 + 8) & 1) == 0)) {
      uVar3 = *(uint *)(uVar8 + uVar6 * 4);
      if (param_2 == uVar3) {
        uVar7 = uVar6 ^ 1;
        uVar5 = *(uint *)(uVar8 + 8) & 0xfffffffc;
        if (uVar3 != 0) {
          *(uint *)(uVar5 + (*(uint *)(uVar8 + 8) >> 1 & 1) * 4) = uVar3;
          *(undefined4 *)(uVar8 + uVar6 * 4) = *(undefined4 *)(uVar3 + uVar7 * 4);
          *(uint *)(uVar3 + uVar7 * 4) = uVar8;
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) & 3 | uVar5;
          uVar5 = *(uint *)(uVar8 + 8) & 3 | uVar3;
          *(uint *)(uVar8 + 8) = uVar5;
          uVar5 = (*(uint *)(uVar3 + 8) ^ uVar5) & 3;
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) ^ uVar5;
          uVar5 = *(uint *)(uVar8 + 8) ^ uVar5;
          uVar3 = uVar5 | 2;
          if (uVar7 == 0) {
            uVar3 = uVar5 & 0xfffffffd;
          }
          *(uint *)(uVar8 + 8) = uVar3;
          iVar1 = *(int *)(uVar8 + uVar6 * 4);
          if (iVar1 != 0) {
            *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 3 | uVar8;
            iVar1 = *(int *)(uVar8 + uVar6 * 4);
            uVar8 = *(uint *)(iVar1 + 8);
            if (uVar6 == 0) {
              uVar8 = uVar8 & 0xfffffffd;
            }
            else {
              uVar8 = uVar8 | 2;
            }
            *(uint *)(iVar1 + 8) = uVar8;
          }
        }
      }
      FUN_0049de40(uVar2,uVar4);
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xfffffffe;
      return;
    }
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffe;
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) & 0xfffffffe;
    if (*param_1 == uVar2) {
      return;
    }
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 1;
    uVar8 = *(uint *)(uVar2 + 8) & 0xfffffffc;
    if (uVar8 == 0) break;
    if ((*(uint *)(uVar8 + 8) & 1) == 0) {
      return;
    }
    uVar3 = *(uint *)(uVar8 + 8) & 0xfffffffc;
    uVar4 = (uint)(uVar8 == *(uint *)(uVar3 + 4));
    uVar6 = uVar4 ^ 1;
    iVar1 = *(int *)(uVar3 + uVar6 * 4);
    param_2 = uVar2;
  }
  return;
}


