// Function: FUN_0049ae3b
// Entry: 0049ae3b
// Size: 113 bytes
// Thunk: false
// External: false


undefined8 FUN_0049ae3b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = 0xffffffffffffffff;
  if (iVar1 != 0) {
    if (param_2 == 1) {
      uVar2 = FUN_0048bbd0(iVar1);
      uVar3 = 0xffffffffffffffff;
      if (uVar2 != 0) {
        uVar3 = FUN_0048bbb0(*(int *)(param_1 + 0x14));
      }
    }
    else if (param_2 == 0) {
      uVar2 = FUN_0048bc00(iVar1);
      uVar3 = 0xffffffffffffffff;
      if (uVar2 != 0) {
        uVar3 = FUN_0048bbe0(*(int *)(param_1 + 0x14));
      }
    }
    else {
      uVar3 = 0xffffffffffffffff;
      if ((param_2 == 2) && (uVar2 = FUN_0048bfe0(iVar1), uVar3 = 0xffffffffffffffff, uVar2 != 0)) {
        uVar3 = FUN_0048bfc0(*(int *)(param_1 + 0x14));
      }
    }
  }
  return uVar3;
}


