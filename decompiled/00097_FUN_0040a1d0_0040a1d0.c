// Function: FUN_0040a1d0
// Entry: 0040a1d0
// Size: 145 bytes
// Thunk: false
// External: false


void __cdecl FUN_0040a1d0(LPWSTR param_1,byte *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  char *pcVar2;
  UINT UVar3;
  byte *pbVar4;
  WCHAR local_e;
  
  local_e = L'\0';
  if (param_1 == (LPWSTR)0x0) {
    param_1 = &local_e;
  }
  uVar1 = *(uint *)__mb_cur_max_exref;
  pcVar2 = setlocale(2,(char *)0x0);
  pcVar2 = strchr(pcVar2,0x2e);
  UVar3 = 0;
  if (pcVar2 != (char *)0x0) {
    UVar3 = atoi(pcVar2 + 1);
  }
  pbVar4 = &DAT_0041007c;
  if (param_4 != (byte *)0x0) {
    pbVar4 = param_4;
  }
  FUN_0040a050(param_1,param_2,param_3,pbVar4,UVar3,uVar1);
  return;
}


