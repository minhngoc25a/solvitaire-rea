// Function: FUN_00434fb0
// Entry: 00434fb0
// Size: 115 bytes
// Thunk: false
// External: false


int __cdecl FUN_00434fb0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return -2;
  }
  iVar3 = FUN_00435170(param_1);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x2b8) != 0) {
      piVar1 = (int *)(param_1 + 0x2c8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (iVar3 != 0) {
        piVar2 = *(int **)(param_1 + 0x2b8);
        if ((((piVar2 != (int *)0x0) && (*(code **)(*piVar2 + 4) != (code *)0x0)) &&
            (iVar3 = (**(code **)(*piVar2 + 4))(piVar2,piVar2[2],piVar2[3]), iVar3 != 0)) &&
           (iVar3 != -0x1d)) {
          return iVar3;
        }
        LOCK();
        *piVar1 = 0;
        UNLOCK();
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x14) = 0;
    UNLOCK();
    return 0;
  }
  return 0;
}


