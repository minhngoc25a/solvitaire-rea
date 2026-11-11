// Function: FUN_0046ae03
// Entry: 0046ae03
// Size: 526 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0046ae03(int param_1,undefined4 param_2,undefined *param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iStack_8;
  
  bVar1 = true;
  iVar2 = (*(code *)param_3)(param_2,0x7b);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_004a3b60(*(int *)(param_1 + 8));
  if (iVar3 != 0) {
    if ((param_5 & 1) == 0) {
      FUN_0046a600(*(undefined4 **)(param_1 + 8));
      while (psVar5 = (short *)FUN_0046a560(*(int **)(param_1 + 8)), psVar5 != (short *)0x0) {
        if (bVar1) {
          bVar1 = false;
        }
        else {
          iVar2 = (*(code *)param_3)(param_2,0x2c);
        }
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_0046aa9d(*(ushort **)(psVar5 + -2),param_2,param_3);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (*(code *)param_3)(param_2,0x3a);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_0046a960(psVar5,param_2,param_3,param_4,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = 1;
      }
    }
    else {
      iStack_8 = FUN_0046aa60(param_4 + 2,param_2,param_3);
      FUN_0046a600(*(undefined4 **)(param_1 + 8));
      uVar6 = 0;
      while (uVar4 = FUN_0046a560(*(int **)(param_1 + 8)), uVar4 != 0) {
        uVar4 = FUN_0044be0a(*(short **)(uVar4 - 4));
        if ((int)uVar6 <= (int)uVar4) {
          uVar6 = uVar4;
        }
      }
      FUN_0046a600(*(undefined4 **)(param_1 + 8));
      if (iStack_8 == 0) {
        return 0;
      }
      while (psVar5 = (short *)FUN_0046a560(*(int **)(param_1 + 8)), psVar5 != (short *)0x0) {
        if (bVar1) {
          bVar1 = false;
        }
        else {
          iVar2 = (*(code *)param_3)(param_2,0x2c);
          if (iVar2 == 0) {
            return 0;
          }
          iStack_8 = FUN_0046aa60(param_4 + 2,param_2,param_3);
        }
        if (iStack_8 == 0) {
          return 0;
        }
        iVar2 = FUN_0046aa9d(*(ushort **)(psVar5 + -2),param_2,param_3);
        if (iVar2 == 0) {
          return 0;
        }
        uVar7 = param_2;
        puVar8 = param_3;
        uVar4 = FUN_0044be0a(*(short **)(psVar5 + -2));
        iVar2 = FUN_0046aa3b(uVar6 - uVar4,uVar7,puVar8);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (*(code *)param_3)(param_2,0x3a);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (*(code *)param_3)(param_2,0x20);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_0046a960(psVar5,param_2,param_3,param_4 + 4,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        iStack_8 = 1;
      }
      iVar2 = FUN_0046aa60(param_4,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  iVar2 = (*(code *)param_3)(param_2,0x7d);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}


