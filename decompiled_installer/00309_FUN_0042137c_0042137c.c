// Function: FUN_0042137c
// Entry: 0042137c
// Size: 191 bytes
// Thunk: false
// External: false


void FUN_0042137c(HDC param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 HANDLE param_6,HDC param_7,byte param_8)

{
  int iVar1;
  HDC hdc;
  HGDIOBJ unaff_EBX;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  if (DAT_005434b0 != (code *)0x0) {
    if (((param_4 == 0) || (param_5 == 0)) &&
       (iVar1 = GetObjectW(param_6,0x18,local_18), iVar1 != 0)) {
      param_5 = local_10;
      param_4 = local_14;
    }
    hdc = param_7;
    if ((param_7 != (HDC)0x0) || (hdc = CreateCompatibleDC(param_1), hdc != (HDC)0x0)) {
      SelectObject(hdc,param_6);
      param_6 = (HANDLE)CONCAT13(1,(uint3)param_8 << 0x10);
      (*DAT_005434b0)(param_1,param_2,param_3,param_4,param_5,hdc,0,0,param_4,param_5,param_6);
      if (param_7 == (HDC)0x0) {
        DeleteDC(hdc);
      }
      else {
        SelectObject(param_7,unaff_EBX);
      }
    }
  }
  return;
}


