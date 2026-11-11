// Function: FUN_00435d80
// Entry: 00435d80
// Size: 69 bytes
// Thunk: false
// External: false


int __cdecl FUN_00435d80(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    while (uVar1 == *param_2) {
      uVar1 = param_1[1];
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (uVar1 == 0) {
        return (uint)*param_1 - (uint)*param_2;
      }
    }
  }
  return (uint)*param_1 - (uint)*param_2;
}


