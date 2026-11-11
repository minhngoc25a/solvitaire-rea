// Function: FUN_00417872
// Entry: 00417872
// Size: 127 bytes
// Thunk: false
// External: false


void FUN_00417872(int *param_1)

{
  int iVar1;
  
  FUN_0044ca97(param_1);
  if (*param_1 != 0) {
    if (param_1[4] != 0) {
      HeapFree(DAT_00542264,0,(LPVOID)param_1[4]);
    }
    CloseHandle((HANDLE)*param_1);
  }
  while (iVar1 = param_1[7], iVar1 != 0) {
    FUN_004257fb(param_1 + 7,iVar1 + 8);
  }
  if (param_1[10] != 0) {
    HeapFree(DAT_00542264,0,(LPVOID)param_1[10]);
  }
  if (param_1[1] != 0) {
    HeapFree(DAT_00542264,0,(LPVOID)param_1[1]);
  }
  _memset(param_1,0,0x30);
  return;
}


