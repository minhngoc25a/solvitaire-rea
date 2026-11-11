// Function: FUN_00496640
// Entry: 00496640
// Size: 290 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00496640(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    piVar5 = *(int **)(param_1 + 0x1c);
    piVar1 = (int *)(param_1 + 0x1c);
    if (((piVar5 != (int *)0x0) && (*piVar5 == param_1)) &&
       (((iVar2 = piVar5[1], iVar2 == 0x2a || ((iVar2 == 0x39 || (iVar2 == 0x45)))) ||
        ((iVar2 == 0x49 ||
         ((((iVar2 == 0x5b || (iVar2 == 0x67)) || (iVar2 == 0x71)) || (iVar2 == 0x29a)))))))) {
      iVar2 = *(int *)(*piVar1 + 4);
      iVar3 = *(int *)(*piVar1 + 8);
      if (iVar3 != 0) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar3);
      }
      if (*(int *)(*piVar1 + 0x44) != 0) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(*piVar1 + 0x44));
      }
      puVar6 = (undefined4 *)(param_1 + 0x24);
      piVar5 = (int *)(param_1 + 0x1c);
      if (*(int *)(*piVar1 + 0x40) != 0) {
        (*(code *)*puVar6)(*(undefined4 *)(param_1 + 0x28),*(int *)(*piVar1 + 0x40));
      }
      if (*(int *)(*piVar5 + 0x38) != 0) {
        (*(code *)*puVar6)(*(undefined4 *)(param_1 + 0x28),*(int *)(*piVar5 + 0x38));
      }
      (*(code *)*puVar6)(*(undefined4 *)(param_1 + 0x28),*piVar5);
      *piVar5 = 0;
      uVar4 = 0;
      if (iVar2 == 0x71) {
        uVar4 = 0xfffffffd;
      }
      return uVar4;
    }
  }
  return 0xfffffffe;
}


