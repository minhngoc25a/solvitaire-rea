// Function: FUN_004eb160
// Entry: 004eb160
// Size: 298 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eb160(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 10;
  if (*(int *)(param_1 + 0x1f0) < 7) {
    uVar1 = 7;
  }
  *(undefined4 *)(param_1 + 0x1f0) = uVar1;
  FUN_004eb080(param_1,(ushort *)(param_1 + 0x7110),param_2,param_4,*(char *)(param_1 + 0xa9c));
  uVar5 = param_3;
  if (4 < param_3) {
    iVar2 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar5 = (param_3 >> ((char)iVar2 - 1U & 0x1f) & 1) + iVar2 * 2;
  }
  iVar2 = param_4 - 2;
  if (5 < param_4) {
    iVar2 = 3;
  }
  FUN_004ea4f0(param_1,iVar2 * 0x80 + 0x6e0c + param_1,6,uVar5);
  if (3 < uVar5) {
    iVar3 = (uVar5 >> 1) - 1;
    iVar2 = (uVar5 & 1 | 2) << ((byte)iVar3 & 0x1f);
    uVar4 = param_3 - iVar2;
    if (uVar5 < 0xe) {
      FUN_004ea540(param_1,param_1 + ((iVar2 - uVar5) + 0x3805) * 2,iVar3,uVar4);
    }
    else {
      iVar2 = (uVar5 >> 1) - 5;
      do {
        iVar2 = iVar2 + -1;
        *(uint *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) =
             ((uVar4 >> 4) >> ((byte)iVar2 & 0x1f) & 1) + 2;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      } while (iVar2 != 0);
      FUN_004ea540(param_1,param_1 + 0x70f0,4,uVar4 & 0xf);
      *(int *)(param_1 + 0x10de8) = *(int *)(param_1 + 0x10de8) + 1;
    }
  }
  *(int *)(param_1 + 0x10da4) = *(int *)(param_1 + 0x10da4) + 1;
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1f8);
  uVar1 = *(undefined4 *)(param_1 + 500);
  *(uint *)(param_1 + 500) = param_3;
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  return;
}


