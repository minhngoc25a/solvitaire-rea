// Function: FUN_0047adcf
// Entry: 0047adcf
// Size: 119 bytes
// Thunk: false
// External: false


void FUN_0047adcf(int param_1,HANDLE param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  ushort local_46;
  int local_44;
  
  iVar1 = GetObjectW(param_2,0x54,local_58);
  if (iVar1 == 0x54) {
    iVar1 = FUN_0047a6f7(local_54,(uint)local_46);
    if (local_44 != 0) {
      if (local_46 == 0x20) {
        FUN_004bca84(param_1,local_44,iVar1,param_3,param_4,local_54,local_50,param_5,param_6);
      }
      else if (local_46 == 0x18) {
        FUN_004bbfdd(param_1,local_44,iVar1,param_3,param_4,local_54,local_50,param_5);
      }
    }
  }
  return;
}


