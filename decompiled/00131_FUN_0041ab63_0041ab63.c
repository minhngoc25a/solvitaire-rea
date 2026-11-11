// Function: FUN_0041ab63
// Entry: 0041ab63
// Size: 68 bytes
// Thunk: false
// External: false


void FUN_0041ab63(undefined4 *param_1)

{
  SendMessageW((HWND)*param_1,0x1701,1,0);
  SendMessageW((HWND)*param_1,0x14b,0,0);
  SendMessageW((HWND)*param_1,0x1701,0x1e,0);
  if (param_1[5] != 0) {
    FUN_00476625((undefined4 *)param_1[5]);
  }
  return;
}


