// Function: FUN_004a4f20
// Entry: 004a4f20
// Size: 157 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a4f20(uint *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    if ((*(ushort *)(param_2 + 0x14) != 0) && (*(ushort *)(param_2 + 0x14) < 0x101)) {
      FUN_0046b550(param_1,param_2,8,0);
      iVar2 = FUN_004a4890((int)param_1,0x200);
      *(int *)(param_2 + 0xcc) = iVar2;
      if (iVar2 != 0) {
        uVar1 = *(ushort *)(param_2 + 0x14);
        iVar3 = 0;
        *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 8;
        if (uVar1 != 0) {
          do {
            *(undefined2 *)(iVar2 + iVar3 * 2) = *(undefined2 *)(param_3 + iVar3 * 2);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)uVar1);
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
        return;
      }
      FUN_0046f1c0((int)param_1,"Insufficient memory for hIST chunk data");
      return;
    }
    FUN_0046f1c0((int)param_1,"Invalid palette size, hIST allocation skipped");
  }
  return;
}


