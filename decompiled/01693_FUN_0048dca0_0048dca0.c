// Function: FUN_0048dca0
// Entry: 0048dca0
// Size: 85 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048dca0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    param_1[0xc] = 0;
    return 0;
  }
  puVar2 = param_2;
  do {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  param_1[0xc] = 1;
  param_1[1] = 0;
  FUN_0048d570(param_1,param_2,(int)puVar2 - ((int)param_2 + 1));
  param_1[4] = 0;
  param_1[7] = 0;
  return 0;
}


