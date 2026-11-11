// Function: FUN_00478320
// Entry: 00478320
// Size: 409 bytes
// Thunk: false
// External: false


char * FUN_00478320(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  SIZE_T local_c;
  LONG local_8;
  char *local_4;
  
  puVar1 = param_1;
  local_c = 0x1000;
  pcVar2 = HeapAlloc(DAT_00542264,0,0x1000);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  iVar4 = param_3;
  cVar3 = (char)param_1;
  local_4 = pcVar2;
  do {
    do {
      if (iVar4 != -1) {
        if (iVar4 != 0) {
          iVar4 = iVar4 + -1;
          goto LAB_0047836e;
        }
LAB_00478419:
        if (param_2 == 0) {
LAB_00478425:
          if (cVar3 == '\n') {
            pcVar2 = pcVar2 + -1;
          }
          else if (cVar3 == '\r') {
            pcVar2 = pcVar2 + -1;
            if (puVar1[1] == 0) {
              ReadFile((HANDLE)*puVar1,&param_1,1,&local_10,(LPOVERLAPPED)0x0);
            }
            else {
              local_10 = FUN_004781f0(puVar1,(uint *)&param_1,1);
            }
            if ((char)param_1 != '\n') {
              if (puVar1[1] == 0) {
                local_c = 0xffffffff;
                local_8 = -1;
                SetFilePointer((HANDLE)*puVar1,-1,&local_8,1);
              }
              else {
                puVar1[3] = puVar1[3] + 1;
              }
            }
          }
        }
        goto LAB_00478493;
      }
LAB_0047836e:
      if (puVar1[1] == 0) {
        ReadFile((HANDLE)*puVar1,&param_1,1,&local_10,(LPOVERLAPPED)0x0);
      }
      else {
        local_10 = FUN_004781f0(puVar1,(uint *)&param_1,1);
      }
      cVar3 = (char)param_1;
      if (local_10 != 1) goto LAB_00478419;
      if ((char)param_1 != '\0') {
        *pcVar2 = (char)param_1;
        pcVar2 = pcVar2 + 1;
      }
      iVar5 = (int)pcVar2 - (int)local_4;
      if ((int)(local_c - 1) < iVar5) {
        local_c = local_c + 0x1000;
        local_4 = HeapReAlloc(DAT_00542264,8,local_4,local_c);
        pcVar2 = local_4 + iVar5;
        cVar3 = (char)param_1;
      }
      if (cVar3 == '\0') goto LAB_00478419;
    } while (param_2 != 0);
    if (cVar3 == '\r') goto LAB_00478425;
  } while (cVar3 != '\n');
  pcVar2 = pcVar2 + -1;
LAB_00478493:
  *param_4 = (int)pcVar2 - (int)local_4;
  *pcVar2 = '\0';
  return local_4;
}


