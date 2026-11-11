// Function: FUN_00477fda
// Entry: 00477fda
// Size: 71 bytes
// Thunk: false
// External: false


void FUN_00477fda(HWND param_1,int param_2)

{
  uint uVar1;
  WPARAM wParam;
  
  uVar1 = SendMessageW(param_1,0x129,0,0);
  if (param_2 == 0) {
    if (((byte)uVar1 & 3) == 3) {
      return;
    }
    wParam = 0x30001;
  }
  else {
    if ((uVar1 & 3) == 0) {
      return;
    }
    wParam = 0x30002;
  }
  SendMessageW(param_1,0x128,wParam,0);
  return;
}


