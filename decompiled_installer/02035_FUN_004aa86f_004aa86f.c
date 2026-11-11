// Function: FUN_004aa86f
// Entry: 004aa86f
// Size: 101 bytes
// Thunk: false
// External: false


int __cdecl FUN_004aa86f(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int local_2c [10];
  
  iVar2 = 0;
  FUN_004245c7(local_2c,(undefined4 *)0x0);
  if (param_1 == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
    goto LAB_004aa8c6;
  }
  iVar1 = FUN_004aa8d4(param_1,local_2c);
  if (iVar1 == 0) {
    if (((uint)param_1->_flag >> 0xb & 1) == 0) goto LAB_004aa8c6;
    iVar1 = __fileno(param_1);
    iVar1 = __commit(iVar1);
    if (iVar1 == 0) goto LAB_004aa8c6;
  }
  iVar2 = -1;
LAB_004aa8c6:
  FUN_0042460f(local_2c);
  return iVar2;
}


