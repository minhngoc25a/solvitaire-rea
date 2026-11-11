// Function: FUN_00478d9b
// Entry: 00478d9b
// Size: 66 bytes
// Thunk: false
// External: false


bool FUN_00478d9b(uint param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = (param_1 & param_2) != 0xffffffff;
  if (bVar2) {
    lVar1 = (ulonglong)(param_1 + 0xb6109100) * 10000000;
    *param_3 = (int)lVar1;
    param_3[1] = (param_2 + 2 + (uint)(0x49ef6eff < param_1)) * 10000000 +
                 (int)((ulonglong)lVar1 >> 0x20);
  }
  return bVar2;
}


