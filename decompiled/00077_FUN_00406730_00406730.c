// Function: FUN_00406730
// Entry: 00406730
// Size: 67 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00406730(void *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (void *)0x0) &&
     (iVar1 = _findclose(*(intptr_t *)((int)param_1 + 0x130)), iVar1 == 0)) {
    free(param_1);
    return 0;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  return 0xffffffff;
}


