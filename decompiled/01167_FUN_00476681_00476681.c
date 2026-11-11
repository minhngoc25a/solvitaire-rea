// Function: FUN_00476681
// Entry: 00476681
// Size: 83 bytes
// Thunk: false
// External: false


HBITMAP __cdecl FUN_00476681(HDC param_1,HDC param_2,int param_3,LONG param_4)

{
  HBITMAP h;
  HBRUSH hbr;
  RECT local_14;
  
  h = CreateCompatibleBitmap(param_1,param_3,param_3);
  if (h != (HBITMAP)0x0) {
    local_14.top = 0;
    local_14.left = 0;
    local_14.right = param_3;
    local_14.bottom = param_4;
    SelectObject(param_2,h);
    hbr = GetStockObject(4);
    FillRect(param_2,&local_14,hbr);
  }
  return h;
}


