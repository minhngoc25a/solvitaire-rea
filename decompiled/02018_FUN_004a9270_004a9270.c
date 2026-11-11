// Function: FUN_004a9270
// Entry: 004a9270
// Size: 418 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a9270(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint *_Dst;
  int iVar3;
  uint *puVar4;
  undefined4 uStack_18;
  uint *puStack_14;
  uint *puStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_1 + 0x280);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      FUN_004a5f90(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x280) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      FUN_004a5f90(param_1,param_3);
      FUN_0046f3d0(param_1,0x52744c);
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x74);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((uVar2 & 4) != 0) {
    *(uint *)(param_1 + 0x74) = uVar2 | 8;
  }
  _Dst = *(uint **)(param_1 + 0x2a0);
  uVar2 = param_3 + 1;
  if (_Dst != (uint *)0x0) {
    if (uVar2 <= *(uint *)(param_1 + 0x2a4)) goto LAB_004a933d;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    FUN_004a48e0(param_1,_Dst);
  }
  _Dst = (uint *)FUN_004a4910(param_1,uVar2);
  if (_Dst == (uint *)0x0) {
    FUN_0046f210(param_1,0x5262e4);
    FUN_0046f3d0(param_1,0x52386c);
    return;
  }
  _memset(_Dst,0,uVar2);
  *(uint **)(param_1 + 0x2a0) = _Dst;
  *(uint *)(param_1 + 0x2a4) = uVar2;
LAB_004a933d:
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,_Dst,param_3);
  iVar3 = FUN_004a5f90(param_1,0);
  if (iVar3 == 0) {
    *(char *)((int)_Dst + param_3) = '\0';
    cVar1 = (char)*_Dst;
    puVar4 = _Dst;
    while (cVar1 != '\0') {
      puVar4 = (uint *)((int)puVar4 + 1);
      cVar1 = *(char *)puVar4;
    }
    uStack_18 = 0xffffffff;
    puStack_10 = (uint *)((int)puVar4 + 1);
    if (puVar4 == (uint *)((int)_Dst + param_3)) {
      puStack_10 = puVar4;
    }
    uStack_4 = 0;
    uStack_8 = 0;
    puVar4 = puStack_10;
    do {
      uVar2 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar2 != '\0');
    iStack_c = (int)puVar4 - (int)((int)puStack_10 + 1);
    puStack_14 = _Dst;
    iVar3 = FUN_004a5a20(param_1,param_3,(int)&uStack_18,1);
    if (iVar3 != 0) {
      FUN_0046f1c0(param_1,"Insufficient memory to process text chunk");
      return;
    }
  }
  return;
}


