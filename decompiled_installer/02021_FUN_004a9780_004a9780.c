// Function: FUN_004a9780
// Entry: 004a9780
// Size: 525 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a9780(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_3;
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
  uVar4 = *(uint *)(param_1 + 0x74);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((uVar4 & 4) != 0) {
    *(uint *)(param_1 + 0x74) = uVar4 | 8;
  }
  puVar2 = FUN_004a9af0(param_1,param_3,2);
  if (puVar2 == (uint *)0x0) {
    FUN_004a5f90(param_1,uVar1);
    FUN_0046f3d0(param_1,0x52386c);
    return;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,puVar2,uVar1);
  iVar3 = FUN_004a5f90(param_1,0);
  if (iVar3 == 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        if (*(char *)(uVar4 + (int)puVar2) == '\0') break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      if ((uVar4 < 0x50) && (uVar4 != 0)) {
        if (uVar1 < uVar4 + 3) {
          FUN_0046f3d0(param_1,0x527ce0);
          return;
        }
        if (*(char *)(uVar4 + 1 + (int)puVar2) != '\0') {
          FUN_0046f3d0(param_1,0x526d7c);
          return;
        }
        param_2 = 0xffffffff;
        iVar3 = FUN_004a9e20(param_1,uVar1,uVar4 + 2,&param_2,1);
        if (iVar3 != 1) {
          if (*(int *)(param_1 + 0x9c) == 0) {
            return;
          }
          FUN_0046f3d0(param_1,*(int *)(param_1 + 0x9c));
          return;
        }
        iStack_14 = *(int *)(param_1 + 0x2a0);
        if (iStack_14 != 0) {
          *(undefined1 *)(param_2 + uVar4 + 2 + iStack_14) = 0;
          iStack_10 = iStack_14 + 2 + uVar4;
          uStack_18 = 0;
          uStack_c = param_2;
          uStack_8 = 0;
          uStack_4 = 0;
          iVar3 = FUN_004a5a20(param_1,param_3,(int)&uStack_18,1);
          if (iVar3 == 0) {
            return;
          }
          FUN_0046f3d0(param_1,0x523798);
          return;
        }
        FUN_0046f3d0(param_1,0x5246e0);
        return;
      }
    }
    FUN_0046f3d0(param_1,0x5279e0);
  }
  return;
}


