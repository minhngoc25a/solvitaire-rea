// Function: FUN_00425965
// Entry: 00425965
// Size: 79 bytes
// Thunk: false
// External: false


void FUN_00425965(size_t *param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004257fb((int *)(param_1 + 4),param_2);
  }
  else if (*(int *)(param_1[3] + param_2 * 4) != 0) {
    _memset(*(void **)(param_1[3] + param_2 * 4),0,*param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


