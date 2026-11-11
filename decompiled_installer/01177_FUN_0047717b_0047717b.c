// Function: FUN_0047717b
// Entry: 0047717b
// Size: 54 bytes
// Thunk: false
// External: false


uint FUN_0047717b(HWND param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = GetPropW(param_1,L"PB_ID");
  piVar2 = (int *)GetWindowLongW(param_1,-0xc);
  if (piVar1 == piVar2) {
    uVar3 = FUN_004258d0(DAT_00542fa0,piVar1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


