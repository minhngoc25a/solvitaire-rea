// Function: FUN_004bed0d
// Entry: 004bed0d
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bed0d(undefined4 *param_1)

{
  if (param_1[6] != 0) {
    HeapFree(DAT_00542264,0,(LPVOID)*param_1);
  }
  if (param_1[8] != 0) {
    FUN_004feffb((LPVOID)param_1[8]);
  }
  if (param_1[7] != 0) {
    HeapFree(DAT_00542264,0,(LPVOID)param_1[7]);
  }
  HeapFree(DAT_00542264,0,param_1);
  return;
}


