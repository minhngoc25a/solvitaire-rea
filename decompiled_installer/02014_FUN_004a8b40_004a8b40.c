// Function: FUN_004a8b40
// Entry: 004a8b40
// Size: 381 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8b40(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar4 = param_3;
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 6) != 0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x526b9c);
    return;
  }
  if (*(char *)(param_1 + 0x14f) == '\x03') {
    uVar6 = 3;
    bVar5 = 8;
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + 0x153);
    bVar5 = *(byte *)(param_1 + 0x150);
  }
  if ((param_3 == uVar6) && (param_3 < 5)) {
    FUN_00474230(param_1);
    FUN_0046bd70(param_1,&param_2,uVar6);
    iVar3 = FUN_004a5f90(param_1,0);
    if (iVar3 == 0) {
      uVar4 = 0;
      if (uVar6 != 0) {
        do {
          if ((*(byte *)((int)&param_2 + uVar4) == 0) || (bVar5 < *(byte *)((int)&param_2 + uVar4)))
          {
            FUN_0046f3d0(param_1,0x527b5c);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
      puVar1 = (undefined4 *)(param_1 + 0x1a4);
      if ((*(byte *)(param_1 + 0x14f) & 2) == 0) {
        *(undefined1 *)(param_1 + 0x1a7) = (undefined1)param_2;
        *(undefined1 *)puVar1 = (undefined1)param_2;
        *(undefined1 *)(param_1 + 0x1a5) = (undefined1)param_2;
        *(undefined1 *)(param_1 + 0x1a6) = (undefined1)param_2;
        uVar2 = param_2._1_1_;
      }
      else {
        *(undefined1 *)puVar1 = (undefined1)param_2;
        *(undefined1 *)(param_1 + 0x1a5) = param_2._1_1_;
        *(undefined1 *)(param_1 + 0x1a6) = param_2._2_1_;
        uVar2 = param_2._3_1_;
      }
      *(undefined1 *)(param_1 + 0x1a8) = uVar2;
      FUN_004a5460(param_1,param_3,puVar1);
      return;
    }
  }
  else {
    FUN_0046f3d0(param_1,0x527b5c);
    FUN_004a5f90(param_1,uVar4);
  }
  return;
}


