// Function: FUN_005041b4
// Entry: 005041b4
// Size: 345 bytes
// Thunk: false
// External: false


void FUN_005041b4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  UINT UVar6;
  int *piVar7;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = (undefined4 *)FUN_00503f85();
  puVar3 = (undefined4 *)FUN_0050400f();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  iVar4 = FUN_00503fe3(&local_8);
  if (iVar4 == 0) {
    iVar4 = FUN_00503f8b(&local_c);
    if (iVar4 == 0) {
      iVar4 = FUN_00503fb7(&local_10);
      if (iVar4 == 0) {
        FUN_004247be(DAT_00544bf4);
        DAT_00544bf4 = (LPVOID)0x0;
        DVar5 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00544b48);
        if (DVar5 != 0xffffffff) {
          local_8 = DAT_00544b48 * 0x3c;
          local_c = 1;
          DAT_00544b40 = 1;
          if (DAT_00544b8e != 0) {
            local_8 = DAT_00544b9c * 0x3c + local_8;
          }
          if ((DAT_00544be2 == 0) || (DAT_00544bf0 == 0)) {
            local_10 = 0;
            local_c = 0;
          }
          else {
            local_10 = (DAT_00544bf0 - DAT_00544b9c) * 0x3c;
          }
          _memset((void *)*puVar3,0,0x80);
          _memset((void *)puVar3[1],0,0x80);
          _memset((void *)*puVar2,0,0x40);
          _memset((void *)puVar2[1],0,0x40);
          UVar6 = ____lc_codepage_func();
          FUN_00504172((LPCWSTR)&DAT_00544b4c,(short *)*puVar3,(LPSTR)*puVar2,UVar6);
          FUN_00504172((LPCWSTR)&DAT_00544ba0,(short *)puVar3[1],(LPSTR)puVar2[1],UVar6);
        }
        iVar4 = local_8;
        piVar7 = FUN_00503f7f();
        uVar1 = local_c;
        *piVar7 = iVar4;
        puVar2 = FUN_00503f73();
        iVar4 = local_10;
        *puVar2 = uVar1;
        piVar7 = FUN_00503f79();
        *piVar7 = iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


