// Function: FUN_005047a0
// Entry: 005047a0
// Size: 537 bytes
// Thunk: false
// External: false


bool __cdecl FUN_005047a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_20;
  uint local_1c;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  iVar2 = FUN_00503f8b(&local_8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
LAB_005049ab:
    bVar1 = false;
  }
  else {
    uVar4 = param_1[5];
    if ((uVar4 != DAT_005421c0) || (uVar4 != DAT_005421cc)) {
      if (DAT_00544b40 == 0) {
        FUN_0050465d(0,1,uVar4,((int)uVar4 < 0x6b) + 3,(0x6a < (int)uVar4) + 1,0,0,2,0,0,0);
        FUN_0050465d(1,1,param_1[5],(0x6a < (int)uVar4) + 10,(uint)((int)uVar4 < 0x6b) * 4 + 1,0,0,2
                     ,0,0,0);
      }
      else {
        if (DAT_00544be0 != 0) {
          local_1c = (uint)DAT_00544be6;
          uVar3 = 0;
          local_20 = 0;
        }
        else {
          local_20 = (uint)DAT_00544be4;
          uVar3 = (uint)DAT_00544be6;
          local_1c = 0;
        }
        FUN_0050465d(0,(uint)(DAT_00544be0 == 0),uVar4,(uint)DAT_00544be2,uVar3,local_20,local_1c,
                     (uint)DAT_00544be8,(uint)DAT_00544bea,(uint)DAT_00544bec,(uint)DAT_00544bee);
        if (DAT_00544b8c != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = (uint)DAT_00544b92;
        }
        else {
          uVar4 = (uint)DAT_00544b92;
          uVar3 = (uint)DAT_00544b90;
        }
        FUN_0050465d(1,(uint)(DAT_00544b8c == 0),param_1[5],(uint)DAT_00544b8e,uVar4,uVar3,uVar5,
                     (uint)DAT_00544b94,(uint)DAT_00544b96,(uint)DAT_00544b98,(uint)DAT_00544b9a);
      }
    }
    iVar2 = param_1[7];
    if (DAT_005421c4 < DAT_005421d0) {
      if ((iVar2 < DAT_005421c4) || (DAT_005421d0 < iVar2)) goto LAB_005049ab;
      if ((iVar2 <= DAT_005421c4) || (DAT_005421d0 <= iVar2)) {
LAB_0050497d:
        iVar6 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_005421c4) {
          return DAT_005421c8 <= iVar6;
        }
        return iVar6 < DAT_005421d4;
      }
    }
    else if ((DAT_005421d0 <= iVar2) && (iVar2 <= DAT_005421c4)) {
      if ((iVar2 <= DAT_005421d0) || (DAT_005421c4 <= iVar2)) goto LAB_0050497d;
      goto LAB_005049ab;
    }
    bVar1 = true;
  }
  return bVar1;
}


