// Function: FUN_00419230
// Entry: 00419230
// Size: 81 bytes
// Thunk: false
// External: false


void __cdecl FUN_00419230(LPSTR param_1,uint param_2,int param_3)

{
  int cchWideChar;
  
  if (param_2 < 0x80) {
    *param_1 = (CHAR)param_2;
    return;
  }
  if ((ushort)((short)param_2 + 0x2800U) < 0x800) {
    cchWideChar = 2;
  }
  else {
    cchWideChar = 1;
  }
  WideCharToMultiByte(0xfde9,0,(LPCWSTR)&param_2,cchWideChar,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0
                     );
  return;
}


