// Function: FUN_004a1f26
// Entry: 004a1f26
// Size: 84 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a1f26(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 >> 1;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 - 1 & uVar2;
  } while (uVar1 != 0);
  FUN_004a1edc(param_1,uVar2 & param_2);
  while (uVar2 = uVar2 >> 1, uVar2 != 0) {
    FUN_004a1edc(param_1,1);
    FUN_004a1edc(param_1,uVar2 & param_2);
  }
  FUN_004a1edc(param_1,0);
  return;
}


