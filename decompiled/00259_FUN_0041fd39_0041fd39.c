// Function: FUN_0041fd39
// Entry: 0041fd39
// Size: 621 bytes
// Thunk: false
// External: false


void __cdecl FUN_0041fd39(short *param_1,uint param_2,uint param_3,int param_4,short *param_5)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  undefined3 extraout_var;
  int iVar6;
  short *psVar7;
  short *psVar8;
  wchar_t *_Str1;
  short *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  psVar8 = param_1;
  local_18 = (short *)0x0;
  bVar1 = false;
  psVar7 = param_5;
  psVar5 = param_1;
  if (param_5 == (short *)0x0) {
    bVar1 = true;
    if (param_1 != (short *)0x0) {
      uVar4 = FUN_0044be0a(param_1);
      psVar5 = HeapAlloc(DAT_00542264,0,uVar4 * 2 + 2);
      FUN_0044ca75(psVar5,psVar8);
      local_18 = psVar5;
    }
    param_5 = (short *)FUN_0044c3e0(0x1000,param_4);
    psVar7 = (short *)0x1000;
  }
  psVar8 = param_5;
  if ((((psVar5 != (short *)0x0) && (*psVar5 != 0)) && ((param_2 & param_3) != 0xffffffff)) &&
     (bVar2 = FUN_00479193(param_2,param_3,(uint *)&param_1,&local_14,&local_10,&local_c,&local_8,
                           &local_4), CONCAT31(extraout_var,bVar2) != 0)) {
    sVar3 = *psVar5;
    while (sVar3 != 0) {
      if (sVar3 == 0x25) {
        _Str1 = psVar5 + 1;
        iVar6 = __wcsnicmp(_Str1,L"yyyy",4);
        if (iVar6 == 0) {
          if (param_1 == (short *)0x0) {
            FUN_0044ca75(psVar8,L"0000");
          }
          else {
            FUN_0041fd15((uint)param_1,psVar8);
          }
          psVar8 = psVar8 + 4;
          psVar5 = psVar5 + 5;
        }
        else {
          iVar6 = __wcsnicmp(_Str1,L"yy",2);
          if (iVar6 == 0) {
            uVar4 = (int)param_1 % 100;
          }
          else {
            iVar6 = __wcsnicmp(_Str1,L"mm",2);
            uVar4 = local_14;
            if (((iVar6 != 0) && (iVar6 = __wcsnicmp(_Str1,L"dd",2), uVar4 = local_10, iVar6 != 0))
               && ((iVar6 = __wcsnicmp(_Str1,L"hh",2), uVar4 = local_c, iVar6 != 0 &&
                   ((iVar6 = __wcsnicmp(_Str1,L"ii",2), uVar4 = local_8, iVar6 != 0 &&
                    (iVar6 = __wcsnicmp(_Str1,L"ss",2), uVar4 = local_4, iVar6 != 0)))))) {
              sVar3 = *psVar5;
              goto LAB_0041ff25;
            }
          }
          FUN_0041fd15(uVar4,psVar8);
          psVar8 = psVar8 + 2;
          psVar5 = psVar5 + 3;
        }
      }
      else {
        sVar3 = *psVar5;
LAB_0041ff25:
        psVar5 = psVar5 + 1;
        *psVar8 = sVar3;
        psVar8 = psVar8 + 1;
      }
      if ((bVar1) && (iVar6 = (int)psVar8 - (int)param_5 >> 1, (int)psVar7 + -5 < iVar6)) {
        psVar7 = psVar7 + 0x800;
        param_5 = (short *)FUN_0044c3e0((int)psVar7,param_4);
        psVar8 = param_5 + iVar6;
      }
      sVar3 = *psVar5;
    }
  }
  *psVar8 = 0;
  if ((bVar1) &&
     (FUN_0044c470((int)psVar7 - ((int)psVar8 - (int)param_5 >> 1)), local_18 != (short *)0x0)) {
    HeapFree(DAT_00542264,0,local_18);
  }
  return;
}


