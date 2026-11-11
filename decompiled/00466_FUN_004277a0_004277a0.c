// Function: FUN_004277a0
// Entry: 004277a0
// Size: 389 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004277a0(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  SIZE_T SVar4;
  undefined1 ****ppppuVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 ***local_400 [256];
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffffe;
  }
  puVar9 = &stack0x00000010;
  puVar8 = (undefined4 *)0x0;
  ppppuVar5 = local_400;
  iVar7 = 0x400;
  iVar6 = param_3;
  puVar1 = (uint *)FUN_00417ffc();
  uVar2 = FUN_004544af(*puVar1 | 2,puVar1[1],ppppuVar5,iVar7,iVar6,puVar8,puVar9);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  if (-1 < (int)uVar2) {
    if (uVar2 < 0x400) {
      uVar3 = FUN_004276f0(param_1,param_2,(int)local_400);
      return uVar3;
    }
    puVar8 = (undefined4 *)(param_1 + 0x24);
    SVar4 = uVar2 + 1;
    if (puVar8 == (undefined4 *)0x0) {
      ppppuVar5 = (undefined1 ****)FUN_00482949(SVar4);
    }
    else {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        return 0xfffffffc;
      }
      ppppuVar5 = (undefined1 ****)(**(code **)(param_1 + 0x28))(SVar4,*puVar8);
    }
    if (ppppuVar5 == (undefined1 ****)0x0) {
      return 0xfffffffc;
    }
    iVar6 = FUN_00435300(ppppuVar5,SVar4,param_3,&stack0x00000010);
    if (-1 < iVar6) {
      uVar3 = FUN_004276f0(param_1,param_2,(int)ppppuVar5);
      if (puVar8 == (undefined4 *)0x0) {
        FUN_0047d191(ppppuVar5);
      }
      else if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(ppppuVar5,*puVar8);
        return uVar3;
      }
      return uVar3;
    }
    if (puVar8 == (undefined4 *)0x0) {
      FUN_0047d191(ppppuVar5);
    }
    else if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(ppppuVar5,*puVar8);
      return 0xfffffffd;
    }
    return 0xfffffffd;
  }
  return 0xfffffffd;
}


