// Function: FUN_00419e80
// Entry: 00419e80
// Size: 75 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00419e80(void)

{
  if (DAT_00542b68 == 0) {
    _DAT_00542b64 = 0x4745504a;
    _DAT_00542b58 = &LAB_00419b30;
    _DAT_00542b5c = &LAB_00419990;
    _DAT_00542b60 = &LAB_00419930;
    FUN_0042218f(&DAT_00542b58);
    DAT_00542b68 = 1;
  }
  return DAT_00542b68;
}


