// Function: FUN_00401c58
// Entry: 00401c58
// Size: 107 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00401c58(undefined4 param_1)

{
  bool bVar1;
  
  DAT_00410018 = param_1;
  DAT_004190e4 = GetModuleHandleA((LPCSTR)0x0);
  bVar1 = DAT_004190e4 != (HMODULE)0x0;
  if (bVar1) {
    strcpy(&DAT_004190e8,"Launch4j");
    DAT_00418c4c = 0;
    DAT_00418c50 = 0;
    DAT_00418c54 = 0;
    DAT_00418c58 = 0;
  }
  return bVar1;
}


