// Function: FUN_004216ca
// Entry: 004216ca
// Size: 38 bytes
// Thunk: false
// External: false


void FUN_004216ca(void)

{
  DAT_005434b4 = LoadLibraryW(L"msimg32.dll");
  if (DAT_005434b4 != (HMODULE)0x0) {
    DAT_005434b0 = GetProcAddress(DAT_005434b4,"AlphaBlend");
  }
  return;
}


