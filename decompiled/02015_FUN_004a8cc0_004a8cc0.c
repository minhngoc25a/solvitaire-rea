// Function: FUN_004a8cc0
// Entry: 004a8cc0
// Size: 533 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8cc0(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_4;
  
  uVar3 = param_3;
  uVar2 = param_2;
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x526b9c);
    return;
  }
  if (param_3 < 4) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x527b5c);
    return;
  }
  puVar4 = FUN_004a9af0(param_1,param_3 + 1,2);
  if (puVar4 == (uint *)0x0) {
    FUN_0046f3d0(param_1,0x52386c);
    FUN_004a5f90(param_1,uVar3);
    return;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,puVar4,uVar3);
  *(undefined1 *)((int)puVar4 + uVar3) = 0;
  iVar5 = FUN_004a5f90(param_1,0);
  if (iVar5 == 0) {
    if (((char)*puVar4 != '\x01') && ((char)*puVar4 != '\x02')) {
      FUN_0046f3d0(param_1,0x5243d0);
      return;
    }
    param_2 = 1;
    uStack_4 = 0;
    uVar6 = FUN_0046ca50((int)puVar4,uVar3,&uStack_4,&param_2);
    if ((uVar6 != 0) && (param_2 < uVar3)) {
      pcVar1 = (char *)(param_2 + (int)puVar4);
      uVar6 = param_2 + 1;
      param_2 = uVar6;
      if (*pcVar1 == '\0') {
        if ((uStack_4 & 0x188) != 0x108) {
          FUN_0046f3d0(param_1,0x5266b0);
          return;
        }
        uStack_4 = 0;
        uVar7 = FUN_0046ca50((int)puVar4,uVar3,&uStack_4,&param_2);
        if ((uVar7 != 0) && (param_2 == uVar3)) {
          if ((uStack_4 & 0x188) != 0x108) {
            FUN_0046f3d0(param_1,0x5243fc);
            return;
          }
          FUN_004a57b0(param_1,uVar2,(uint)(byte)*puVar4,(uint *)((int)puVar4 + 1),
                       (uint *)(uVar6 + (int)puVar4));
          return;
        }
        FUN_0046f3d0(param_1,0x5245b4);
        return;
      }
    }
    FUN_0046f3d0(param_1,0x52464c);
  }
  return;
}


