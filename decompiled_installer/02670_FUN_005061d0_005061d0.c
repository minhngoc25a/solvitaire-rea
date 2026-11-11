// Function: FUN_005061d0
// Entry: 005061d0
// Size: 175 bytes
// Thunk: false
// External: false


int __cdecl
FUN_005061d0(int param_1,uint param_2,uint param_3,char param_4,uint param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = 0;
  bVar1 = (byte)*(undefined4 *)(param_1 + 0xaa4);
  iVar6 = param_1 + 0xaac +
          ((param_3 >> (8 - bVar1 & 0x1f)) +
          ((*(uint *)(param_1 + 0xaa8) & param_2) << (bVar1 & 0x1f))) * 0x600;
  if (param_4 == '\0') {
    iVar5 = FUN_00505ea0(iVar6,8,param_6);
    return iVar5;
  }
  uVar7 = 0x100;
  uVar4 = param_6 + 0x100;
  do {
    param_5 = param_5 * 2;
    uVar2 = uVar4 >> 8;
    uVar3 = uVar4 >> 7;
    uVar4 = uVar4 * 2;
    iVar5 = iVar5 + (uint)(byte)(&DAT_00522710)
                                [(uint)(*(ushort *)(iVar6 + (uVar2 + (uVar7 & param_5) + uVar7) * 2)
                                       >> 4) ^ -(uVar3 & 1) >> 4 & 0x7f];
    uVar7 = uVar7 & ~(param_5 ^ uVar4);
  } while (uVar4 < 0x10000);
  return iVar5;
}


