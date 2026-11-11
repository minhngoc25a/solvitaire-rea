// Function: FUN_004a4a40
// Entry: 004a4a40
// Size: 123 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a4a40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_310 [152];
  code *local_b0;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    puVar3 = local_310;
    for (iVar1 = 0xc4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    _memset(param_1,0,0x310);
    if (local_b0 != (code *)0x0) {
      (*local_b0)(local_310);
      FUN_0046f3f0(local_310);
      return;
    }
    FUN_0047d191(param_1);
    FUN_0046f3f0(local_310);
  }
  return;
}


