// Function: __towlower_internal
// Entry: 00478fbe
// Size: 63 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __towlower_internal
   
   Library: Visual Studio 2019 Release */

uint __cdecl __towlower_internal(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((ushort)param_1 < 0x100) {
    if (((&DAT_0050edf2)[(param_1 & 0xff) * 2] & 1) != 0) {
      param_1 = (uint)*(byte *)((param_1 & 0xff) + *(int *)(*param_2 + 0x94));
    }
    return param_1 & 0xff;
  }
  uVar1 = FUN_004b7a72(param_1,param_2);
  return uVar1;
}


