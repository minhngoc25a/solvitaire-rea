// Function: FUN_00464aa0
// Entry: 00464aa0
// Size: 342 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00464aa0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  iVar1 = FUN_004638e0(param_1,param_2);
  if (-1 < iVar1) {
    puVar4 = param_2 + 2;
    iVar1 = FUN_004638e0(param_1,puVar4);
    if (-1 < iVar1) {
      if ((((*puVar4 != 0 || param_2[3] != 0) && (param_2[3] == 0)) && (*puVar4 < 0x5f5e101)) &&
         (puVar2 = FUN_00463150(param_1,1), puVar2 != (uint *)0x0)) {
        if ((char)*puVar2 == '\0') {
          return 0;
        }
        if ((char)*puVar2 == '\t') {
          uVar3 = FUN_0047f911(*puVar4,8);
          param_2[4] = uVar3;
          uVar3 = FUN_0047f911(*puVar4,8);
          param_2[7] = uVar3;
          if ((param_2[4] != 0) && (uVar3 != 0)) {
            uVar3 = 0;
            if ((param_2[3] != 0) || (*puVar4 != 0)) {
              do {
                iVar1 = FUN_004638e0(param_1,(uint *)(param_2[4] + uVar3 * 8));
                if (iVar1 < 0) {
                  return 0xffffffff;
                }
                uVar3 = uVar3 + 1;
              } while ((param_2[3] != 0) || (uVar3 < *puVar4));
            }
            puVar2 = FUN_00463150(param_1,1);
            if (puVar2 != (uint *)0x0) {
              if ((char)*puVar2 == '\0') {
                uVar3 = FUN_0047f911(*puVar4,1);
                param_2[5] = uVar3;
                uVar3 = FUN_0047f911(*puVar4,4);
                param_2[6] = uVar3;
                if ((param_2[5] != 0) && (uVar3 != 0)) {
                  return 0;
                }
              }
              else if (((((char)*puVar2 == '\n') &&
                        (iVar1 = FUN_00463e10(param_1,(int *)(param_2 + 5),*puVar4), -1 < iVar1)) &&
                       (puVar4 = FUN_00463150(param_1,1), puVar4 != (uint *)0x0)) &&
                      ((char)*puVar4 == '\0')) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


