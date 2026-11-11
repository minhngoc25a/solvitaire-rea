// Function: FUN_004bbfdd
// Entry: 004bbfdd
// Size: 545 bytes
// Thunk: false
// External: false


void FUN_004bbfdd(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

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
                  FUN_004bc6fa(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                               param_8);
                  return;
                }
                if (param_8 == 0xff) {
                  FUN_004bc3ff(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2);
                  return;
                }
                if (param_8 == 0) {
                  return;
                }
              }
              FUN_004bc54a(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                           param_8);
            }
            else {
              FUN_004bc88f(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                           (char)param_8);
            }
          }
          else {
            FUN_004bc49b(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,
                         (char)param_8);
          }
        }
        else if ((*(byte *)(param_1 + 0xd8) & 8) == 0) {
          if (param_8 == 0xff) {
            FUN_004bc2b0(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2);
          }
          else if (param_8 != 0) {
            FUN_004bc327(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,param_8
                        );
          }
        }
      }
      else {
        FUN_004bc1fe(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2);
      }
    }
    else {
      FUN_004bc8e2(param_1,param_2,param_3,param_4,param_5,local_8,iVar3,param_6,iVar2,param_8);
    }
  }
  return;
}


