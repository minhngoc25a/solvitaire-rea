// Function: FUN_00477517
// Entry: 00477517
// Size: 34 bytes
// Thunk: false
// External: false


void FUN_00477517(HDC param_1,HRGN param_2)

{
  SelectClipRgn(param_1,param_2);
  if (param_2 != (HRGN)0x0) {
    DeleteObject(param_2);
  }
  return;
}


