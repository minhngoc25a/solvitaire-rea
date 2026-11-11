// Function: FUN_00480313
// Entry: 00480313
// Size: 25 bytes
// Thunk: false
// External: false


char FUN_00480313(void)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_004c54d0();
  if (CONCAT31(extraout_var,bVar1) != 1) {
    uVar2 = FUN_004c54ab();
    return '\x01' - ((char)uVar2 != '\0');
  }
  return '\0';
}


