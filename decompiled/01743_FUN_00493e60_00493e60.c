// Function: FUN_00493e60
// Entry: 00493e60
// Size: 57 bytes
// Thunk: false
// External: false


void __cdecl FUN_00493e60(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  DWORD DVar4;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  DVar4 = (int)pcVar3 - (int)(param_1 + 1);
  while ((DVar4 != 0 && (uVar2 = FUN_00497a00(2,param_1,DVar4), 0 < (int)uVar2))) {
    param_1 = param_1 + uVar2;
    DVar4 = DVar4 - uVar2;
  }
  return;
}


