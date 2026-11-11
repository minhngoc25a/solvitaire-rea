// Function: FUN_004242e0
// Entry: 004242e0
// Size: 89 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004242e0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  
  if (param_1 == (ushort *)0x0) {
    param_1 = &DAT_0052ef5c;
  }
  if (param_2 == (ushort *)0x0) {
    param_2 = &DAT_0052ef5c;
  }
  while( true ) {
    uVar1 = *param_1;
    bVar2 = uVar1 < *param_2;
    if (uVar1 != *param_2) break;
    if (uVar1 == 0) {
      return true;
    }
    uVar1 = param_1[1];
    bVar2 = uVar1 < param_2[1];
    if (uVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (uVar1 == 0) {
      return true;
    }
  }
  return (-(uint)bVar2 | 1) == 0;
}


