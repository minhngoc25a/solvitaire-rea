// Function: FUN_00493c40
// Entry: 00493c40
// Size: 128 bytes
// Thunk: false
// External: false


int __cdecl FUN_00493c40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  piVar1 = *(int **)(param_1 + 0x308);
  *(int **)(param_1 + 0x310) = piVar1;
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    do {
      piVar4 = (int *)*piVar4;
      iVar6 = iVar6 + 1;
    } while (piVar4 != (int *)0x0);
    if ((iVar6 == 1) && (piVar1[2] == 0 && piVar1[3] == 0)) {
      uVar7 = FUN_0048c180(param_1);
      iVar5 = (int)((ulonglong)uVar7 >> 0x20);
      if ((iVar5 <= piVar1[5]) && ((iVar5 < piVar1[5] || ((uint)uVar7 <= (uint)piVar1[4])))) {
        puVar3 = *(undefined4 **)(param_1 + 0x308);
        while (puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar3;
          FUN_0047d191(puVar3);
          *(undefined4 **)(param_1 + 0x308) = puVar2;
          puVar3 = puVar2;
        }
        *(undefined4 *)(param_1 + 0x30c) = 0;
        return 0;
      }
    }
  }
  return iVar6;
}


