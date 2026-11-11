// Function: FUN_0049b330
// Entry: 0049b330
// Size: 256 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049b330(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_2c;
  undefined4 uStack_4;
  
  if (param_1 == 0) {
    return 0xb;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x20);
    if ((puVar2 == (undefined4 *)0x0) || ((code *)*puVar2 == (code *)0x0)) {
      puVar2 = (undefined4 *)FUN_00482949(0x40);
    }
    else {
      puVar2 = (undefined4 *)(*(code *)*puVar2)(puVar2[2],1,0x40);
    }
    *(undefined4 **)(param_1 + 0x24) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 5;
    }
    *puVar2 = 0;
    puVar2[1] = uStack_2c;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = uStack_4;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined1 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x30) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x3d) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


