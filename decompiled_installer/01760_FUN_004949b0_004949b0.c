// Function: FUN_004949b0
// Entry: 004949b0
// Size: 85 bytes
// Thunk: false
// External: false


int __cdecl FUN_004949b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  for (iVar1 = *(int *)(param_1 + 0x9c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (*(int *)(iVar1 + 0x38) == 2) {
      if (*(code **)(iVar1 + 0x1c) == (code *)0x0) {
        *(undefined4 *)(iVar1 + 0x38) = 4;
      }
      else {
        iVar2 = (**(code **)(iVar1 + 0x1c))(iVar1);
        uVar3 = 4;
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
        }
        if (iVar2 != 0) {
          uVar3 = 0x8000;
        }
        *(undefined4 *)(iVar1 + 0x38) = uVar3;
      }
    }
  }
  return iVar4;
}


