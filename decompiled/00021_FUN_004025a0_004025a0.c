// Function: FUN_004025a0
// Entry: 004025a0
// Size: 70 bytes
// Thunk: false
// External: false


int __cdecl FUN_004025a0(char *param_1)

{
  DWORD DVar1;
  char *pcVar2;
  int iVar3;
  
  DVar1 = GetModuleFileNameA(DAT_004190e4,param_1,0x104);
  if (DVar1 == 0) {
    iVar3 = -1;
  }
  else {
    pcVar2 = strrchr(param_1,0x5c);
    iVar3 = (int)pcVar2 - (int)param_1;
  }
  return iVar3;
}


