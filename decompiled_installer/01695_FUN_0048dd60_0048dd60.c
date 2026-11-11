// Function: FUN_0048dd60
// Entry: 0048dd60
// Size: 169 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048dd60(int *param_1,uint *param_2,uint param_3,DWORD param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == (uint *)0x0) {
    param_1[0xc] = 0;
    return 0;
  }
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  if (param_4 != 0) {
    iVar3 = FUN_0048e5d0(param_1 + 6,param_2,param_3,param_4);
    if (iVar3 == 0) {
      param_1[0xc] = 4;
      return 0;
    }
    param_1[0xc] = 0;
    return iVar3;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (*(char *)(uVar1 + (int)param_2) == '\0') break;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  piVar2 = FUN_00491440(param_1,param_2,uVar1);
  param_1[0xc] = (uint)(piVar2 != (int *)0x0);
  return (piVar2 != (int *)0x0) - 1;
}


