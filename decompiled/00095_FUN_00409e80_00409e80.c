// Function: FUN_00409e80
// Entry: 00409e80
// Size: 115 bytes
// Thunk: false
// External: false


void __cdecl FUN_00409e80(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  char *pcVar2;
  UINT UVar3;
  CHAR local_e [2];
  
  if (param_1 == (LPSTR)0x0) {
    param_1 = local_e;
  }
  iVar1 = *(int *)__mb_cur_max_exref;
  pcVar2 = setlocale(2,(char *)0x0);
  pcVar2 = strchr(pcVar2,0x2e);
  UVar3 = 0;
  if (pcVar2 != (char *)0x0) {
    UVar3 = atoi(pcVar2 + 1);
  }
  FUN_00409df0(param_1,param_2,UVar3,iVar1);
  return;
}


