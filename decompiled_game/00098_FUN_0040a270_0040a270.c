// Function: FUN_0040a270
// Entry: 0040a270
// Size: 353 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0040a270(LPWSTR param_1,int *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  UINT local_34;
  WCHAR local_1e [7];
  
  pbVar2 = &DAT_00410078;
  if (param_4 != (byte *)0x0) {
    pbVar2 = param_4;
  }
  pcVar3 = setlocale(2,(char *)0x0);
  pcVar3 = strchr(pcVar3,0x2e);
  local_34 = 0;
  if (pcVar3 != (char *)0x0) {
    local_34 = atoi(pcVar3 + 1);
  }
  uVar1 = *(uint *)__mb_cur_max_exref;
  if ((param_2 == (int *)0x0) || (pbVar5 = (byte *)*param_2, pbVar5 == (byte *)0x0)) {
    return 0;
  }
  if (param_1 == (LPWSTR)0x0) {
    local_1e[0] = L'\0';
    uVar6 = 0;
    if (param_3 != 0) {
      do {
        iVar4 = FUN_0040a050(local_1e,pbVar5,uVar1,pbVar2,local_34,uVar1);
        if (iVar4 < 1) {
          return uVar6;
        }
        uVar6 = uVar6 + iVar4;
        pbVar5 = (byte *)(*param_2 + iVar4);
        *param_2 = (int)pbVar5;
      } while (uVar6 < param_3);
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    uVar6 = 0;
    do {
      iVar4 = FUN_0040a050(param_1,pbVar5,param_3 - uVar6,pbVar2,local_34,uVar1);
      if (iVar4 < 1) break;
      uVar6 = uVar6 + iVar4;
      param_1 = param_1 + 1;
      pbVar5 = (byte *)(*param_2 + iVar4);
      *param_2 = (int)pbVar5;
    } while (uVar6 < param_3);
    if ((iVar4 == 0) && (uVar6 < param_3)) {
      *param_2 = 0;
      return uVar6;
    }
  }
  return uVar6;
}


