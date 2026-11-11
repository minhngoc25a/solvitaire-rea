// Function: FUN_004a49b0
// Entry: 004a49b0
// Size: 143 bytes
// Thunk: false
// External: false


uint * __cdecl FUN_004a49b0(int param_1,uint *param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  
  if ((((0 < param_4) && (param_5 != 0)) && (-1 < param_3)) &&
     ((param_2 != (uint *)0x0 || (param_3 < 1)))) {
    if (param_4 <= 0x7fffffff - param_3) {
      puVar1 = (uint *)FUN_004a4ac0(param_1,param_3 + param_4,param_5);
      if (puVar1 != (uint *)0x0) {
        if (0 < param_3) {
          FUN_0044c490(puVar1,param_2,param_3 * param_5);
        }
        _memset((uint *)((int)puVar1 + param_3 * param_5),0,param_4 * param_5);
        return puVar1;
      }
    }
    return (uint *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


