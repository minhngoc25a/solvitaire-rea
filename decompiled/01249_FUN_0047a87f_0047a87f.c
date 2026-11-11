// Function: FUN_0047a87f
// Entry: 0047a87f
// Size: 49 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047a87f(int param_1)

{
  if (*(int *)(param_1 + 0x188) != 0) {
    SelectClipRgn(*(HDC *)(param_1 + 0x168),(HRGN)0x0);
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return;
}


