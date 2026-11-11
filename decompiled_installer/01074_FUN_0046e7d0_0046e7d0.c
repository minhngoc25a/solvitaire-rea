// Function: FUN_0046e7d0
// Entry: 0046e7d0
// Size: 719 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046e7d0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined3 extraout_var;
  int unaff_EBX;
  uint unaff_EDI;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return;
  }
  FUN_004a5d90((int)param_1,param_2);
LAB_0046e7f6:
  uVar4 = FUN_004a5e10((int)param_1);
  uVar1 = param_1[0x47];
  uVar2 = param_1[0x1d];
  if (uVar1 == 0x49444154) {
    if (((uVar2 & 1) == 0) || ((*(char *)((int)param_1 + 0x14f) == '\x03' && ((uVar2 & 2) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_0046f190((int)param_1);
    }
    if ((uVar2 & 8) != 0) {
      FUN_0046f3d0((int)param_1,0x527a50);
    }
    param_1[0x1d] = param_1[0x1d] | 4;
  }
  else {
    if ((uVar2 & 4) != 0) {
      param_1[0x1d] = uVar2 | 0x2008;
    }
    if (uVar1 == 0x49484452) {
      FUN_004a7240((int)param_1,param_2,uVar4);
      goto LAB_0046e7f6;
    }
    if (uVar1 == 0x49454e44) {
      FUN_004a7610((int)param_1,param_2,uVar4);
      goto LAB_0046e7f6;
    }
  }
  uVar3 = FUN_0046bde0((int)param_1,uVar1);
  if (CONCAT31(extraout_var,uVar3) == 0) {
    if (uVar1 == 0x504c5445) {
      FUN_004a7400(param_1,param_2,uVar4,unaff_EDI);
    }
    else {
      if (uVar1 == 0x49444154) {
        param_1[0x4d] = uVar4;
        return;
      }
      if (uVar1 == 0x624b4744) {
        FUN_004a7660((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x6348524d) {
        FUN_004a78d0(param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x67414d41) {
        FUN_004a7bd0(param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x68495354) {
        FUN_004a7ca0(param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x6f464673) {
        FUN_004a8600((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x7043414c) {
        FUN_004a8790((int)param_1,param_2,uVar4,(byte)unaff_EDI,unaff_EBX);
      }
      else if (uVar1 == 0x7343414c) {
        FUN_004a8cc0((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x70485973) {
        FUN_004a8a20((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x73424954) {
        FUN_004a8b40((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x73524742) {
        FUN_004a9190(param_1,(byte)param_2,uVar4);
      }
      else if (uVar1 == 0x69434350) {
        FUN_004a7de0(param_1,param_2,uVar4,unaff_EDI);
      }
      else if (uVar1 == 0x73504c54) {
        FUN_004a8ee0((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x74455874) {
        FUN_004a9270((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x74494d45) {
        FUN_004a9420((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x74524e53) {
        FUN_004a9520(param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x7a545874) {
        FUN_004a9780((int)param_1,param_2,uVar4);
      }
      else if (uVar1 == 0x69545874) {
        FUN_004a8320((int)param_1,param_2,uVar4);
      }
      else {
        FUN_004a9990((int)param_1,param_2,uVar4,0);
      }
    }
  }
  else {
    FUN_004a9990((int)param_1,param_2,uVar4,CONCAT31(extraout_var,uVar3));
    if (uVar1 == 0x504c5445) {
      param_1[0x1d] = param_1[0x1d] | 2;
    }
    else if (uVar1 == 0x49444154) {
      param_1[0x4d] = 0;
      return;
    }
  }
  goto LAB_0046e7f6;
}


