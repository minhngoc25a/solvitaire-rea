// Function: FUN_0050b565
// Entry: 0050b565
// Size: 176 bytes
// Thunk: false
// External: false


int __cdecl FUN_0050b565(char *param_1,int param_2,uint param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
  if ((char *)~param_3 < pcVar4) {
    iVar3 = 0xc;
  }
  else {
    pcVar5 = pcVar4 + param_3 + 1;
    pcVar2 = __calloc_base((uint)pcVar5,1);
    if (param_3 != 0) {
      iVar3 = FUN_004f0c7d(pcVar2,(int)pcVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_0050b609;
    }
    iVar3 = FUN_004f0c7d(pcVar2 + param_3,(int)pcVar5 - param_3,(int)param_1,(int)pcVar4);
    if (iVar3 != 0) {
LAB_0050b609:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = FUN_0050b4de(param_4);
    if (iVar3 == 0) {
      *(char **)param_4[1] = pcVar2;
      iVar3 = 0;
      param_4[1] = param_4[1] + 4;
    }
    else {
      FUN_004247be(pcVar2);
    }
    FUN_004247be((LPVOID)0x0);
  }
  return iVar3;
}


