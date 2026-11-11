// Function: FUN_0040a910
// Entry: 0040a910
// Size: 89 bytes
// Thunk: false
// External: false


void __cdecl FUN_0040a910(undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if (9 < (int)param_1[1]) {
      free(param_1);
      return;
    }
    FUN_0040a720();
    bVar2 = DAT_004109c8 == 2;
    uVar1 = *(undefined4 *)(&DAT_004109a0 + param_1[1] * 4);
    *(undefined4 **)(&DAT_004109a0 + param_1[1] * 4) = param_1;
    *param_1 = uVar1;
    if (bVar2) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004109e0);
      return;
    }
  }
  return;
}


