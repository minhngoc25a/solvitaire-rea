// Function: FUN_0049c2a0
// Entry: 0049c2a0
// Size: 73 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c2a0(uint *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)(param_1[2] + 1);
  *pcVar1 = *pcVar1 + (*(byte *)(param_1[2] + 1) < 0x80);
  param_1[8] = param_1[8] + 1;
  param_1[5] = 1;
  uVar2 = *(uint *)(param_1[2] + 2);
  if ((param_1[3] == 0) && (param_1[0xf] < uVar2)) {
    param_1[1] = uVar2;
    *param_1 = uVar2;
    return;
  }
  FUN_0049c900((int *)param_1);
  return;
}


