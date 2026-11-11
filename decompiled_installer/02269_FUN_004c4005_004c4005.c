// Function: FUN_004c4005
// Entry: 004c4005
// Size: 671 bytes
// Thunk: false
// External: false


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl
FUN_004c4005(int *param_1,wchar_t *param_2,ulong param_3,byte *param_4,int param_5,byte *param_6,
            int param_7,uint param_8)

{
  BOOL BVar1;
  BYTE *pBVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  LPWSTR pWVar8;
  wchar_t *pwVar9;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_004c424f;
  }
  else {
    param_5 = ___strncnt((char *)param_4,param_5);
  }
  if (param_7 < 1) {
    if (param_7 < -1) goto LAB_004c424f;
  }
  else {
    param_7 = ___strncnt((char *)param_6,param_7);
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 8);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    if ((param_5 == param_7) ||
       (((1 < param_7 || (1 < param_5)) || (BVar1 = GetCPInfo(param_8,&local_1c), BVar1 == 0))))
    goto LAB_004c424f;
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar2 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar2[1] != 0)) &&
               ((*param_4 < *pBVar2 || (pBVar2[1] < *param_4))))) {
          pBVar2 = pBVar2 + 2;
          local_1c.LeadByte[0] = *pBVar2;
        }
      }
      goto LAB_004c424f;
    }
    if (0 < param_7) {
      if (1 < local_1c.MaxCharSize) {
        pBVar2 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar2[1] != 0)) &&
               ((*param_6 < *pBVar2 || (pBVar2[1] < *param_6))))) {
          pBVar2 = pBVar2 + 2;
          local_1c.LeadByte[0] = *pBVar2;
        }
      }
      goto LAB_004c424f;
    }
  }
  iVar3 = FUN_0048139c(param_8,9,(LPCSTR)param_4,param_5,(LPWSTR)0x0,0);
  if (iVar3 == 0) goto LAB_004c424f;
  uVar4 = iVar3 * 2 + 8;
  uVar4 = -(uint)((uint)(iVar3 * 2) < uVar4) & uVar4;
  if (uVar4 == 0) {
LAB_004c4299:
    pwVar9 = (wchar_t *)0x0;
  }
  else {
    if (0x400 < uVar4) {
      puVar6 = __malloc_base(uVar4);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_004c4194;
      }
      goto LAB_004c4299;
    }
    puVar6 = (undefined4 *)&stack0xffffffc8;
    if (&stack0x00000000 == (undefined1 *)0x38) goto LAB_004c4299;
LAB_004c4194:
    pwVar9 = (wchar_t *)(puVar6 + 2);
    if (pwVar9 == (wchar_t *)0x0) goto LAB_004c4299;
    iVar5 = FUN_0048139c(param_8,1,(LPCSTR)param_4,param_5,pwVar9,iVar3);
    if ((iVar5 != 0) &&
       (iVar5 = FUN_0048139c(param_8,9,(LPCSTR)param_6,param_7,(LPWSTR)0x0,0), iVar5 != 0)) {
      uVar4 = iVar5 * 2 + 8;
      uVar4 = -(uint)((uint)(iVar5 * 2) < uVar4) & uVar4;
      if (uVar4 == 0) {
LAB_004c428d:
        pWVar8 = (LPWSTR)0x0;
      }
      else {
        if (0x400 < uVar4) {
          puVar6 = __malloc_base(uVar4);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0xdddd;
            goto LAB_004c421f;
          }
          goto LAB_004c428d;
        }
        puVar6 = (undefined4 *)&stack0xffffffc8;
        if (&stack0x00000000 == (undefined1 *)0x38) goto LAB_004c428d;
LAB_004c421f:
        pWVar8 = (LPWSTR)(puVar6 + 2);
        if (pWVar8 == (LPWSTR)0x0) goto LAB_004c428d;
        iVar7 = FUN_0048139c(param_8,1,(LPCSTR)param_6,param_7,pWVar8,iVar5);
        if (iVar7 != 0) {
          ___acrt_CompareStringEx_36
                    (param_2,param_3,pwVar9,iVar3,pWVar8,iVar5,(_nlsversioninfo *)0x0,(void *)0x0,0)
          ;
          FUN_004c2aa5((int)pWVar8);
          FUN_004c2aa5((int)pwVar9);
          goto LAB_004c424f;
        }
      }
      FUN_004c2aa5((int)pWVar8);
      FUN_004c2aa5((int)pwVar9);
      goto LAB_004c424f;
    }
  }
  FUN_004c2aa5((int)pwVar9);
LAB_004c424f:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


