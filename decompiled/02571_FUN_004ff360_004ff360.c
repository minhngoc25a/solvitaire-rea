// Function: FUN_004ff360
// Entry: 004ff360
// Size: 271 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ff360(uint *param_1,undefined4 *param_2,uint param_3,int *param_4,int param_5)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined4 local_14;
  uint local_10 [2];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  puVar5 = (ushort *)*param_2;
  puVar2 = puVar5;
  if (param_1 == (uint *)0x0) {
    while ((iVar3 = FUN_00507833((byte *)local_10,(uint)*puVar5,param_4,param_5), iVar3 != -1 &&
           ((iVar3 == 0 || (*(char *)((int)local_10 + iVar3 + -1) != '\0'))))) {
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while( true ) {
      local_14 = puVar2;
      puVar4 = param_1;
      if (param_3 < 4) {
        puVar4 = local_10;
      }
      uVar1 = FUN_00507833((byte *)puVar4,(uint)*puVar5,param_4,param_5);
      if (uVar1 == 0xffffffff) {
        *param_2 = local_14;
        goto LAB_004ff460;
      }
      if (puVar4 != param_1) {
        puVar2 = local_14;
        if (param_3 < uVar1) goto LAB_004ff3f3;
        FUN_0044c490(param_1,puVar4,uVar1);
      }
      if ((uVar1 != 0) && (*(char *)((int)param_1 + (uVar1 - 1)) == '\0')) break;
      param_1 = (uint *)(uVar1 + (int)param_1);
      puVar5 = puVar5 + 1;
      if (uVar1 != 0) {
        local_14 = puVar5;
      }
      param_3 = param_3 - uVar1;
      puVar2 = local_14;
    }
    puVar2 = (ushort *)0x0;
LAB_004ff3f3:
    *param_2 = puVar2;
  }
LAB_004ff460:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


