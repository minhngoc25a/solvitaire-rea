// Function: FUN_0042216a
// Entry: 0042216a
// Size: 37 bytes
// Thunk: false
// External: false


void FUN_0042216a(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00423ccb(DAT_00543558);
  (**(code **)(*piVar1 + 8))(piVar1);
  if (piVar1[5] == 0) {
    FUN_0047ccbd((FILE *)piVar1[2]);
  }
  return;
}


