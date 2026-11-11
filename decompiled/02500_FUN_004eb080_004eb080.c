// Function: FUN_004eb080
// Entry: 004eb080
// Size: 223 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eb080(int param_1,ushort *param_2,int param_3,int param_4,char param_5)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_4 - 2;
  if (uVar2 < 8) {
    *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = 0;
    iVar3 = 3;
    *(ushort **)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    puVar1 = param_2 + param_3 * 8 + 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = 1;
    uVar2 = param_4 - 10;
    *(ushort **)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_2;
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar3;
    iVar3 = param_1 + iVar3 * 4;
    if (uVar2 < 8) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(ushort **)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_2 + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar3 = 3;
      puVar1 = param_2 + param_3 * 8 + 0x82;
    }
    else {
      *(undefined4 *)(iVar3 + 0x20) = 1;
      *(ushort **)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_2 + 1;
      puVar1 = param_2 + 0x102;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar3 = 8;
      uVar2 = param_4 - 0x12;
    }
  }
  FUN_004ea4f0(param_1,(int)puVar1,iVar3,uVar2);
  if (param_5 == '\0') {
    puVar1 = param_2 + param_3 * 2 + 0x2404;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (*(int *)puVar1 == 0) {
      FUN_004eaec0(param_2,param_3);
    }
  }
  return;
}


