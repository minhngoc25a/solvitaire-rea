// Function: FUN_004a3c8d
// Entry: 004a3c8d
// Size: 907 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a3c8d(uint param_1,LPWSTR param_2,uint param_3)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  LPWSTR pWVar3;
  undefined3 extraout_var;
  BOOL BVar4;
  ulong uVar5;
  LPWSTR pWVar6;
  SIZE_T SVar7;
  SIZE_T nNumberOfBytesToRead;
  LPWSTR pWVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  DWORD local_28;
  LPWSTR local_24;
  uint local_20;
  uint local_1c;
  HANDLE local_18;
  int local_14;
  LPWSTR local_10;
  uint local_c;
  byte local_5;
  
  if (param_1 == 0xfffffffe) {
    p_Var2 = FUN_00424721();
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 9;
    return 0xffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_00544578)) {
    local_c = param_1 >> 6;
    iVar9 = (param_1 & 0x3f) * 0x38;
    local_20 = 1;
    iVar10 = (&DAT_00544378)[local_c];
    local_5 = *(byte *)(iVar9 + 0x28 + iVar10);
    local_14 = iVar9;
    if ((local_5 & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((local_5 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_18 = *(HANDLE *)(iVar9 + 0x18 + iVar10);
          local_5 = *(char *)(iVar9 + 0x29 + iVar10);
          if (local_5 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_004a3d5b;
            SVar7 = 4;
            if (3 < param_3 >> 1) {
              SVar7 = param_3 >> 1;
            }
            pWVar3 = __malloc_base(SVar7);
            FUN_004247be((LPVOID)0x0);
            FUN_004247be((LPVOID)0x0);
            local_10 = pWVar3;
            if (pWVar3 != (LPWSTR)0x0) {
              uVar12 = FUN_0049d4a3(param_1,0,0,(PLARGE_INTEGER)0x1);
              iVar10 = (&DAT_00544378)[local_c];
              *(int *)(iVar9 + 0x20 + iVar10) = (int)uVar12;
              *(int *)(iVar9 + 0x24 + iVar10) = (int)((ulonglong)uVar12 >> 0x20);
              pWVar8 = pWVar3;
              goto LAB_004a3df4;
            }
            p_Var2 = FUN_0042470e();
            *(undefined4 *)p_Var2 = 0xc;
            p_Var2 = FUN_00424721();
            *(undefined4 *)p_Var2 = 8;
          }
          else if ((local_5 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_004a3d5b:
            p_Var2 = FUN_00424721();
            *(undefined4 *)p_Var2 = 0;
            p_Var2 = FUN_0042470e();
            *(undefined4 *)p_Var2 = 0x16;
            FUN_004243be();
            pWVar3 = (LPWSTR)0x0;
          }
          else {
            local_10 = param_2;
            pWVar3 = param_2;
            SVar7 = param_3;
            pWVar8 = (LPWSTR)0x0;
LAB_004a3df4:
            iVar10 = 0;
            local_1c = (&DAT_00544378)[local_c];
            nNumberOfBytesToRead = SVar7;
            pWVar6 = local_10;
            if ((((*(byte *)(local_14 + 0x28 + local_1c) & 0x48) != 0) &&
                (bVar1 = *(byte *)(local_14 + 0x2a + local_1c), bVar1 != 10)) && (SVar7 != 0)) {
              iVar10 = 1;
              *(byte *)local_10 = bVar1;
              pWVar6 = (LPWSTR)((int)local_10 + 1);
              nNumberOfBytesToRead = SVar7 - 1;
              *(undefined1 *)(local_14 + 0x2a + (&DAT_00544378)[local_c]) = 10;
              if (((local_5 != '\0') &&
                  (bVar1 = *(byte *)(local_14 + 0x2b + (&DAT_00544378)[local_c]), bVar1 != 10)) &&
                 (nNumberOfBytesToRead != 0)) {
                *(byte *)pWVar6 = bVar1;
                pWVar6 = local_10 + 1;
                nNumberOfBytesToRead = SVar7 - 2;
                iVar10 = 2;
                *(undefined1 *)(local_14 + 0x2b + (&DAT_00544378)[local_c]) = 10;
                if (((local_5 == '\x01') &&
                    (bVar1 = *(byte *)(local_14 + 0x2c + (&DAT_00544378)[local_c]), bVar1 != 10)) &&
                   (nNumberOfBytesToRead != 0)) {
                  *(byte *)pWVar6 = bVar1;
                  nNumberOfBytesToRead = SVar7 - 3;
                  iVar10 = 3;
                  *(undefined1 *)(local_14 + 0x2c + (&DAT_00544378)[local_c]) = 10;
                  pWVar6 = (LPWSTR)((int)local_10 + 3);
                }
              }
            }
            local_10 = pWVar6;
            local_24 = pWVar3;
            bVar1 = FUN_004c9553(param_1);
            pWVar3 = pWVar8;
            if (((CONCAT31(extraout_var,bVar1) == 0) ||
                (-1 < *(char *)(local_14 + 0x28 + (&DAT_00544378)[local_c]))) ||
               (BVar4 = GetConsoleMode(local_18,&local_28), pWVar6 = local_10, BVar4 == 0)) {
              local_20 = local_20 & 0xffffff00;
LAB_004a3f4d:
              pWVar6 = local_10;
              BVar4 = ReadFile(local_18,local_10,nNumberOfBytesToRead,&local_1c,(LPOVERLAPPED)0x0);
              if ((BVar4 != 0) && (uVar11 = local_1c, local_1c <= param_3)) {
LAB_004a3f70:
                uVar11 = iVar10 + uVar11;
                if (*(char *)(local_14 + 0x28 + (&DAT_00544378)[local_c]) < '\0') {
                  if (local_5 == '\x02') {
                    if ((char)local_20 == '\0') {
                      uVar11 = FUN_004a433a(param_1,(ushort *)local_24,uVar11 >> 1);
                    }
                    else {
                      uVar11 = FUN_004a4018(param_1,local_24,uVar11 >> 1);
                    }
                  }
                  else {
                    uVar11 = FUN_004a4096(param_1,(byte *)pWVar6,uVar11,param_2,param_3 >> 1);
                  }
                }
                goto LAB_004a3f2f;
              }
              uVar5 = GetLastError();
              if (uVar5 != 5) {
                if (uVar5 == 0x6d) {
                  uVar11 = 0;
                  goto LAB_004a3f2f;
                }
                goto LAB_004a3f25;
              }
              p_Var2 = FUN_0042470e();
              *(undefined4 *)p_Var2 = 9;
              p_Var2 = FUN_00424721();
              *(undefined4 *)p_Var2 = 5;
            }
            else {
              if (local_5 != '\x02') goto LAB_004a3f4d;
              BVar4 = ReadConsoleW(local_18,local_10,nNumberOfBytesToRead >> 1,&local_1c,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar4 != 0) {
                uVar11 = local_1c * 2;
                goto LAB_004a3f70;
              }
              uVar5 = GetLastError();
LAB_004a3f25:
              ___acrt_errno_map_os_error(uVar5);
            }
          }
          uVar11 = 0xffffffff;
          pWVar8 = pWVar3;
LAB_004a3f2f:
          FUN_004247be(pWVar8);
          return uVar11;
        }
      }
      p_Var2 = FUN_00424721();
      *(undefined4 *)p_Var2 = 0;
      p_Var2 = FUN_0042470e();
      *(undefined4 *)p_Var2 = 0x16;
      goto LAB_004a400c;
    }
  }
  p_Var2 = FUN_00424721();
  *(undefined4 *)p_Var2 = 0;
  p_Var2 = FUN_0042470e();
  *(undefined4 *)p_Var2 = 9;
LAB_004a400c:
  FUN_004243be();
  return 0xffffffff;
}


