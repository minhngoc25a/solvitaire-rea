// Function: FUN_0047603c
// Entry: 0047603c
// Size: 124 bytes
// Thunk: false
// External: false


HWND FUN_0047603c(HWND param_1,HWND param_2,HWND param_3,int param_4)

{
  int iVar1;
  LONG LVar2;
  
  iVar1 = FUN_00423ccb(DAT_00542fa4);
  if (param_1 == (HWND)0xffffffff) {
    param_1 = param_2;
  }
  param_2->unused = (int)param_3;
  param_2[1].unused = param_4;
  LVar2 = SetWindowLongW(param_3,-4,0x4760e7);
  param_2[3].unused = LVar2;
  SetWindowLongW(param_3,-0xc,(LONG)param_1);
  SetPropW(param_3,L"PB_ID",param_1);
  SendMessageW(param_3,0x30,*(WPARAM *)(iVar1 + 8),1);
  *(undefined4 *)(iVar1 + 4) = 0;
  if (param_1 != param_2) {
    param_2 = param_3;
  }
  return param_2;
}


