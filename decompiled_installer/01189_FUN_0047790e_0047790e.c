// Function: FUN_0047790e
// Entry: 0047790e
// Size: 123 bytes
// Thunk: false
// External: false


void FUN_0047790e(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_0041fa5e();
  puVar3[2] = 0;
  puVar2 = (undefined4 *)puVar3[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (((((param_1 == -1) || (param_1 == puVar2[1])) && ((param_2 == -1 || (param_2 == puVar2[3])))
         ) && ((param_3 == -1 || (param_3 == puVar2[4])))) &&
       ((param_4 == -1 || (param_4 == puVar2[5])))) {
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


