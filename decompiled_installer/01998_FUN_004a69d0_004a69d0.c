// Function: FUN_004a69d0
// Entry: 004a69d0
// Size: 119 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004a69d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  
  if (param_5 - 1U < 4) {
    if (*(int *)(param_1 + 0x2b4) == 0) {
      puVar1 = &LAB_004aa4f0;
      *(undefined1 **)(param_1 + 0x2b4) = &LAB_004aa300;
      *(undefined1 **)(param_1 + 0x2b8) = &LAB_004aa340;
      *(undefined1 **)(param_1 + 700) = &LAB_004aa3e0;
      if ((*(byte *)(param_1 + 0x152) + 7 & 0xfffffff8) == 8) {
        puVar1 = &LAB_004aa440;
      }
      *(undefined1 **)(param_1 + 0x2c0) = puVar1;
    }
    (**(code **)(param_1 + 0x2b0 + param_5 * 4))(param_2,param_3,param_4);
  }
  return;
}


