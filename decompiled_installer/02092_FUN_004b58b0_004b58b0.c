// Function: FUN_004b58b0
// Entry: 004b58b0
// Size: 65 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b58b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (0 < *(int *)(param_1 + 100)) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1c0) + 0x44);
    do {
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar1 * 2 + 4);
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  return;
}


