// Function: FUN_0040a980
// Entry: 0040a980
// Size: 220 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0040a980(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar1 = param_1[4];
  iVar7 = (int)param_3 >> 0x1f;
  do {
    lVar2 = (ulonglong)(uint)param_1[iVar6 + 5] * (ulonglong)param_2;
    uVar3 = (uint)lVar2;
    iVar4 = uVar3 + param_3;
    param_3 = (int)((ulonglong)lVar2 >> 0x20) + ((int)param_2 >> 0x1f) * param_1[iVar6 + 5] + iVar7
              + (uint)CARRY4(uVar3,param_3);
    iVar7 = 0;
    param_1[iVar6 + 5] = iVar4;
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar1);
  if (param_3 != 0) {
    if ((int)param_1[2] <= iVar1) {
      puVar5 = FUN_0040a840(param_1[1] + 1);
      if (puVar5 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      memcpy(puVar5 + 3,param_1 + 3,param_1[4] * 4 + 8);
      FUN_0040a910(param_1);
      param_1 = puVar5;
    }
    param_1[iVar1 + 5] = param_3;
    param_1[4] = iVar1 + 1;
  }
  return param_1;
}


