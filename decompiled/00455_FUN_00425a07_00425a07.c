// Function: FUN_00425a07
// Entry: 00425a07
// Size: 46 bytes
// Thunk: false
// External: false


void FUN_00425a07(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0048215b(param_1);
    while( true ) {
      piVar2 = FUN_00482172(iVar1,&param_1);
      if (piVar2 == (int *)0x0) break;
      (**(code **)(iVar1 + 0x14))(param_1);
    }
  }
  return;
}


