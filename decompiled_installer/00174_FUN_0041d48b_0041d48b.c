// Function: FUN_0041d48b
// Entry: 0041d48b
// Size: 57 bytes
// Thunk: false
// External: false


void FUN_0041d48b(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(code **)(puVar1[1] + 0x30) == (code *)0x0) {
      FUN_0041d364(puVar1,param_2,param_3,param_4,param_5);
    }
    else {
      (**(code **)(puVar1[1] + 0x30))();
    }
  }
  return;
}


