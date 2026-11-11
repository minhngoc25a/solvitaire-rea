// Function: FUN_004784c0
// Entry: 004784c0
// Size: 456 bytes
// Thunk: false
// External: false


short * FUN_004784c0(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  uint local_14;
  short *local_10;
  int local_c;
  SIZE_T local_8;
  LONG local_4;
  
  puVar1 = param_1;
  psVar3 = HeapAlloc(DAT_00542264,0,0x1000);
  if (psVar3 == (short *)0x0) {
    return (short *)0x0;
  }
  local_8 = 0x1000;
  local_c = 0x7ff;
  sVar2 = (short)param_1;
  local_10 = psVar3;
  do {
    do {
      if (param_3 != -1) {
        if (param_3 != 0) {
          param_3 = param_3 + -1;
          goto LAB_00478519;
        }
LAB_004785df:
        if (param_2 == 0) {
LAB_004785e6:
          if (sVar2 == 10) {
            psVar3 = psVar3 + -1;
          }
          else if (sVar2 == 0xd) {
            psVar3 = psVar3 + -1;
            if (puVar1[1] == 0) {
              ReadFile((HANDLE)*puVar1,&param_1,2,&local_14,(LPOVERLAPPED)0x0);
            }
            else {
              local_14 = FUN_004781f0(puVar1,(uint *)&param_1,2);
            }
            if ((short)param_1 != 10) {
              if (puVar1[1] == 0) {
                local_8 = 0xfffffffe;
                local_4 = -1;
                SetFilePointer((HANDLE)*puVar1,-2,&local_4,1);
              }
              else {
                puVar1[3] = puVar1[3] + 2;
              }
            }
          }
        }
        goto LAB_0047865e;
      }
LAB_00478519:
      if (puVar1[1] == 0) {
        ReadFile((HANDLE)*puVar1,&param_1,2,&local_14,(LPOVERLAPPED)0x0);
      }
      else {
        local_14 = FUN_004781f0(puVar1,(uint *)&param_1,2);
      }
      sVar2 = (short)param_1;
      if (local_14 != 2) goto LAB_004785df;
      if ((short)param_1 != 0) {
        *psVar3 = (short)param_1;
        psVar3 = psVar3 + 1;
      }
      iVar4 = (int)psVar3 - (int)local_10 >> 1;
      if (local_c < iVar4) {
        local_c = local_c + 0x800;
        local_8 = local_8 + 0x1000;
        local_10 = HeapReAlloc(DAT_00542264,8,local_10,local_8);
        psVar3 = local_10 + iVar4;
        sVar2 = (short)param_1;
      }
      if (sVar2 == 0) goto LAB_004785df;
    } while (param_2 != 0);
    if (sVar2 == 0xd) goto LAB_004785e6;
  } while (sVar2 != 10);
  psVar3 = psVar3 + -1;
LAB_0047865e:
  *param_4 = (int)psVar3 - (int)local_10 >> 1;
  *psVar3 = 0;
  return local_10;
}


