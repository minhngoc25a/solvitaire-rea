// Function: FUN_00463e10
// Entry: 00463e10
// Size: 199 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00463e10(uint *param_1,int *param_2,uint param_3)

{
  void *_Dst;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    iVar1 = FUN_00482949(param_3);
    *param_2 = iVar1;
    if ((iVar1 != 0) && (puVar2 = FUN_00463150(param_1,1), puVar2 != (uint *)0x0)) {
      _Dst = (void *)*param_2;
      if ((char)*puVar2 == '\0') {
        iVar1 = FUN_00463a80(_Dst,(uint)param_1,(int)_Dst,param_3);
        if (iVar1 < 0) {
          return 0xffffffff;
        }
      }
      else {
        _memset(_Dst,1,param_3);
      }
      iVar1 = FUN_0047f911(param_3,4);
      param_2[1] = iVar1;
      if (iVar1 != 0) {
        uVar3 = 0;
        if (param_3 != 0) {
          do {
            if (*(char *)(uVar3 + *param_2) != '\0') {
              puVar2 = FUN_00463150(param_1,4);
              if (puVar2 == (uint *)0x0) {
                return 0xffffffff;
              }
              *(uint *)(param_2[1] + uVar3 * 4) = *puVar2;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_3);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}


