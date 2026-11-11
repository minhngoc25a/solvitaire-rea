// Function: FUN_004aa080
// Entry: 004aa080
// Size: 371 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004aa080(int param_1,uint *param_2,uint param_3,uint *param_4,undefined4 param_5,int *param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0x11c)) {
    *(char **)(param_1 + 0x9c) = "zstream unclaimed";
    return -2;
  }
  *(undefined4 *)(param_1 + 0x90) = param_5;
  *(undefined4 *)(param_1 + 0x94) = 0;
  do {
    uVar1 = param_3;
    uVar5 = *(uint *)(param_1 + 0x88);
    if (*(uint *)(param_1 + 0x88) == 0) {
      uVar5 = *param_4;
      uVar1 = uVar5;
      if (param_3 <= uVar5) {
        uVar1 = param_3;
      }
      *param_4 = uVar5 - uVar1;
      if (uVar1 != 0) {
        FUN_00474230(param_1);
        FUN_0046bd70(param_1,param_2,uVar1);
      }
      *(uint **)(param_1 + 0x84) = param_2;
      *(uint *)(param_1 + 0x88) = uVar1;
      uVar5 = uVar1;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      iVar3 = *param_6;
      iVar2 = -1;
      if (iVar3 != -1) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0x94) = iVar2;
      *param_6 = iVar3 - iVar2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x84);
    iVar3 = 0;
    if (*param_4 == 0) {
      iVar3 = (uint)(param_7 != 0) * 2 + 2;
    }
    if ((*(char *)(param_1 + 0x158) != '\0') && (uVar5 != 0)) {
      if (0x70 < (*(byte *)*puVar4 & 0xf0)) {
        *(char **)(param_1 + 0x9c) = "invalid window size (libpng)";
        iVar3 = -3;
LAB_004aa1bb:
        *param_6 = *param_6 + *(int *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0x94) = 0;
        FUN_0046ba30(param_1,iVar3);
        return iVar3;
      }
      *(undefined1 *)(param_1 + 0x158) = 0;
    }
    uVar6 = FUN_00489550(iVar3,(uint)puVar4,puVar4,iVar3);
    iVar3 = (int)uVar6;
    if ((iVar3 != 0) || ((param_3 = uVar1, *param_6 == 0 && (*(int *)(param_1 + 0x94) == 0))))
    goto LAB_004aa1bb;
  } while( true );
}


