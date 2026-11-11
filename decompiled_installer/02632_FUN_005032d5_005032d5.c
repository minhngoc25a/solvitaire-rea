// Function: FUN_005032d5
// Entry: 005032d5
// Size: 407 bytes
// Thunk: false
// External: false


int __cdecl FUN_005032d5(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 unaff_EDI;
  longlong lVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  __crt_seek_guard::__crt_seek_guard
            ((__crt_seek_guard *)&local_30,(int)param_1,CONCAT44(unaff_EDI,param_3));
  if (((local_30 & local_2c) == 0xffffffff) || ((local_28 & local_24) == 0xffffffff)) {
    if ((char)param_4[7] == '\0') {
      iVar5 = 0x16;
      goto LAB_00503452;
    }
LAB_0050344a:
    iVar5 = param_4[6];
  }
  else {
    local_c = local_1c;
    local_8 = local_20;
    if (local_1c < 0) {
LAB_005033f9:
      lVar6 = FUN_0049d4a3((uint)param_1,param_2,param_3,(PLARGE_INTEGER)0x0);
      if (lVar6 == -1) {
        if ((char)param_4[7] != '\0') goto LAB_0050344a;
      }
      else {
        hFile = (HANDLE)FUN_004c58b7((uint)param_1);
        BVar3 = SetEndOfFile(hFile);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          *(undefined1 *)(param_4 + 9) = 1;
          param_4[8] = DVar4;
          iVar5 = 0xd;
          *(undefined1 *)(param_4 + 7) = 1;
          param_4[6] = 0xd;
          goto LAB_00503452;
        }
      }
    }
    else if ((local_1c < 1) && (local_20 == 0)) {
      if ((local_1c < 1) && (local_1c < 0)) goto LAB_005033f9;
    }
    else {
      puVar1 = __calloc_base(0x1000,1);
      if (puVar1 == (uint *)0x0) {
        iVar5 = 0xc;
        *(undefined1 *)(param_4 + 7) = 1;
        param_4[6] = 0xc;
LAB_005033e6:
        FUN_004247be(puVar1);
        goto LAB_00503452;
      }
      local_10 = __setmode_nolock((int)param_1,0x8000);
      do {
        if (local_1c < 0) goto LAB_0050337d;
        if ((local_1c < 1) && (local_20 < 0x1000)) goto LAB_0050337d;
        do {
          local_20 = 0x1000;
LAB_0050337d:
          uVar2 = FUN_004f0e95(param_1,puVar1,local_20,param_4);
          if (uVar2 == 0xffffffff) {
            if (((char)param_4[9] != '\0') && (param_4[8] == 5)) {
              *(undefined1 *)(param_4 + 7) = 1;
              param_4[6] = 0xd;
            }
            if ((char)param_4[7] == '\0') {
              iVar5 = 0;
            }
            else {
              iVar5 = param_4[6];
            }
            goto LAB_005033e6;
          }
          local_20 = local_8 - uVar2;
          local_1c = (local_c - ((int)uVar2 >> 0x1f)) - (uint)(local_8 < uVar2);
          local_c = local_1c;
          local_8 = local_20;
        } while (0 < local_1c);
      } while ((-1 < local_1c) && (local_20 != 0));
      __setmode_nolock((int)param_1,local_10);
      FUN_004247be(puVar1);
    }
    iVar5 = 0;
  }
LAB_00503452:
  FUN_0049d4a3(local_18,local_30,local_2c,(PLARGE_INTEGER)0x0);
  return iVar5;
}


