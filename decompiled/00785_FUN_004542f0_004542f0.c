// Function: FUN_004542f0
// Entry: 004542f0
// Size: 44 bytes
// Thunk: false
// External: false


int FUN_004542f0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = TlsGetValue(DAT_0053fba8);
  uVar1 = *puVar2;
  if ((uVar1 <= param_1) && (param_1 <= puVar2[2] + uVar1)) {
    return (param_1 - uVar1) + 1;
  }
  return 0;
}


