// Function: FUN_004893c0
// Entry: 004893c0
// Size: 64 bytes
// Thunk: false
// External: false


undefined8 __cdecl
FUN_004893c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(code **)(iVar1 + 0x84) == (code *)0x0) {
    FUN_00487380(iVar1,0xffffffff,0x5278a4);
    return 0xffffffffffffffe7;
  }
  uVar2 = (**(code **)(iVar1 + 0x84))(iVar1,*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_4)
  ;
  return uVar2;
}


