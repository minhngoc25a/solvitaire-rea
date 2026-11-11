// Function: FUN_004a78d0
// Entry: 004a78d0
// Size: 755 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a78d0(uint *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if ((param_1[0x1d] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if ((param_1[0x1d] & 6) == 0) {
    if (param_3 != 0x20) {
      FUN_004a5f90((int)param_1,param_3);
      FUN_0046f3d0((int)param_1,0x527b5c);
      return;
    }
    FUN_00474230((int)param_1);
    FUN_0046bd70((int)param_1,(uint *)&uStack_3c,0x20);
    iVar2 = FUN_004a5f90((int)param_1,0);
    if (iVar2 == 0) {
      uVar3 = CONCAT31(CONCAT21(CONCAT11(uStack_3c,uStack_3b),uStack_3a),uStack_39);
      uStack_4 = 0xffffffff;
      if (uVar3 < 0x80000000) {
        uStack_4 = uVar3;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_38,uStack_37),uStack_36),uStack_35);
      uVar3 = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uVar3 = uVar4;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_34,uStack_33),uStack_32),uStack_31);
      uStack_1c = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uStack_1c = uVar4;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_30,uStack_2f),uStack_2e),uStack_2d);
      uStack_18 = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uStack_18 = uVar4;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_2c,uStack_2b),uStack_2a),uStack_29);
      uStack_14 = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uStack_14 = uVar4;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_28,uStack_27),uStack_26),uStack_25);
      uStack_10 = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uStack_10 = uVar4;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_24,uStack_23),uStack_22),uStack_21);
      uStack_c = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uStack_c = uVar4;
      }
      uVar4 = CONCAT31(CONCAT21(CONCAT11(uStack_20,uStack_1f),uStack_1e),uStack_1d);
      uStack_8 = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uStack_8 = uVar4;
      }
      if (((((uStack_4 == 0xffffffff) || (uVar3 == 0xffffffff)) || (uStack_1c == 0xffffffff)) ||
          ((uStack_18 == 0xffffffff || (uStack_14 == 0xffffffff)))) ||
         ((uStack_10 == 0xffffffff || ((uStack_c == 0xffffffff || (uStack_8 == 0xffffffff)))))) {
        FUN_0046f3d0((int)param_1,0x524c6c);
      }
      else {
        uVar1 = *(ushort *)((int)param_1 + 0x30e);
        if (-1 < (short)uVar1) {
          if ((uVar1 & 0x10) == 0) {
            *(ushort *)((int)param_1 + 0x30e) = uVar1 | 0x10;
            FUN_0046bf90((int)param_1,(int)(param_1 + 0xb1),&uStack_1c,1);
            FUN_0046bed0(param_1,0x20);
            return;
          }
          *(ushort *)((int)param_1 + 0x30e) = uVar1 | 0x8000;
          FUN_0046bed0(param_1,0x20);
          FUN_0046f3d0((int)param_1,0x526b9c);
          return;
        }
      }
    }
    return;
  }
  FUN_004a5f90((int)param_1,param_3);
  FUN_0046f3d0((int)param_1,0x5279c0);
  return;
}


