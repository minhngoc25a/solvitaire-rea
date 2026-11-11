// Function: FUN_004773b8
// Entry: 004773b8
// Size: 33 bytes
// Thunk: false
// External: false


undefined4 FUN_004773b8(HWND param_1)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  EnumPropsExW(param_1,(PROPENUMPROCEXW)&LAB_004773d9,(LPARAM)&local_8);
  return local_8;
}


