// Function: FUN_004775a7
// Entry: 004775a7
// Size: 74 bytes
// Thunk: false
// External: false


void FUN_004775a7(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_0041fa5e();
  puVar3[2] = 0;
  puVar2 = (undefined4 *)puVar3[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar2[4] == param_1) {
      if (puVar2 == (undefined4 *)puVar3[1]) {
        puVar3[1] = puVar1;
      }
      if ((undefined4 *)puVar3[2] != (undefined4 *)0x0) {
        *(undefined4 *)puVar3[2] = puVar1;
      }
      FUN_00478c4a((int *)*puVar3,(int)puVar2);
      puVar2 = puVar1;
    }
    else {
      puVar3[2] = puVar2;
      puVar2 = puVar1;
    }
  }
  return;
}


