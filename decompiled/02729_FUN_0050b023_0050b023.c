// Function: FUN_0050b023
// Entry: 0050b023
// Size: 29 bytes
// Thunk: false
// External: false


void FUN_0050b023(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00417ffc();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00417dda();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}


