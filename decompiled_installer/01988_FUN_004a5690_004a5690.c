// Function: FUN_004a5690
// Entry: 004a5690
// Size: 276 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a5690(uint *param_1,int param_2,uint *param_3,uint param_4,undefined8 *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 != (uint *)0x0) {
    FUN_0046b550(param_1,param_2,0x2000,0);
    if (param_4 - 1 < 0x100) {
      puVar3 = (uint *)FUN_004a47f0((int)param_1,0x100);
      *(uint **)(param_2 + 0x9c) = puVar3;
      FUN_0044c490(puVar3,param_3,param_4);
    }
    param_1[0x6c] = *(uint *)(param_2 + 0x9c);
  }
  if (param_5 == (undefined8 *)0x0) goto LAB_004a5789;
  if (*(byte *)(param_2 + 0x18) < 0x10) {
    iVar4 = (1 << (*(byte *)(param_2 + 0x18) & 0x1f)) + -1;
    if (*(char *)(param_2 + 0x19) == '\0') {
      uVar1 = *(ushort *)(param_5 + 1);
joined_r0x004a5742:
      if (iVar4 < (int)(uint)uVar1) {
LAB_004a5744:
        FUN_0046f1c0((int)param_1,"tRNS chunk has out-of-range samples for bit_depth");
      }
    }
    else if (*(char *)(param_2 + 0x19) == '\x02') {
      if (((int)(uint)*(ushort *)((int)param_5 + 2) <= iVar4) &&
         ((int)(uint)*(ushort *)((int)param_5 + 4) <= iVar4)) {
        uVar1 = *(ushort *)((int)param_5 + 6);
        goto joined_r0x004a5742;
      }
      goto LAB_004a5744;
    }
  }
  uVar2 = *(undefined2 *)(param_5 + 1);
  *(undefined8 *)(param_2 + 0xa0) = *param_5;
  *(undefined2 *)(param_2 + 0xa8) = uVar2;
  if (param_4 == 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x2000;
    *(undefined2 *)(param_2 + 0x16) = 1;
    return;
  }
LAB_004a5789:
  *(short *)(param_2 + 0x16) = (short)param_4;
  if (param_4 != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x2000;
  }
  return;
}


