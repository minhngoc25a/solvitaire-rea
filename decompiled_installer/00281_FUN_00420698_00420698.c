// Function: FUN_00420698
// Entry: 00420698
// Size: 101 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00420698(LPVOID param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (LPVOID)0x0) {
    iVar1 = (**(code **)((int)param_1 + 0x58))(param_1);
    *(undefined4 *)((int)param_1 + 0x94) = *(undefined4 *)((int)param_1 + 0x80);
    *(undefined4 *)((int)param_1 + 0x98) = *(undefined4 *)((int)param_1 + 0x84);
    if (iVar1 == 0) {
      if (*(code **)((int)param_1 + 0x70) != (code *)0x0) {
        (**(code **)((int)param_1 + 0x70))(param_1,0);
      }
      HeapFree(DAT_00542264,0,param_1);
      TlsSetValue(DAT_005434a0,(LPVOID)0x0);
      _DAT_005434a4 = 0;
    }
  }
  return iVar1;
}


