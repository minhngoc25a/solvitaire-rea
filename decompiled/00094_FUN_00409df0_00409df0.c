// Function: FUN_00409df0
// Entry: 00409df0
// Size: 137 bytes
// Thunk: false
// External: false


int __cdecl FUN_00409df0(LPSTR param_1,WCHAR param_2,UINT param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  WCHAR local_20 [8];
  BOOL local_10 [3];
  
  local_20[0] = param_2;
  if (param_3 == 0) {
    if (0xff < (ushort)param_2) {
LAB_00409e67:
      piVar2 = _errno();
      *piVar2 = 0x2a;
      return -1;
    }
    *param_1 = (CHAR)param_2;
    iVar1 = 1;
  }
  else {
    local_10[0] = 0;
    iVar1 = WideCharToMultiByte(param_3,0,local_20,1,param_1,param_4,(LPCSTR)0x0,local_10);
    if ((iVar1 == 0) || (local_10[0] != 0)) goto LAB_00409e67;
  }
  return iVar1;
}


