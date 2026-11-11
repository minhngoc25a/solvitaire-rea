// Function: FUN_004191ee
// Entry: 004191ee
// Size: 66 bytes
// Thunk: false
// External: false


int __cdecl FUN_004191ee(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    return 1;
  }
  if ((ushort)((short)param_1 + 0x2800U) < 0x800) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  iVar1 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)&param_1,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
  ;
  return iVar1;
}


