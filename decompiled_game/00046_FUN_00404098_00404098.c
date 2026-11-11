// Function: FUN_00404098
// Entry: 00404098
// Size: 95 bytes
// Thunk: false
// External: false


void __cdecl FUN_00404098(LPCSTR param_1)

{
  if (DAT_00418c4c == 0) {
    if (((DAT_0041001c != 0) && (DAT_00410018 == 0)) &&
       (FUN_00403e88(param_1,0x101), (DAT_00418c4c & 0x100) != 0)) {
      return;
    }
    if (DAT_00418c54 == 0) {
      FUN_00403e88(param_1,1);
    }
  }
  return;
}


