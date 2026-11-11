// Function: FUN_004a8320
// Entry: 004a8320
// Size: 724 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8320(int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint *_Dst;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  int iStack_4;
  
  iVar2 = *(int *)(param_1 + 0x280);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_004a5f90(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x280) = iVar2 + -1;
    if (iVar2 + -1 == 1) {
      FUN_004a5f90(param_1,param_3);
      FUN_0046f3d0(param_1,0x52744c);
      return;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x74);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((uVar4 & 4) != 0) {
    *(uint *)(param_1 + 0x74) = uVar4 | 8;
  }
  _Dst = *(uint **)(param_1 + 0x2a0);
  if (_Dst == (uint *)0x0) {
LAB_004a83c5:
    _Dst = (uint *)FUN_004a4910(param_1,param_3 + 1);
    if (_Dst == (uint *)0x0) {
      FUN_0046f210(param_1,0x5262e4);
      FUN_004a5f90(param_1,param_3);
      FUN_0046f3d0(param_1,0x52386c);
      return;
    }
    _memset(_Dst,0,param_3 + 1);
    *(uint **)(param_1 + 0x2a0) = _Dst;
    *(uint *)(param_1 + 0x2a4) = param_3 + 1;
  }
  else if (*(uint *)(param_1 + 0x2a4) < param_3 + 1) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    FUN_004a48e0(param_1,_Dst);
    goto LAB_004a83c5;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,_Dst,param_3);
  iVar2 = FUN_004a5f90(param_1,0);
  if (iVar2 != 0) {
    return;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      if (*(char *)(uVar4 + (int)_Dst) == '\0') break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
    if ((uVar4 < 0x50) && (uVar4 != 0)) {
      if (param_3 < uVar4 + 5) {
LAB_004a8454:
        FUN_0046f3d0(param_1,0x527ce0);
        return;
      }
      cVar1 = *(char *)(uVar4 + 1 + (int)_Dst);
      if ((cVar1 != '\0') && ((cVar1 != '\x01' || (*(char *)(uVar4 + 2 + (int)_Dst) != '\0')))) {
        FUN_0046f3d0(param_1,0x5259b8);
        return;
      }
      uStack_20 = uVar4 + 3;
      for (uStack_1c = uStack_20;
          (uStack_1c < param_3 && (*(char *)(uStack_1c + (int)_Dst) != '\0'));
          uStack_1c = uStack_1c + 1) {
      }
      uStack_1c = uStack_1c + 1;
      for (uVar4 = uStack_1c; (uVar4 < param_3 && (*(char *)(uVar4 + (int)_Dst) != '\0'));
          uVar4 = uVar4 + 1) {
      }
      uVar4 = uVar4 + 1;
      if (cVar1 == '\0') {
        if (param_3 < uVar4) goto LAB_004a8454;
        *(undefined1 *)(uStack_24 + uVar4 + (param_3 - uVar4)) = 0;
        uStack_18 = 1;
        uStack_8 = param_3 - uVar4;
      }
      else {
        if (param_3 <= uVar4) goto LAB_004a8454;
        uStack_24 = 0xffffffff;
        iVar2 = FUN_004a9e20(param_1,param_3,uVar4,&uStack_24,1);
        if (iVar2 == 1) {
          param_2 = *(int *)(param_1 + 0x2a0);
          *(undefined1 *)(uVar4 + uStack_24 + param_2) = 0;
        }
        else {
          pcVar3 = *(char **)(param_1 + 0x9c);
          if (pcVar3 != (char *)0x0) goto LAB_004a85b4;
          *(undefined1 *)(param_2 + uStack_24 + uVar4) = 0;
        }
        uStack_18 = 2;
        uStack_8 = uStack_24;
      }
      iStack_4 = uStack_20 + param_2;
      iStack_14 = param_2;
      uStack_c = 0;
      iStack_10 = uVar4 + param_2;
      iVar2 = FUN_004a5a20(param_1,param_3,(int)&uStack_18,1);
      if (iVar2 == 0) {
        return;
      }
      FUN_0046f3d0(param_1,0x523798);
      return;
    }
  }
  pcVar3 = "bad keyword";
LAB_004a85b4:
  FUN_0046f3d0(param_1,(int)pcVar3);
  return;
}


