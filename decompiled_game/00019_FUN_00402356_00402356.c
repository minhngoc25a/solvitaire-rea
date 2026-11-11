// Function: FUN_00402356
// Entry: 00402356
// Size: 98 bytes
// Thunk: false
// External: false


int __cdecl FUN_00402356(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar3 = strchr(param_1,0x2e);
    pcVar4 = strchr(param_1,0x5f);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        uVar5 = 0xffffffff;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *param_1;
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        return ~uVar5 - 1;
      }
    }
    else if ((pcVar4 != (char *)0x0) && (pcVar4 < pcVar3)) {
      pcVar3 = pcVar4;
    }
    iVar2 = (int)pcVar3 - (int)param_1;
  }
  return iVar2;
}


