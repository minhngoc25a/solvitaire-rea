// Function: FUN_005040fb
// Entry: 005040fb
// Size: 119 bytes
// Thunk: false
// External: false


short * __cdecl FUN_005040fb(short *param_1,short *param_2)

{
  int iVar1;
  uint extraout_var;
  
  iVar1 = FUN_004247f8((uint *)&stack0xfffffff8,param_1,0x100,L"TZ");
  if (iVar1 != 0) {
    if (iVar1 == 0x22) {
      param_1 = __malloc_base(extraout_var * 2);
      if ((param_1 == (short *)0x0) ||
         (iVar1 = FUN_004247f8((uint *)&stack0xfffffff4,param_1,0x52d5b8,L"TZ"), param_2 = param_1,
         iVar1 != 0)) {
        FUN_004247be(param_2);
        param_1 = (short *)0x0;
      }
      else {
        FUN_004247be((LPVOID)0x0);
      }
    }
    else {
      param_1 = (short *)0x0;
    }
  }
  return param_1;
}


