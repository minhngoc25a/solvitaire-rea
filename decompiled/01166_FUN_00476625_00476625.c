// Function: FUN_00476625
// Entry: 00476625
// Size: 92 bytes
// Thunk: false
// External: false


void FUN_00476625(undefined4 *param_1)

{
  ImageList_Remove((HIMAGELIST)*param_1,-1);
  ImageList_AddMasked((HIMAGELIST)*param_1,DAT_0054396c,0);
  if (param_1[1] != 0) {
    ImageList_Remove((HIMAGELIST)param_1[1],-1);
    ImageList_AddMasked((HIMAGELIST)param_1[1],DAT_00543970,0);
  }
  param_1[3] = 0;
  _memset((void *)param_1[2],0,param_1[4] << 4);
  return;
}


