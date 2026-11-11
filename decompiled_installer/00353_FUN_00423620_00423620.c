// Function: FUN_00423620
// Entry: 00423620
// Size: 127 bytes
// Thunk: false
// External: false


undefined4 FUN_00423620(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    if (param_2 == (int *)0x0) {
      return 1;
    }
  }
  else if (param_2 != (int *)0x0) {
    while (uVar1 = param_3 - 4, 3 < param_3) {
      if (*param_1 != *param_2) goto LAB_00423666;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = uVar1;
    }
    if (uVar1 != 0xfffffffc) {
LAB_00423666:
      if (((char)*param_1 != (char)*param_2) ||
         ((uVar1 != 0xfffffffd &&
          ((*(char *)((int)param_1 + 1) != *(char *)((int)param_2 + 1) ||
           ((uVar1 != 0xfffffffe &&
            ((*(char *)((int)param_1 + 2) != *(char *)((int)param_2 + 2) ||
             ((uVar1 != 0xffffffff && (*(char *)((int)param_1 + 3) != *(char *)((int)param_2 + 3))))
             ))))))))) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


