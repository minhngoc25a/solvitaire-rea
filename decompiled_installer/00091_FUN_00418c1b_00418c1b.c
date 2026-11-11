// Function: FUN_00418c1b
// Entry: 00418c1b
// Size: 66 bytes
// Thunk: false
// External: false


int * FUN_00418c1b(int param_1,byte param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  pvVar1 = HeapAlloc(DAT_00542264,8,0x10);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = FUN_0042583b(DAT_00542b3c,param_1);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)pvVar1;
      *(byte *)((int)pvVar1 + 3) = param_2 & 2;
    }
  }
  return piVar2;
}


