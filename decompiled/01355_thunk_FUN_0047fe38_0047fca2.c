// Function: thunk_FUN_0047fe38
// Entry: 0047fca2
// Size: 5 bytes
// Thunk: true
// External: false


int thunk_FUN_0047fe38(void)

{
  int iVar1;
  
  iVar1 = DAT_00544358;
  if (DAT_00544358 == 0) {
    if (DAT_00544354 != 0) {
      iVar1 = FUN_0047fd52();
      if (iVar1 == 0) {
        return DAT_00544358;
      }
      iVar1 = FUN_004800e7();
      if (iVar1 == 0) {
        return DAT_00544358;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


