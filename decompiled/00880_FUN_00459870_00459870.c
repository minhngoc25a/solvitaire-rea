// Function: FUN_00459870
// Entry: 00459870
// Size: 32 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00459870(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 != '\0') {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  return 1;
}


