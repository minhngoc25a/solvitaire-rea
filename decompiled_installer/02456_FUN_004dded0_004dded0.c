// Function: FUN_004dded0
// Entry: 004dded0
// Size: 127 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004dded0(int param_1,int *param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_5;
  do {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  if (param_3 < (uint)((int)puVar2 - ((int)param_5 + 1))) {
    FUN_00487380(param_1,0xffffffff,0x52b00c);
    return 0xffffffe2;
  }
  param_2[1] = 0;
  if (param_5 == (uint *)0x0) {
    FUN_0048d570(param_2,(uint *)0x0,0);
    return 0;
  }
  puVar2 = param_5;
  do {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  FUN_0048d570(param_2,param_5,(int)puVar2 - ((int)param_5 + 1));
  return 0;
}


