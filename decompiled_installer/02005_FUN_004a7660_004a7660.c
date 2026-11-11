// Function: FUN_004a7660
// Entry: 004a7660
// Size: 616 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7660(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  char cStack_c;
  byte bStack_b;
  byte abStack_8 [2];
  ushort uStack_6;
  undefined4 uStack_4;
  
  uVar4 = *(uint *)(param_1 + 0x74);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if (((uVar4 & 4) != 0) || ((bVar1 = *(byte *)(param_1 + 0x14f), bVar1 == 3 && ((uVar4 & 2) == 0)))
     ) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x526b9c);
    return;
  }
  if (bVar1 == 3) {
    uVar4 = 1;
  }
  else {
    uVar4 = (bVar1 & 2 | 1) * 2;
  }
  if (param_3 == uVar4) {
    FUN_00474230(param_1);
    FUN_0046bd70(param_1,(uint *)&bStack_10,uVar4);
    iVar2 = FUN_004a5f90(param_1,0);
    if (iVar2 != 0) {
      return;
    }
    if (*(byte *)(param_1 + 0x14f) == 3) {
      abStack_8[0] = bStack_10;
      if ((param_2 == 0) || (*(ushort *)(param_2 + 0x14) == 0)) {
        uStack_4 = 0;
        uStack_6 = 0;
      }
      else {
        if (*(ushort *)(param_2 + 0x14) <= (ushort)bStack_10) {
          FUN_0046f3d0(param_1,0x523c20);
          return;
        }
        pbVar3 = (byte *)((uint)bStack_10 * 3 + *(int *)(param_1 + 0x13c));
        uStack_6 = (ushort)*pbVar3;
        uStack_4 = (uint)CONCAT12(pbVar3[2],(ushort)pbVar3[1]);
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x150);
      if ((*(byte *)(param_1 + 0x14f) & 2) == 0) {
        if ((bVar1 < 9) && ((bStack_10 != 0 || ((uint)(1 << (bVar1 & 0x1f)) <= (uint)bStack_f)))) {
          FUN_0046f3d0(param_1,0x5261b8);
          return;
        }
        abStack_8[0] = 0;
        uStack_6 = (ushort)bStack_10 * 0x100 + (ushort)bStack_f;
        uStack_4 = CONCAT22(uStack_6,uStack_6);
        FUN_004a4ee0(param_1,param_2,(undefined8 *)abStack_8);
        return;
      }
      if ((bVar1 < 9) && (((bStack_10 != 0 || (bStack_e != 0)) || (cStack_c != '\0')))) {
        FUN_0046f3d0(param_1,0x525278);
        return;
      }
      abStack_8[0] = 0;
      uStack_6 = (ushort)bStack_10 * 0x100 + (ushort)bStack_f;
      uStack_4 = CONCAT22(CONCAT11(bStack_e,cStack_c) * 0x100 + (ushort)bStack_b,
                          (ushort)bStack_e * 0x100 + (ushort)bStack_d);
    }
    FUN_004a4ee0(param_1,param_2,(undefined8 *)abStack_8);
    return;
  }
  FUN_004a5f90(param_1,param_3);
  FUN_0046f3d0(param_1,0x527b5c);
  return;
}


