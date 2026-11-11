// Function: FUN_0049bd90
// Entry: 0049bd90
// Size: 149 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049bd90(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  
  iVar5 = 5;
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  do {
    if ((uVar6 < 0xff000000) || (uVar1 != 0)) {
      cVar4 = (char)param_1[3];
      do {
        uVar1 = param_1[6];
        uVar8 = __aullshr(0x20,param_1[1]);
        (**(code **)(uVar1 + 4))(uVar1,(char)uVar8 + cVar4);
        uVar1 = param_1[4];
        cVar4 = -1;
        uVar2 = uVar1 - 1;
        param_1[4] = uVar2;
        uVar3 = (param_1[5] - 1) + (uint)(uVar1 != 0);
        param_1[5] = uVar3;
      } while (uVar2 != 0 || uVar3 != 0);
      uVar6 = *param_1;
      *(char *)(param_1 + 3) = (char)(uVar6 >> 0x18);
    }
    bVar7 = 0xfffffffe < uVar2;
    uVar2 = uVar2 + 1;
    param_1[4] = uVar2;
    uVar3 = uVar3 + bVar7;
    uVar6 = uVar6 << 8;
    uVar1 = 0;
    param_1[5] = uVar3;
    *param_1 = uVar6;
    param_1[1] = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


