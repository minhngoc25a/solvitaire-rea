// Function: FUN_00477652
// Entry: 00477652
// Size: 197 bytes
// Thunk: false
// External: false


void FUN_00477652(HWND param_1,uint param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint X;
  int iVar4;
  tagRECT local_24;
  tagRECT local_14;
  
  if (((param_2 & 2) == 0) || (param_3 != (HWND)0x0)) {
    GetWindowRect(param_1,&local_24);
    iVar3 = local_24.right - local_24.left;
    iVar4 = local_24.bottom - local_24.top;
    if ((param_2 & 1) == 0) {
      X = param_2;
      if ((param_2 & 2) != 0) {
        GetWindowRect(param_3,&local_14);
        param_2 = ((local_14.bottom - local_14.top) - iVar4) / 2 + local_14.top;
        X = ((local_14.right - local_14.left) - iVar3) / 2 + local_14.left;
        if ((int)X < 0) {
          X = 0;
        }
        if ((int)param_2 < 0) {
          param_2 = 0;
        }
      }
    }
    else {
      iVar1 = GetSystemMetrics(0);
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
      iVar2 = GetSystemMetrics(1);
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      param_2 = (iVar2 - iVar4) / 2;
      X = (iVar1 - iVar3) / 2;
    }
    SetWindowPos(param_1,(HWND)0x0,X,param_2,0,0,0x15);
  }
  return;
}


