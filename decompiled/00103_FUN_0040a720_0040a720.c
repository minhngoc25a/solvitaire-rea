// Function: FUN_0040a720
// Entry: 0040a720
// Size: 188 bytes
// Thunk: false
// External: false


void FUN_0040a720(void)

{
  int in_EAX;
  LONG LVar1;
  
  if (DAT_004109c8 == 2) goto LAB_0040a7b3;
  if (DAT_004109c8 == 0) {
    LVar1 = InterlockedExchange(&DAT_004109c8,1);
    if (LVar1 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004109e0);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004109f8);
      atexit((_func_4879 *)&LAB_0040a7f0);
      DAT_004109c8 = 2;
      goto LAB_0040a7b3;
    }
    if (LVar1 == 2) {
      DAT_004109c8 = 2;
      goto LAB_0040a7b3;
    }
  }
  while (DAT_004109c8 == 1) {
    Sleep(1);
  }
  if (DAT_004109c8 != 2) {
    return;
  }
LAB_0040a7b3:
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_004109e0 + in_EAX * 0x18));
  return;
}


