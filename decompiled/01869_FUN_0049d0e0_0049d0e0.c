// Function: FUN_0049d0e0
// Entry: 0049d0e0
// Size: 115 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049d0e0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  
  if ((*param_1 < 0xff000000) || (uVar3 = *param_1, param_1[1] != 0)) {
    cVar4 = (char)param_1[3];
    do {
      uVar3 = param_1[6];
      uVar5 = __aullshr(0x20,param_1[1]);
      (**(code **)(uVar3 + 4))(uVar3,(char)uVar5 + cVar4);
      cVar4 = -1;
      puVar1 = param_1 + 4;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      param_1[5] = (param_1[5] - 1) + (uint)(uVar3 != 0);
    } while (param_1[4] != 0 || param_1[5] != 0);
    uVar3 = *param_1;
    *(char *)(param_1 + 3) = (char)(uVar3 >> 0x18);
  }
  puVar1 = param_1 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  param_1[1] = 0;
  param_1[5] = param_1[5] + (uint)(0xfffffffe < uVar2);
  *param_1 = uVar3 << 8;
  return;
}


