// Function: FUN_0040abe0
// Entry: 0040abe0
// Size: 385 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0040abe0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  if (((param_2 & 3) != 0) &&
     (param_1 = FUN_0040a980(param_1,*(uint *)(&DAT_0040db5c + (param_2 & 3) * 4),0),
     param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar3 = (int)param_2 >> 2;
  if (uVar3 != 0) {
    piVar2 = DAT_00410080;
    if (DAT_00410080 == (int *)0x0) {
      FUN_0040a720();
      piVar2 = DAT_00410080;
      if (DAT_00410080 == (int *)0x0) {
        piVar2 = FUN_0040a840(1);
        if (piVar2 == (int *)0x0) {
          DAT_00410080 = (int *)0x0;
          return (undefined4 *)0x0;
        }
        piVar2[5] = 0x271;
        piVar2[4] = 1;
        DAT_00410080 = piVar2;
        *piVar2 = 0;
      }
      if (DAT_004109c8 == 2) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004109f8);
      }
    }
    if ((uVar3 & 1) != 0) goto LAB_0040ac29;
    while (uVar3 = (int)uVar3 >> 1, piVar4 = piVar2, uVar3 != 0) {
      while( true ) {
        piVar2 = (int *)*piVar4;
        if (piVar2 == (int *)0x0) {
          FUN_0040a720();
          piVar2 = (int *)*piVar4;
          if (piVar2 == (int *)0x0) {
            piVar2 = FUN_0040aa90((int)piVar4,(int)piVar4);
            *piVar4 = (int)piVar2;
            if (piVar2 == (int *)0x0) {
              return (undefined4 *)0x0;
            }
            *piVar2 = 0;
          }
          if (DAT_004109c8 == 2) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004109f8);
          }
        }
        if ((uVar3 & 1) == 0) break;
LAB_0040ac29:
        puVar1 = FUN_0040aa90((int)param_1,(int)piVar2);
        if (puVar1 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        FUN_0040a910(param_1);
        uVar3 = (int)uVar3 >> 1;
        param_1 = puVar1;
        piVar4 = piVar2;
        if (uVar3 == 0) {
          return puVar1;
        }
      }
    }
  }
  return param_1;
}


