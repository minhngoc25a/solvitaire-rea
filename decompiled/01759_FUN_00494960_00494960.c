// Function: FUN_00494960
// Entry: 00494960
// Size: 80 bytes
// Thunk: false
// External: false


int __cdecl FUN_00494960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar1 = FUN_00494960(*(int *)(param_1 + 0xc)), iVar1 != 0))
  {
    return iVar1;
  }
  if (*(int *)(param_1 + 0x38) != 1) {
    return -0x1e;
  }
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x14))(param_1);
    uVar2 = 2;
    if (iVar1 != 0) {
      uVar2 = 0x8000;
    }
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x38) = 2;
  return 0;
}


