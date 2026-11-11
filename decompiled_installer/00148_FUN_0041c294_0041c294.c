// Function: FUN_0041c294
// Entry: 0041c294
// Size: 108 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c294(void)

{
  int iVar1;
  
  iVar1 = FUN_00423ccb(DAT_00542fa4);
  if (*(int *)(iVar1 + 0x18) != 0) {
    DestroyWindow(*(HWND *)(iVar1 + 0x18));
  }
  if ((DAT_00535000 != 0) && ((_DAT_0053fb90 != 1.0 || (_DAT_0053fb98 != 1.0)))) {
    DeleteObject(DAT_00542fa8);
  }
  if (DAT_00542f9c == (int *)0x0) {
    return;
  }
  (**(code **)(*DAT_00542f9c + 8))(DAT_00542f9c);
                    /* WARNING: Could not recover jumptable at 0x0041c2f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}


