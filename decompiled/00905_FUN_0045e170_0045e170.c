// Function: FUN_0045e170
// Entry: 0045e170
// Size: 160 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0045e170(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  do {
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar1 = FUN_00494920(*(uint **)(param_1 + 0xc),*(undefined4 *)(param_2 + 0x48),
                           *(uint *)(param_2 + 0x4c));
      if (iVar1 != 0) {
        return 0xffffffe2;
      }
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x4c);
    }
    if ((param_3 == 0) && (*(int *)(param_2 + 0xc) == 0)) {
      return 0;
    }
    uVar2 = FUN_00495c50((int *)(param_2 + 8),-(uint)(param_3 != 0) & 4);
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        return 0;
      }
      FUN_00487380(*(int *)(param_1 + 8),0xffffffff,0x5282a4);
      return 0xffffffe2;
    }
  } while ((param_3 != 0) || (*(int *)(param_2 + 0xc) != 0));
  return 0;
}


