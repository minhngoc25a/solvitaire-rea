// Function: FUN_00406d90
// Entry: 00406d90
// Size: 134 bytes
// Thunk: false
// External: false


void __fastcall FUN_00406d90(int *param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte local_20 [16];
  
  param_1[3] = -1;
  if (in_EAX == 0) {
    uVar1 = param_1[1];
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x40) == 0) {
        pbVar3 = local_20;
      }
      else {
        local_20[0] = 0x20;
        pbVar3 = local_20 + 1;
      }
    }
    else {
      local_20[0] = 0x2b;
      pbVar3 = local_20 + 1;
    }
  }
  else {
    uVar1 = param_1[1];
    pbVar3 = local_20 + 1;
    local_20[0] = 0x2d;
  }
  iVar2 = 0;
  do {
    pbVar3[iVar2] = *(byte *)(param_2 + iVar2) & 0xdf | (byte)uVar1 & 0x20;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  FUN_00406cf0(param_1,(int)(pbVar3 + (3 - (int)local_20)));
  return;
}


