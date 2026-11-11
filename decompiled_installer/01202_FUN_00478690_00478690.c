// Function: FUN_00478690
// Entry: 00478690
// Size: 344 bytes
// Thunk: false
// External: false


byte * FUN_00478690(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined1 local_11;
  SIZE_T local_10;
  LONG local_c;
  byte *local_8;
  uint local_4;
  
  local_10 = 0x1000;
  pbVar1 = HeapAlloc(DAT_00542264,0,0x1000);
  local_8 = pbVar1;
  if (pbVar1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  do {
    do {
      if (param_3 != -1) {
        if (param_3 != 0) {
          param_3 = param_3 + -1;
          goto LAB_004786dc;
        }
LAB_0047874d:
        if (param_2 == 0) {
LAB_00478751:
          if (local_11 == 10) {
            pbVar1 = pbVar1 + -1;
          }
          else if (local_11 == 0xd) {
            pbVar1 = pbVar1 + -1;
            if (param_1[1] == 0) {
              ReadFile((HANDLE)*param_1,&local_11,1,&local_4,(LPOVERLAPPED)0x0);
            }
            else {
              local_4 = FUN_004781f0(param_1,(uint *)&local_11,1);
            }
            if (local_11 != 10) {
              if (param_1[1] == 0) {
                local_10 = 0xffffffff;
                local_c = -1;
                SetFilePointer((HANDLE)*param_1,-1,&local_c,1);
              }
              else {
                param_1[3] = param_1[3] + 1;
              }
            }
          }
        }
        goto LAB_004787c3;
      }
LAB_004786dc:
      local_4 = FUN_004b78e0(param_1,pbVar1);
      if (local_4 == 0) {
        local_11 = 0;
      }
      else {
        local_11 = *pbVar1;
      }
      pbVar1 = pbVar1 + local_4;
      iVar2 = (int)pbVar1 - (int)local_8;
      if ((int)(local_10 - 5) < iVar2) {
        local_10 = local_10 + 0x1000;
        local_8 = HeapReAlloc(DAT_00542264,8,local_8,local_10);
        pbVar1 = local_8 + iVar2;
      }
      if (local_11 == 0) goto LAB_0047874d;
    } while (param_2 != 0);
    if (local_11 == 0xd) goto LAB_00478751;
  } while (local_11 != 10);
  pbVar1 = pbVar1 + -1;
LAB_004787c3:
  *param_4 = (int)pbVar1 - (int)local_8;
  *pbVar1 = 0;
  return local_8;
}


