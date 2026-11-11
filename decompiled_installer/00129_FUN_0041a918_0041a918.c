// Function: FUN_0041a918
// Entry: 0041a918
// Size: 73 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0041a918(undefined4 *param_1,HBITMAP param_2,int param_3)

{
  LPARAM *pLVar1;
  int iVar2;
  
  if (param_1[5] == 0) {
    pLVar1 = FUN_00476299(0);
    param_1[5] = pLVar1;
    SendMessageW((HWND)*param_1,0x402,0,*pLVar1);
  }
  iVar2 = FUN_004763dd(param_2,(undefined4 *)param_1[5]);
  *(int *)(param_3 + 0x10) = iVar2;
  if (-1 < iVar2) {
    *(int *)(param_3 + 0x14) = iVar2;
    return 1;
  }
  return 0;
}


