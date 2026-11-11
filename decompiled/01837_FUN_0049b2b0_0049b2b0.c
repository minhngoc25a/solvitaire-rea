// Function: FUN_0049b2b0
// Entry: 0049b2b0
// Size: 77 bytes
// Thunk: false
// External: false


void * __cdecl FUN_0049b2b0(uint param_1,undefined4 *param_2)

{
  void *pvVar1;
  uint _Size;
  
  _Size = 1;
  if (param_1 != 0) {
    _Size = param_1;
  }
  if ((param_2 != (undefined4 *)0x0) && ((code *)*param_2 != (code *)0x0)) {
    pvVar1 = (void *)(*(code *)*param_2)(param_2[2],1,_Size);
    if (pvVar1 != (void *)0x0) {
      _memset(pvVar1,0,_Size);
    }
    return pvVar1;
  }
  pvVar1 = (void *)FUN_0047f911(1,_Size);
  return pvVar1;
}


