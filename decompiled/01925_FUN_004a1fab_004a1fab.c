// Function: FUN_004a1fab
// Entry: 004a1fab
// Size: 221 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a1fab(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *local_10;
  byte *local_c;
  undefined4 local_4;
  
  uVar5 = 1;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    local_4 = 0;
    local_10 = param_1 + 1;
    *param_2 = *param_1;
    local_c = param_2 + 1;
    if (1 < param_3) {
      do {
        uVar2 = FUN_004a2088((int *)&local_10);
        if (uVar2 == 0) {
          *local_c = *local_10;
          local_c = local_c + 1;
          iVar1 = 1;
        }
        else {
          iVar1 = FUN_004a20ca((int *)&local_10);
          iVar3 = FUN_004a20ca((int *)&local_10);
          pbVar4 = local_c + -((*local_10 - 0x1ff) + iVar3 * 0x100);
          iVar1 = iVar1 + 2;
          for (iVar3 = iVar1; 0 < iVar3; iVar3 = iVar3 + -1) {
            *local_c = *pbVar4;
            local_c = local_c + 1;
            pbVar4 = pbVar4 + 1;
          }
        }
        local_10 = local_10 + 1;
        uVar5 = uVar5 + iVar1;
      } while (uVar5 < param_3);
    }
    iVar1 = (int)local_10 - (int)param_1;
  }
  return iVar1;
}


