// Function: FUN_00405010
// Entry: 00405010
// Size: 73 bytes
// Thunk: false
// External: false


void FUN_00405010(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0040bb10;
  if (DAT_0040bb10 == -1) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while ((&DAT_0040bb10)[iVar2 + 1] != 0);
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)(&DAT_0040bb10)[iVar2])();
  }
  atexit((_func_4879 *)&LAB_00404fe0);
  return;
}


