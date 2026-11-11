// Function: thunk_FUN_0047fe0c
// Entry: 0047fc9d
// Size: 5 bytes
// Thunk: true
// External: false


int thunk_FUN_0047fe0c(void)

{
  int iVar1;
  
  iVar1 = DAT_00544354;
  if (DAT_00544354 == 0) {
    if (DAT_00544358 != 0) {
      iVar1 = FUN_0047fcf8();
      if (iVar1 == 0) {
        return DAT_00544354;
      }
      iVar1 = FUN_00480064();
      if (iVar1 == 0) {
        return DAT_00544354;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


