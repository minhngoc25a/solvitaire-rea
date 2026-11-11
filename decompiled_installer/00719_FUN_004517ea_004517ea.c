// Function: FUN_004517ea
// Entry: 004517ea
// Size: 148 bytes
// Thunk: false
// External: false


int __fastcall FUN_004517ea(int param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_8;
  
  cVar1 = **(char **)(param_1 + 8);
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar2 = (int)cVar1 - 0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    uVar2 = (int)cVar1 - 0x57;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_1 >> 8),cVar1) - 0x41;
    if (0x19 < (byte)uVar2) goto LAB_00451854;
    uVar2 = (int)cVar1 - 0x37;
  }
  if (uVar2 < 10) {
    local_8 = 0;
    uVar3 = FUN_004846ea(*(char **)(param_1 + 8),&local_8,10);
    uVar2 = (uint)uVar3;
    if ((uVar3 == 0) || (local_8 == *(int *)(param_1 + 8))) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0x16;
      return (uint)(uint3)(uVar3 >> 8) << 8;
    }
    *(ulonglong *)(param_1 + 0x18) = uVar3;
    *(int *)(param_1 + 8) = local_8;
  }
LAB_00451854:
  return CONCAT31((int3)(uVar2 >> 8),1);
}


