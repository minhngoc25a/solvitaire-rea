// Function: FUN_0049adf6
// Entry: 0049adf6
// Size: 27 bytes
// Thunk: false
// External: false


undefined8 __fastcall FUN_0049adf6(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0048c180(*(int *)(param_3 + 0x14));
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar1 = (undefined4)uVar2;
  }
  return CONCAT44(param_2,uVar1);
}


