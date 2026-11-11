// Function: FUN_0046bed0
// Entry: 0046bed0
// Size: 178 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046bed0(uint *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + 8);
    uVar2 = param_1[0xb2];
    uVar3 = param_1[0xb3];
    uVar4 = param_1[0xb4];
    uVar5 = param_1[0xc3];
    *(uint *)(param_2 + 0x28) = param_1[0xb1];
    *(uint *)(param_2 + 0x2c) = uVar2;
    *(uint *)(param_2 + 0x30) = uVar3;
    *(uint *)(param_2 + 0x34) = uVar4;
    uVar2 = param_1[0xb6];
    uVar3 = param_1[0xb7];
    uVar4 = param_1[0xb8];
    *(uint *)(param_2 + 0x38) = param_1[0xb5];
    *(uint *)(param_2 + 0x3c) = uVar2;
    *(uint *)(param_2 + 0x40) = uVar3;
    *(uint *)(param_2 + 0x44) = uVar4;
    uVar2 = param_1[0xba];
    uVar3 = param_1[0xbb];
    uVar4 = param_1[0xbc];
    *(uint *)(param_2 + 0x48) = param_1[0xb9];
    *(uint *)(param_2 + 0x4c) = uVar2;
    *(uint *)(param_2 + 0x50) = uVar3;
    *(uint *)(param_2 + 0x54) = uVar4;
    uVar2 = param_1[0xbe];
    uVar3 = param_1[0xbf];
    uVar4 = param_1[0xc0];
    *(uint *)(param_2 + 0x58) = param_1[0xbd];
    *(uint *)(param_2 + 0x5c) = uVar2;
    *(uint *)(param_2 + 0x60) = uVar3;
    *(uint *)(param_2 + 100) = uVar4;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0xc1);
    *(uint *)(param_2 + 0x70) = uVar5;
    uVar1 = *(ushort *)(param_2 + 0x72);
    if ((short)uVar1 < 0) {
      *(uint *)(param_2 + 8) = uVar6 & 0xffffe7fa;
      FUN_0046b550(param_1,param_2,0x10,-1);
      return;
    }
    uVar5 = uVar6 | 0x800;
    if ((uVar1 & 0x80) == 0) {
      uVar5 = uVar6 & 0xfffff7ff;
    }
    uVar6 = uVar5 | 4;
    if ((uVar1 & 2) == 0) {
      uVar6 = uVar5 & 0xfffffffb;
    }
    if ((uVar1 & 1) != 0) {
      *(uint *)(param_2 + 8) = uVar6 | 1;
      return;
    }
    *(uint *)(param_2 + 8) = uVar6 & 0xfffffffe;
  }
  return;
}


