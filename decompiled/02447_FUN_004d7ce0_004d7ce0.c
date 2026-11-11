// Function: FUN_004d7ce0
// Entry: 004d7ce0
// Size: 147 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004d7ce0(int param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  undefined4 uVar1;
  
  switch(param_6) {
  case 0:
    FUN_004d7af0((byte *)(param_2 + param_3),(byte *)param_5,(param_4 - param_3) + 1,' ',0x521588);
    return 0;
  case 1:
    FUN_004d7af0((byte *)(param_2 + param_3),(byte *)param_5,(param_4 - param_3) + 1,' ',0x521608);
    return 0;
  case 2:
  case 3:
    uVar1 = FUN_004d7b60(param_1,(uint *)(param_2 + param_3),param_5,(param_4 - param_3) + 1,0x20,
                         param_6);
    return uVar1;
  default:
    return 0xffffffe2;
  }
}


