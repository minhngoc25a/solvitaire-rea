// Function: FUN_00482324
// Entry: 00482324
// Size: 140 bytes
// Thunk: false
// External: false


void FUN_00482324(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *local_c;
  wchar_t *local_8;
  
  FUN_00482275(param_1,param_2,param_3);
  puVar1 = FUN_00484a7e(2);
  piVar2 = FUN_0044ea44(&local_c,puVar1);
  uVar3 = FUN_0046b397(piVar2);
  if ((char)uVar3 == '\0') {
    iVar5 = 0;
    iVar4 = 4;
    uVar3 = 0;
    puVar1 = FUN_00484a7e(2);
    FUN_004c61fe((int)puVar1,uVar3,iVar4,iVar5);
  }
  local_8 = FUN_0048226f();
  local_c = FUN_00484a7e(2);
  ftprintf<>(&local_c,&local_8,&param_1,&param_2,&param_3);
  puVar1 = FUN_00484a7e(2);
  FUN_004aa813((int)puVar1);
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


