// Function: FUN_004d15a0
// Entry: 004d15a0
// Size: 242 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d15a0(int param_1,ushort *param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_4;
  
  iVar3 = 0;
  local_4 = 0xffffffff;
  uVar2 = param_2[1];
  param_2[param_3 * 2 + 3] = 0xffff;
  if (-1 < param_3) {
    iVar7 = 0x8a;
    if (uVar2 != 0) {
      iVar7 = 7;
    }
    param_2 = param_2 + 3;
    iVar4 = (uVar2 != 0) + 3;
    param_3 = param_3 + 1;
    uVar5 = (uint)uVar2;
    do {
      iVar3 = iVar3 + 1;
      uVar6 = (uint)*param_2;
      if ((iVar7 <= iVar3) || (uVar5 != uVar6)) {
        if (iVar3 < iVar4) {
          psVar1 = (short *)(param_1 + 0xa7c + uVar5 * 4);
          *psVar1 = *psVar1 + (short)iVar3;
        }
        else if (uVar5 == 0) {
          if (iVar3 < 0xb) {
            *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_4) {
            psVar1 = (short *)(param_1 + 0xa7c + uVar5 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar3 = 0;
        local_4 = uVar5;
        if (uVar6 == 0) {
          iVar7 = 0x8a;
          iVar4 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar7 = 6;
          iVar4 = 3;
        }
        else {
          iVar7 = 7;
          iVar4 = 4;
        }
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
      uVar5 = uVar6;
    } while (param_3 != 0);
  }
  return;
}


