// Function: FUN_004c4c92
// Entry: 004c4c92
// Size: 111 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004c4c92(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar1 = *(uint *)(param_5 + 0xc);
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (-1 < param_6) {
    piVar2 = (int *)(uVar1 * 0x14 + *(int *)(param_5 + 0x10) + 8);
    local_8 = uVar1;
    do {
      if (uVar3 == 0xffffffff) goto LAB_004c4cfc;
      uVar3 = uVar3 - 1;
      if (((piVar2[-6] < param_3) && (param_3 <= piVar2[-5])) || (uVar3 == 0xffffffff)) {
        param_6 = param_6 + -1;
        uVar4 = local_8;
        local_8 = uVar3;
      }
      piVar2 = piVar2 + -5;
    } while (-1 < param_6);
  }
  if ((uVar4 <= uVar1) && (uVar3 + 1 <= uVar4)) {
    param_1[3] = uVar4;
    *param_1 = param_2;
    param_1[1] = uVar3 + 1;
    param_1[2] = param_2;
    return;
  }
LAB_004c4cfc:
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


