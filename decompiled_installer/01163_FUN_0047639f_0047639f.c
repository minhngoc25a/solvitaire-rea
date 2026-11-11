// Function: FUN_0047639f
// Entry: 0047639f
// Size: 62 bytes
// Thunk: false
// External: false


void FUN_0047639f(undefined4 *param_1)

{
  ImageList_Destroy((HIMAGELIST)*param_1);
  if (param_1[1] != 0) {
    ImageList_Destroy((HIMAGELIST)param_1[1]);
  }
  HeapFree(DAT_00542264,0,(LPVOID)param_1[2]);
  HeapFree(DAT_00542264,0,param_1);
  return;
}


