// Function: FUN_0046df30
// Entry: 0046df30
// Size: 213 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0046df30(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  ushort uVar10;
  
  uVar1 = *(ushort *)(param_2 + 0x4a);
  if ((short)uVar1 < 0) {
    return 0;
  }
  if ((param_5 < 2) && ((uVar1 & 2) != 0)) {
    bVar9 = FUN_0046de50(param_3,(int *)(param_2 + 4),100);
    if (CONCAT31(extraout_var,bVar9) == 0) {
      *(ushort *)(param_2 + 0x4a) = uVar1 | 0x8000;
      FUN_0046f360(param_1,"inconsistent chromaticities");
      return 0;
    }
    if (param_5 == 0) {
      return 1;
    }
  }
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  iVar5 = param_3[3];
  *(int *)(param_2 + 4) = *param_3;
  *(int *)(param_2 + 8) = iVar3;
  *(int *)(param_2 + 0xc) = iVar4;
  *(int *)(param_2 + 0x10) = iVar5;
  iVar3 = param_3[5];
  iVar4 = param_3[6];
  iVar5 = param_3[7];
  *(int *)(param_2 + 0x14) = param_3[4];
  *(int *)(param_2 + 0x18) = iVar3;
  *(int *)(param_2 + 0x1c) = iVar4;
  *(int *)(param_2 + 0x20) = iVar5;
  uVar2 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(undefined4 *)(param_2 + 0x24) = *param_4;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar6;
  *(undefined4 *)(param_2 + 0x30) = uVar7;
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar2 = param_4[8];
  *(undefined4 *)(param_2 + 0x34) = param_4[4];
  *(undefined4 *)(param_2 + 0x38) = uVar6;
  *(undefined4 *)(param_2 + 0x3c) = uVar7;
  *(undefined4 *)(param_2 + 0x40) = uVar8;
  *(undefined4 *)(param_2 + 0x44) = uVar2;
  *(ushort *)(param_2 + 0x4a) = uVar1 | 2;
  bVar9 = FUN_0046de50(param_3,(int *)&DAT_0050d9e0,1000);
  uVar10 = uVar1 | 0x42;
  if (CONCAT31(extraout_var_00,bVar9) == 0) {
    uVar10 = uVar1 & 0xffbf | 2;
  }
  *(ushort *)(param_2 + 0x4a) = uVar10;
  return 2;
}


