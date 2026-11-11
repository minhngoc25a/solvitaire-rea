// Function: FUN_004a41ed
// Entry: 004a41ed
// Size: 333 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a41ed(uint param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  HANDLE hFile;
  char *pcVar5;
  BOOL BVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *local_14;
  int local_10;
  char *local_c;
  char local_5;
  
  local_10 = (int)param_1 >> 6;
  iVar9 = (param_1 & 0x3f) * 0x38;
  iVar4 = (&DAT_00544378)[local_10];
  hFile = *(HANDLE *)(iVar9 + 0x18 + iVar4);
  if ((param_3 == 0) || (*param_2 != '\n')) {
    pbVar1 = (byte *)(iVar9 + 0x28 + iVar4);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar9 + 0x28 + iVar4);
    *pbVar1 = *pbVar1 | 4;
  }
  local_14 = param_2 + param_3;
  pcVar7 = param_2;
  local_c = param_2;
  do {
    pcVar8 = pcVar7;
    if (local_14 <= local_c) {
LAB_004a4331:
      return (int)pcVar8 - (int)param_2;
    }
    cVar2 = *local_c;
    if (cVar2 == '\x1a') {
      bVar3 = *(byte *)((&DAT_00544378)[local_10] + 0x28 + iVar9);
      if ((bVar3 & 0x40) == 0) {
        *(byte *)((&DAT_00544378)[local_10] + 0x28 + iVar9) = bVar3 | 2;
      }
      else {
        *pcVar7 = '\x1a';
LAB_004a4330:
        pcVar8 = pcVar7 + 1;
      }
      goto LAB_004a4331;
    }
    pcVar5 = local_c + 1;
    if (cVar2 == '\r') {
      if (local_14 <= pcVar5) {
        BVar6 = ReadFile(hFile,&local_5,1,(LPDWORD)&local_14,(LPOVERLAPPED)0x0);
        if ((BVar6 != 0) && (local_14 != (char *)0x0)) {
          if ((*(byte *)((&DAT_00544378)[local_10] + 0x28 + iVar9) & 0x48) != 0) {
            pcVar8 = pcVar7 + 1;
            if (local_5 == '\n') {
              *pcVar7 = '\n';
            }
            else {
              *pcVar7 = '\r';
              *(char *)((&DAT_00544378)[local_10] + 0x2a + iVar9) = local_5;
            }
            goto LAB_004a4331;
          }
          if ((local_5 == '\n') && (pcVar7 == param_2)) {
            *pcVar7 = '\n';
            goto LAB_004a4330;
          }
          FUN_0049d4a3(param_1,0xffffffff,0xffffffff,(PLARGE_INTEGER)0x1);
          if (local_5 == '\n') goto LAB_004a4331;
        }
        *pcVar7 = '\r';
        goto LAB_004a4330;
      }
      cVar2 = *pcVar5;
      pcVar5 = local_c + (cVar2 == '\n') + 1;
      *pcVar7 = ((cVar2 == '\n') - 1U & 3) + 10;
    }
    else {
      *pcVar7 = cVar2;
    }
    pcVar7 = pcVar7 + 1;
    local_c = pcVar5;
  } while( true );
}


