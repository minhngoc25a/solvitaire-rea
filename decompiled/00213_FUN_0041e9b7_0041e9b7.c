// Function: FUN_0041e9b7
// Entry: 0041e9b7
// Size: 122 bytes
// Thunk: false
// External: false


void FUN_0041e9b7(HMENU param_1)

{
  int iVar1;
  BOOL BVar2;
  UINT item;
  tagMENUITEMINFOW local_34;
  
  iVar1 = GetMenuItemCount(param_1);
  item = 0;
  if (0 < iVar1) {
    do {
      _memset(&local_34,0,0x30);
      local_34.cbSize = 0x30;
      local_34.fMask = 0xc;
      BVar2 = GetMenuItemInfoW(param_1,item,0x400,&local_34);
      if (BVar2 != 0) {
        if ((local_34.hbmpUnchecked != (HBITMAP)0x0) &&
           (local_34.hbmpUnchecked == local_34.hbmpChecked)) {
          DeleteObject(local_34.hbmpUnchecked);
        }
        if (local_34.hSubMenu != (HMENU)0x0) {
          FUN_0041e9b7(local_34.hSubMenu);
        }
      }
      item = item + 1;
    } while ((int)item < iVar1);
  }
  return;
}


