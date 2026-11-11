// Function: FUN_00482473
// Entry: 00482473
// Size: 1237 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00482473(short *param_1,uint param_2,short *param_3,short *param_4,long param_5,LPCWSTR param_6)

{
  WCHAR WVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  errno_t eVar5;
  WCHAR *pWVar6;
  uint uVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  WCHAR *_Dst;
  uint uVar11;
  WCHAR aWStackY_27e [23];
  undefined *puStackY_250;
  HMODULE local_224;
  undefined4 local_220;
  uint local_21c;
  short *local_218;
  WCHAR local_214;
  undefined1 local_212 [522];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_218 = param_4;
  iVar2 = FUN_0047f91c(param_1,param_2,0x52eec8);
  local_220 = 0;
  if (((iVar2 != 0) || (iVar2 = FUN_00480748(param_1,param_2,0x52ef48), iVar2 != 0)) ||
     (iVar2 = FUN_00480748(param_1,param_2,0x52ef08), iVar2 != 0)) goto LAB_0048293c;
  _memset(&local_214,0,0x20a);
  local_224 = (HMODULE)0x0;
  BVar3 = GetModuleHandleExW(6,param_6,&local_224);
  local_224 = (HMODULE)(-(uint)(BVar3 != 0) & (uint)local_224);
  DVar4 = GetModuleFileNameW(local_224,&local_214,0x105);
  if ((DVar4 == 0) && (iVar2 = FUN_0047f91c(&local_214,0x105,0x52df6c), iVar2 != 0))
  goto LAB_0048293c;
  _Dst = &local_214;
  pWVar6 = _Dst;
  do {
    WVar1 = *pWVar6;
    pWVar6 = pWVar6 + 1;
  } while (WVar1 != (WCHAR)local_220);
  iVar2 = (int)pWVar6 - (int)local_212 >> 1;
  if (0x40 < iVar2 + 0xbU) {
    _Dst = aWStackY_27e + iVar2;
    eVar5 = _memcpy_s(_Dst,0x20a - (iVar2 * 2 + -0x6a),&DAT_0052e5ac,6);
    if (eVar5 != 0) goto LAB_0048293c;
  }
  iVar2 = FUN_00480748(param_1,param_2,(int)_Dst);
  if (((iVar2 != 0) || (iVar2 = FUN_00480748(param_1,param_2,0x52ef50), iVar2 != 0)) ||
     (iVar2 = FUN_00480748(param_1,param_2,0x52ef2c), iVar2 != 0)) goto LAB_0048293c;
  psVar8 = local_218;
  do {
    sVar9 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar9 != (WCHAR)local_220);
  psVar10 = local_218;
  if (0x40 < ((int)psVar8 - (int)(local_218 + 1) >> 1) + 8U) {
    psVar8 = local_218;
    do {
      sVar9 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar9 != (WCHAR)local_220);
    uVar11 = (int)psVar8 - (int)(local_218 + 1) >> 1;
    uVar7 = 1;
    sVar9 = local_218[uVar11 - 1];
    if (sVar9 != 0x5c) {
      psVar8 = local_218 + (uVar11 - 1);
      do {
        if ((sVar9 == 0x2f) || (uVar11 <= uVar7)) break;
        psVar8 = psVar8 + -1;
        uVar7 = uVar7 + 1;
        sVar9 = *psVar8;
      } while (sVar9 != 0x5c);
    }
    local_21c = uVar11 - uVar7;
    if (local_21c < 0x27) {
      if (0x25 < local_21c) goto LAB_0048273b;
      iVar2 = FUN_004c2832(param_1,param_2,local_218,0x35 - (uVar7 >> 1));
      if ((iVar2 != 0) || (iVar2 = FUN_00480748(param_1,param_2,0x52e5ac), iVar2 != 0))
      goto LAB_0048293c;
      psVar10 = local_218 + (uVar11 - (uVar7 >> 1));
    }
    else if (uVar7 < 0x12) {
      iVar2 = FUN_004c2832(param_1,param_2,local_218,0x35 - uVar7);
      if ((iVar2 != 0) || (iVar2 = FUN_00480748(param_1,param_2,0x52e5ac), iVar2 != 0))
      goto LAB_0048293c;
      psVar10 = local_218 + local_21c;
    }
    else {
LAB_0048273b:
      iVar2 = FUN_004c2832(param_1,param_2,local_218,0x23);
      if ((((iVar2 != 0) || (iVar2 = FUN_00480748(param_1,param_2,0x52e5ac), iVar2 != 0)) ||
          (iVar2 = FUN_004c2832(param_1,param_2,local_218 + local_21c,8), iVar2 != 0)) ||
         (iVar2 = FUN_00480748(param_1,param_2,0x52e5ac), iVar2 != 0)) goto LAB_0048293c;
      psVar10 = local_218 + (uVar11 - 7);
    }
  }
  iVar2 = FUN_00480748(param_1,param_2,(int)psVar10);
  if (((iVar2 == 0) && (iVar2 = FUN_00480748(param_1,param_2,0x52ef50), iVar2 == 0)) &&
     (iVar2 = FUN_00480748(param_1,param_2,0x52ef1c), iVar2 == 0)) {
    psVar8 = param_1;
    do {
      sVar9 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar9 != 0);
    psVar10 = param_1;
    do {
      sVar9 = *psVar10;
      psVar10 = psVar10 + 1;
    } while (sVar9 != (WCHAR)local_220);
    eVar5 = FID_conflict___itow_s
                      (param_5,param_1 + ((int)psVar10 - (int)(param_1 + 1) >> 1),
                       param_2 - ((int)psVar8 - (int)(param_1 + 1) >> 1),10);
    if (((eVar5 == 0) && (iVar2 = FUN_00480748(param_1,param_2,0x52ef48), iVar2 == 0)) &&
       (iVar2 = FUN_00480748(param_1,param_2,0x52eeec), iVar2 == 0)) {
      psVar8 = param_1;
      do {
        sVar9 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar9 != 0);
      iVar2 = ((int)psVar8 - (int)(param_1 + 1) >> 1) + 0xb0;
      psVar8 = param_3;
      do {
        sVar9 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar9 != (WCHAR)local_220);
      if (param_2 < (uint)(((int)psVar8 - (int)(param_3 + 1) >> 1) + iVar2)) {
        iVar2 = FUN_004c2832(param_1,param_2,param_3,(param_2 - iVar2) + -3);
        if (iVar2 != 0) goto LAB_0048293c;
        param_3 = (short *)&DAT_0052e5ac;
      }
      iVar2 = FUN_00480748(param_1,param_2,(int)param_3);
      if (((iVar2 == 0) && (iVar2 = FUN_00480748(param_1,param_2,0x52ef48), iVar2 == 0)) &&
         ((iVar2 = FUN_00480748(param_1,param_2,0x530c80), iVar2 == 0 &&
          ((iVar2 = FUN_00480748(param_1,param_2,0x52ef48), iVar2 == 0 &&
           (iVar2 = FUN_00480748(param_1,param_2,0x531a90), iVar2 == 0)))))) {
        FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_0048293c:
                    /* WARNING: Subroutine does not return */
  puStackY_250 = &UNK_00482948;
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


