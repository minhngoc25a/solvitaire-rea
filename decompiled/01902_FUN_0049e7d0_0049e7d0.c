// Function: FUN_0049e7d0
// Entry: 0049e7d0
// Size: 105 bytes
// Thunk: false
// External: false


int __cdecl FUN_0049e7d0(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar5 = 0x100;
  uVar3 = param_2 | 0x100;
  do {
    param_3 = param_3 * 2;
    uVar1 = uVar3 >> 8;
    uVar2 = uVar3 >> 7;
    uVar3 = uVar3 * 2;
    iVar4 = iVar4 + *(int *)(param_4 +
                            ((uint)(*(ushort *)(param_1 + (uVar1 + (uVar5 & param_3) + uVar5) * 2)
                                   >> 4) ^ -(uVar2 & 1) >> 4 & 0x7f) * 4);
    uVar5 = uVar5 & ~(uVar3 ^ param_3);
  } while (uVar3 < 0x10000);
  return iVar4;
}


