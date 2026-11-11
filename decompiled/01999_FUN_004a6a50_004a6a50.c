// Function: FUN_004a6a50
// Entry: 004a6a50
// Size: 965 bytes
// Thunk: false
// External: false


void __fastcall FUN_004a6a50(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint *_Dst;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 uStack_408;
  undefined1 uStack_407;
  undefined1 uStack_406;
  undefined1 uStack_405;
  undefined4 local_404;
  uint auStack_400 [256];
  
  uVar5 = 0;
  if (param_4 != 0) {
    uVar5 = param_5;
  }
  *(uint *)(param_3 + 0x90) = param_4;
  *(undefined4 *)(param_3 + 0x94) = 0;
  do {
    uVar7 = *(uint *)(param_3 + 0x88);
    local_404 = uVar5;
    if (uVar7 == 0) {
      uVar7 = *(uint *)(param_3 + 0x134);
      while (uVar7 == 0) {
        FUN_004a5f90(param_3,0);
        *(undefined4 *)(param_3 + 0x2ac) = 0x21;
        FUN_00474230(param_3);
        uVar7 = CONCAT31(CONCAT21(CONCAT11(uStack_408,uStack_407),uStack_406),uStack_405);
        if (0x7fffffff < uVar7) goto LAB_004a6e09;
        *(uint *)(param_3 + 0x11c) =
             CONCAT31(CONCAT21(CONCAT11((undefined1)local_404,local_404._1_1_),local_404._2_1_),
                      local_404._3_1_);
        FUN_0046bd50(param_3);
        FUN_0046bd70(param_3,&local_404,4);
        uVar5 = *(uint *)(param_3 + 0x11c);
        iVar4 = 1;
        uVar3 = uVar5;
        do {
          uVar2 = uVar3 & 0xff;
          if ((0x39 < uVar2 - 0x41) || ((0x5a < uVar2 && (uVar2 < 0x61)))) goto LAB_004a6e09;
          iVar4 = iVar4 + 1;
          uVar3 = uVar3 >> 8;
        } while (iVar4 < 5);
        uVar3 = 0x7fffffff;
        if (*(uint *)(param_3 + 0x284) - 1 < 0x7ffffffe) {
          uVar3 = *(uint *)(param_3 + 0x284);
        }
        if (uVar5 == 0x49444154) {
          iVar4 = 1;
          if (*(char *)(param_3 + 0x14c) != '\0') {
            iVar4 = 7;
          }
          uVar2 = ((8 < *(byte *)(param_3 + 0x150)) + 1) * (uint)*(byte *)(param_3 + 0x153) *
                  *(int *)(param_3 + 0x100) + iVar4;
          if ((uint)(0xffffffff / (ulonglong)uVar2) < *(uint *)(param_3 + 0x104)) {
            uVar6 = 0x7fffffff;
          }
          else {
            uVar6 = *(uint *)(param_3 + 0x104) * uVar2;
          }
          if (0x7f36 < uVar2) {
            uVar2 = 0x7f36;
          }
          uVar5 = *(uint *)(param_3 + 0x11c);
          uVar6 = (uVar6 / uVar2) * 5 + 0xb + uVar6;
          uVar2 = 0x7fffffff;
          if (uVar6 < 0x7fffffff) {
            uVar2 = uVar6;
          }
          if (uVar3 < uVar2) {
            uVar3 = uVar2;
          }
        }
        if (uVar3 < uVar7) goto LAB_004a6e09;
        *(undefined4 *)(param_3 + 0x2ac) = 0x41;
        *(uint *)(param_3 + 0x134) = uVar7;
        param_4 = param_5;
        if (uVar5 != 0x49444154) goto LAB_004a6e09;
      }
      _Dst = *(uint **)(param_3 + 0x2a0);
      if (*(uint *)(param_3 + 0x2a8) <= uVar7) {
        uVar7 = *(uint *)(param_3 + 0x2a8);
      }
      if (_Dst == (uint *)0x0) {
LAB_004a6c8a:
        _Dst = (uint *)FUN_004a4910(param_3,uVar7);
        if (_Dst == (uint *)0x0) goto LAB_004a6e09;
        _memset(_Dst,0,uVar7);
        *(uint **)(param_3 + 0x2a0) = _Dst;
        *(uint *)(param_3 + 0x2a4) = uVar7;
      }
      else if (*(uint *)(param_3 + 0x2a4) < uVar7) {
        *(undefined4 *)(param_3 + 0x2a0) = 0;
        *(undefined4 *)(param_3 + 0x2a4) = 0;
        FUN_004a48e0(param_3,_Dst);
        goto LAB_004a6c8a;
      }
      FUN_00474230(param_3);
      FUN_0046bd70(param_3,_Dst,uVar7);
      *(uint **)(param_3 + 0x84) = _Dst;
      *(int *)(param_3 + 0x134) = *(int *)(param_3 + 0x134) - uVar7;
      *(uint *)(param_3 + 0x88) = uVar7;
      param_2 = extraout_EDX;
      uVar5 = auStack_400[0];
    }
    puVar1 = (undefined4 *)(param_3 + 0x84);
    if (param_4 == 0) {
      *(uint **)(param_3 + 0x90) = auStack_400;
      uVar3 = 0x400;
    }
    else {
      uVar3 = 0xffffffff;
      if (uVar5 != 0xffffffff) {
        uVar3 = uVar5;
      }
      uVar5 = uVar5 - uVar3;
    }
    *(uint *)(param_3 + 0x94) = uVar3;
    if ((*(char *)(param_3 + 0x158) == '\0') || (uVar7 == 0)) {
LAB_004a6d40:
      uVar8 = FUN_00489550(puVar1,param_2,puVar1,0);
      iVar4 = (int)uVar8;
    }
    else {
      if ((*(byte *)*puVar1 & 0xf0) < 0x71) {
        *(undefined1 *)(param_3 + 0x158) = 0;
        goto LAB_004a6d40;
      }
      *(char **)(param_3 + 0x9c) = "invalid window size (libpng)";
      iVar4 = -3;
    }
    param_2 = *(uint *)(param_3 + 0x94);
    uVar7 = param_2;
    if (param_4 == 0) {
      uVar7 = 0x400 - param_2;
    }
    uVar5 = uVar5 + uVar7;
    *(undefined4 *)(param_3 + 0x94) = 0;
    local_404 = uVar5;
    if (iVar4 == 1) {
      *(uint *)(param_3 + 0x74) = *(uint *)(param_3 + 0x74) | 8;
      *(uint *)(param_3 + 0x78) = *(uint *)(param_3 + 0x78) | 8;
      *(undefined4 *)(param_3 + 0x90) = 0;
      if ((*(int *)(param_3 + 0x88) != 0) || (*(int *)(param_3 + 0x134) != 0)) {
        FUN_0046f3d0(param_3,0x528990);
      }
      if (uVar5 != 0) {
        if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0046f190(param_3);
        }
        FUN_0046f3d0(param_3,0x528938);
      }
      return;
    }
    if (iVar4 != 0) {
      FUN_0046ba30(param_3,iVar4);
      if (param_4 == 0) {
        FUN_0046f3d0(param_3,*(int *)(param_3 + 0x9c));
        return;
      }
LAB_004a6e09:
                    /* WARNING: Subroutine does not return */
      FUN_0046f190(param_3);
    }
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}


