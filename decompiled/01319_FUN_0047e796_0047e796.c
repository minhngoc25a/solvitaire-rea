// Function: FUN_0047e796
// Entry: 0047e796
// Size: 316 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0047e796(short *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int iVar2;
  size_t sVar3;
  short *psVar4;
  int local_8;
  
  _memset(param_1,0,0x1ca);
  if (*param_2 != L'\0') {
    if ((*param_2 != L'.') || (param_2[1] == L'\0')) {
      local_8 = 0;
      do {
        sVar3 = _wcscspn(param_2,L"_.,");
        if (sVar3 == 0) {
          return 0xffffffff;
        }
        wVar1 = param_2[sVar3];
        if (local_8 == 0) {
          if (0x3f < sVar3) {
            return 0xffffffff;
          }
          iVar2 = FUN_004c2925(param_1,0x40,(int)param_2,sVar3);
          if (iVar2 != 0) goto LAB_0047e8c8;
          if (wVar1 != L'.') goto LAB_0047e897;
          local_8 = 1;
        }
        else {
          if (local_8 == 1) {
            if (0x3f < sVar3) {
              return 0xffffffff;
            }
            if (wVar1 == L'_') {
              return 0xffffffff;
            }
            iVar2 = 0x40;
            psVar4 = param_1 + 0x40;
          }
          else {
            if (local_8 != 2) {
              return 0xffffffff;
            }
            if (0xf < sVar3) {
              return 0xffffffff;
            }
            if ((wVar1 != L'\0') && (wVar1 != L',')) {
              return 0xffffffff;
            }
            iVar2 = 0x10;
            psVar4 = param_1 + 0x80;
          }
          iVar2 = FUN_004c2925(psVar4,iVar2,(int)param_2,sVar3);
          if (iVar2 != 0) goto LAB_0047e8c8;
LAB_0047e897:
          if (wVar1 == L',') {
            return 0;
          }
          if (wVar1 == L'\0') {
            return 0;
          }
        }
        param_2 = param_2 + sVar3 + 1;
        local_8 = local_8 + 1;
      } while( true );
    }
    iVar2 = FUN_004c2925(param_1 + 0x80,0x10,(int)(param_2 + 1),0xf);
    if (iVar2 != 0) {
LAB_0047e8c8:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = 0;
  }
  return 0;
}


