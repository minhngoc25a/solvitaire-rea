// Function: FUN_0049c570
// Entry: 0049c570
// Size: 152 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0049c570(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0049c400(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0xf0 + param_2 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + param_2 * 4 + 0xf0) = *puVar3;
      return puVar3;
    }
  }
  piVar1 = (int *)(param_1 + (param_2 + 0x3c) * 4);
  iVar4 = param_2;
  do {
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 1;
    if (iVar4 == 0x26) {
      uVar2 = (uint)*(byte *)(param_1 + 0x48 + param_2);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      if (uVar2 * 0xc < (uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c))) {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x40) + uVar2 * -0xc);
        *(undefined4 **)(param_1 + 0x40) = puVar3;
        return puVar3;
      }
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)*piVar1;
  } while (puVar3 == (undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0xf0 + iVar4 * 4) = *puVar3;
  FUN_0049c390(param_1,(int)puVar3,iVar4,param_2);
  return puVar3;
}


