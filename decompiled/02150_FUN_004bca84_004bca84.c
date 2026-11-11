// Function: FUN_004bca84
// Entry: 004bca84
// Size: 531 bytes
// Thunk: false
// External: false


void FUN_004bca84(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    param_5 = (*(int *)(param_1 + 0x84) - param_5) - param_7;
  }
  if (param_4 < 0) {
    param_6 = param_6 + param_4;
    local_8 = -param_4;
    param_4 = 0;
  }
  iVar2 = param_7;
  if (param_5 < 0) {
    iVar2 = param_7 + param_5;
    iVar3 = -param_5;
    param_5 = 0;
  }
  if (*(int *)(param_1 + 0x80) < param_4 + param_6) {
    param_6 = *(int *)(param_1 + 0x80) - param_4;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 < param_5 + iVar2) {
    iVar2 = iVar1 - param_5;
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar3 = (param_7 - iVar3) + -1;
  }
  if (((0 < param_6) && (0 < iVar2)) && (param_2 != 0)) {
    if ((*(byte *)(param_1 + 0xd8) & 0x80) == 0) {
      if ((*(byte *)(param_1 + 0xd8) & 2) == 0) {
        if (*(int *)(param_1 + 0xd4) == 4) {
          if ((*(uint *)(param_1 + 0xd8) & 0x100) == 0) {
            if ((*(byte *)(param_1 + 0xd8) & 8) == 0) {
              if ((*(byte *)(param_1 + 0xd8) & 0x10) == 0) {
                if ((*(byte *)(param_1 + 0xd8) & 0x20) != 0) {
                  FUN_004bd573(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                               param_8);
                  return;
                }
                if (param_9 == 0) {
                  FUN_004bcff7(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2);
                  return;
                }
              }
              FUN_004bd1ce(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                           param_8);
            }
            else {
              FUN_004bd8f6(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                           param_8);
            }
          }
          else {
            FUN_004bd093(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,param_8
                        );
          }
        }
        else if ((*(byte *)(param_1 + 0xd8) & 8) == 0) {
          if ((param_9 == 0) && ((*(byte *)(param_1 + 0xd8) & 0x30) == 0)) {
            FUN_004bcd49(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2);
          }
          else {
            FUN_004bcde3(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,param_8
                        );
          }
        }
      }
      else {
        FUN_004bcc97(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2);
      }
    }
    else {
      FUN_004bda1a(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,param_8);
    }
  }
  return;
}


