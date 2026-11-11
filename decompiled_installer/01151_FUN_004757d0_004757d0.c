// Function: FUN_004757d0
// Entry: 004757d0
// Size: 689 bytes
// Thunk: false
// External: false


void __cdecl FUN_004757d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_c;
  
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  FUN_004aad80((int)param_1);
  iVar3 = param_1[9];
  iStack_c = 0;
  if (0 < iVar3) {
    piVar2 = (int *)(param_1[0x31] + 0x24);
    do {
      iVar3 = 1;
      if (*(char *)((int)param_1 + 0x41) == '\0') {
        iVar4 = (uint)((char)param_1[0x12] != '\0') * 4 + 4;
        if (param_1[0x48] <= iVar4) {
          do {
            if (param_1[0x46] % (piVar2[-7] * iVar3 * 2) != 0) break;
            iVar3 = iVar3 * 2;
            iVar1 = param_1[0x48] * iVar3;
          } while (iVar1 - iVar4 == 0 || iVar1 < iVar4);
        }
      }
      iVar4 = 1;
      *piVar2 = param_1[0x48] * iVar3;
      if (*(char *)((int)param_1 + 0x41) == '\0') {
        iVar3 = (uint)((char)param_1[0x12] != '\0') * 4 + 4;
        if (param_1[0x49] <= iVar3) {
          do {
            if (param_1[0x47] % (piVar2[-6] * iVar4 * 2) != 0) break;
            iVar4 = iVar4 * 2;
            iVar1 = param_1[0x49] * iVar4;
          } while (iVar1 - iVar3 == 0 || iVar1 < iVar3);
        }
      }
      iVar3 = *piVar2;
      iVar4 = param_1[0x49] * iVar4;
      piVar2[1] = iVar4;
      iVar1 = iVar4 * 2;
      if (iVar1 < iVar3) {
        *piVar2 = iVar1;
        iVar3 = iVar1;
      }
      else if (iVar4 + iVar3 * -2 != 0 && iVar3 * 2 <= iVar4) {
        piVar2[1] = iVar3 * 2;
      }
      iVar3 = FUN_004b7740(piVar2[-7] * iVar3 * param_1[7],param_1[0x46] * param_1[0x62]);
      piVar2[2] = iVar3;
      iVar3 = FUN_004b7740(piVar2[-6] * param_1[8] * piVar2[1],param_1[0x62] * param_1[0x47]);
      piVar2[3] = iVar3;
      iStack_c = iStack_c + 1;
      iVar3 = param_1[9];
      piVar2 = piVar2 + 0x16;
    } while (iStack_c < iVar3);
  }
  iVar4 = iVar3;
  switch(param_1[0xb]) {
  case 1:
    iVar4 = 1;
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    iVar4 = 3;
    break;
  case 4:
  case 5:
    iVar4 = 4;
  }
  param_1[0x19] = iVar4;
  iVar1 = 1;
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    iVar1 = iVar4;
  }
  param_1[0x1a] = iVar1;
  if (((((char)param_1[0x44] == '\0') &&
       ((((param_1[10] == 3 || (param_1[10] == 7)) && (iVar3 == 3)) &&
        ((param_1[0xb] == 2 && (iVar4 == 3)))))) &&
      (((param_1[0x43] == 0 &&
        (((iVar3 = param_1[0x31], *(int *)(iVar3 + 8) == 2 && (*(int *)(iVar3 + 0x60) == 1)) &&
         ((*(int *)(iVar3 + 0xb8) == 1 &&
          (((*(int *)(iVar3 + 0xc) < 3 && (*(int *)(iVar3 + 100) == 1)) &&
           (*(int *)(iVar3 + 0xbc) == 1)))))))) &&
       (((iVar4 = param_1[0x48], *(int *)(iVar3 + 0x24) == iVar4 &&
         (*(int *)(iVar3 + 0x7c) == iVar4)) && (*(int *)(iVar3 + 0xd4) == iVar4)))))) &&
     (((iVar4 = param_1[0x49], *(int *)(iVar3 + 0x28) == iVar4 && (*(int *)(iVar3 + 0x80) == iVar4))
      && (*(int *)(iVar3 + 0xd8) == iVar4)))) {
    param_1[0x1b] = param_1[0x47];
    return;
  }
  param_1[0x1b] = 1;
  return;
}


