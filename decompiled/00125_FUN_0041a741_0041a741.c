// Function: FUN_0041a741
// Entry: 0041a741
// Size: 48 bytes
// Thunk: false
// External: false


void __cdecl FUN_0041a741(undefined4 *param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageW((HWND)*param_1,0x146,0,0);
  if (LVar1 == 0) {
    FUN_0041a961(param_1,0xffffffff,0x52ef5c,(HBITMAP)0x0);
    FUN_0041ab63(param_1);
  }
  return;
}


