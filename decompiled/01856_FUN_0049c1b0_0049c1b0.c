// Function: FUN_0049c1b0
// Entry: 0049c1b0
// Size: 124 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c1b0(uint *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)param_1[2];
  *(char *)((int)puVar2 + 1) = *(char *)((int)puVar2 + 1) + '\x04';
  *(short *)(*param_1 + 2) = *(short *)(*param_1 + 2) + 4;
  if (*(byte *)((int)puVar2 + -5) < *(byte *)((int)puVar2 + 1)) {
    uVar3 = *puVar2;
    uVar1 = *(undefined2 *)(puVar2 + 1);
    *puVar2 = *(undefined4 *)((int)puVar2 + -6);
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)((int)puVar2 + -2);
    *(undefined4 *)((int)puVar2 + -6) = uVar3;
    *(undefined2 *)((int)puVar2 + -2) = uVar1;
    param_1[2] = (uint)((int)puVar2 + -6);
    if (0x7c < *(byte *)((int)puVar2 + -5)) {
      FUN_0049ccd0((int *)param_1);
    }
  }
  uVar4 = *(uint *)(param_1[2] + 2);
  if ((param_1[3] == 0) && (param_1[0xf] < uVar4)) {
    param_1[1] = uVar4;
    *param_1 = uVar4;
    return;
  }
  FUN_0049c900((int *)param_1);
  return;
}


