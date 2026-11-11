// Function: FUN_0046b4f0
// Entry: 0046b4f0
// Size: 70 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046b4f0(uint *param_1,undefined4 *param_2)

{
  void *_Dst;
  
  if (((param_1 != (uint *)0x0) && (param_2 != (undefined4 *)0x0)) &&
     (_Dst = (void *)*param_2, _Dst != (void *)0x0)) {
    *param_2 = 0;
    FUN_0046b550(param_1,(int)_Dst,0xffff,-1);
    _memset(_Dst,0,0x10c);
    FUN_004a48e0((int)param_1,_Dst);
  }
  return;
}


