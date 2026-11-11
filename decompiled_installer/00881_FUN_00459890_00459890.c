// Function: FUN_00459890
// Entry: 00459890
// Size: 183 bytes
// Thunk: false
// External: false


/* WARNING: Variable defined which should be unmapped: param_1 */

undefined4 __cdecl
FUN_00459890(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_0047f911(1,0x20);
  if (iVar1 == 0) {
    FUN_00487380(param_3,0xc,0x523890);
    return 0xffffffe2;
  }
  if (*(int **)(param_4 + 0xc0) == (int *)0x0) {
    *(int *)(param_4 + 0xbc) = iVar1;
  }
  else {
    **(int **)(param_4 + 0xc0) = iVar1;
  }
  *(int *)(param_4 + 0xc0) = iVar1;
  if ((-1 < param_8) && (-1 < param_6)) {
    if ((param_6 <= 0x7fffffff - param_8) &&
       ((param_6 < 0x7fffffff - param_8 || (param_5 <= -param_7 - 1U)))) {
      *(int *)(iVar1 + 0x14) = param_8;
      *(int *)(iVar1 + 0x10) = param_7;
      *(int *)(iVar1 + 0xc) = param_6;
      *(uint *)(iVar1 + 8) = param_5;
      return 0;
    }
  }
  FUN_00487380(param_3,0xffffffff,0x528828);
  return 0xffffffe2;
}


