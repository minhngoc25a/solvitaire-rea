// Function: FUN_004a5380
// Entry: 004a5380
// Size: 215 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a5380(uint *param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return;
  }
  if (*(char *)(param_2 + 0x19) == '\x03') {
    iVar1 = 1 << (*(byte *)(param_2 + 0x18) & 0x1f);
  }
  else {
    iVar1 = 0x100;
  }
  if ((param_4 < 0) || (iVar1 < param_4)) {
    if (*(char *)(param_2 + 0x19) != '\x03') {
      FUN_0046f1c0((int)param_1,"Invalid palette length");
      return;
    }
  }
  else if (((param_4 < 1) || (param_3 != (uint *)0x0)) &&
          ((param_4 != 0 || ((param_1[0x94] & 1) != 0)))) {
    FUN_0046b550(param_1,param_2,0x1000,0);
    puVar2 = FUN_004a4830((int)param_1,0x300);
    param_1[0x4f] = (uint)puVar2;
    if (0 < param_4) {
      FUN_0044c490(puVar2,param_3,param_4 * 3);
    }
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x1000;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    *(uint **)(param_2 + 0x10) = puVar2;
    *(short *)(param_2 + 0x14) = (short)param_4;
    *(short *)(param_1 + 0x50) = (short)param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190((int)param_1);
}


