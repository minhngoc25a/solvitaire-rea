// Function: FUN_00485f50
// Entry: 00485f50
// Size: 255 bytes
// Thunk: false
// External: false


undefined4 FUN_00485f50(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  
  if ((param_1 == 0) || (((param_3 != 0 && (param_3 != 1)) || (4 < param_2)))) {
    return 0xfffffffe;
  }
  pcVar1 = *(code **)(param_1 + 0x24);
  if (pcVar1 == (code *)0x0) {
    *(code **)(param_1 + 0x24) = FUN_00486210;
    pcVar1 = FUN_00486210;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(code **)(param_1 + 0x28) = FUN_00486230;
  }
  if (pcVar1 == FUN_00486210) {
    piVar2 = (int *)FUN_00482949(0xfa74);
  }
  else {
    piVar2 = (int *)(*pcVar1)(*(undefined4 *)(param_1 + 0x2c),0xfa74,1);
  }
  if (piVar2 == (int *)0x0) {
    return 0xfffffffd;
  }
  *piVar2 = param_1;
  *(int **)(param_1 + 0x20) = piVar2;
  piVar2[1] = 10;
  piVar2[8] = 0;
  piVar2[7] = 0;
  piVar2[0x319] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  piVar2[0xc] = param_2;
  *(char *)(piVar2 + 10) = (char)param_3;
  piVar2[0x315] = 0;
  piVar2[0x314] = 0;
  piVar2[0x313] = 0;
  piVar2[0xb] = 0;
  return 0;
}


