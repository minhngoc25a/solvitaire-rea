// Function: FUN_004ff5e5
// Entry: 004ff5e5
// Size: 495 bytes
// Thunk: false
// External: false


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl
FUN_004ff5e5(int *param_1,wchar_t *param_2,uint param_3,char *param_4,int param_5,wchar_t *param_6,
            int param_7,uint param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  LPCWSTR pWVar7;
  
  uVar1 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  iVar4 = param_5;
  if (0 < param_5) {
    iVar2 = ___strncnt(param_4,param_5);
    iVar4 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 8);
  }
  iVar2 = FUN_0048139c(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,iVar4,(LPWSTR)0x0,0);
  if (iVar2 == 0) goto LAB_004ff7c2;
  uVar3 = iVar2 * 2 + 8;
  uVar3 = -(uint)((uint)(iVar2 * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    pwVar6 = (wchar_t *)0x0;
  }
  else if (uVar3 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe8;
    pwVar6 = (wchar_t *)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_004ff698:
      pwVar6 = (wchar_t *)(puVar5 + 2);
      if (((pwVar6 != (wchar_t *)0x0) &&
          (iVar4 = FUN_0048139c(param_8,1,param_4,iVar4,pwVar6,iVar2), iVar4 != 0)) &&
         (iVar4 = ___acrt_LCMapStringEx_36
                            (param_2,param_3,pwVar6,iVar2,(wchar_t *)0x0,0,(_nlsversioninfo *)0x0,
                             (void *)0x0,0), iVar4 != 0)) {
        if ((param_3 & 0x400) == 0) {
          uVar3 = iVar4 * 2 + 8;
          uVar3 = -(uint)((uint)(iVar4 * 2) < uVar3) & uVar3;
          if (uVar3 == 0) {
            pWVar7 = (LPCWSTR)0x0;
          }
          else if (uVar3 < 0x401) {
            puVar5 = (undefined4 *)&stack0xffffffe8;
            pWVar7 = (LPCWSTR)&stack0xffffffe8;
            if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_004ff759:
              pWVar7 = (LPCWSTR)(puVar5 + 2);
              if ((pWVar7 != (LPCWSTR)0x0) &&
                 (iVar2 = ___acrt_LCMapStringEx_36
                                    (param_2,param_3,pwVar6,iVar2,pWVar7,iVar4,
                                     (_nlsversioninfo *)0x0,(void *)0x0,0), iVar2 != 0)) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = (wchar_t *)0x0;
                }
                iVar4 = FUN_004c42a4(param_8,0,pWVar7,iVar4,(LPSTR)param_6,param_7,0,
                                     (undefined4 *)0x0);
                if (iVar4 != 0) {
                  FUN_004c2aa5((int)pWVar7);
                  goto LAB_004ff7b9;
                }
              }
            }
          }
          else {
            puVar5 = __malloc_base(uVar3);
            pWVar7 = (LPCWSTR)0x0;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0xdddd;
              goto LAB_004ff759;
            }
          }
          FUN_004c2aa5((int)pWVar7);
        }
        else if ((param_7 != 0) && (iVar4 <= param_7)) {
          ___acrt_LCMapStringEx_36
                    (param_2,param_3,pwVar6,iVar2,param_6,param_7,(_nlsversioninfo *)0x0,(void *)0x0
                     ,0);
        }
      }
    }
  }
  else {
    puVar5 = __malloc_base(uVar3);
    pwVar6 = (wchar_t *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_004ff698;
    }
  }
LAB_004ff7b9:
  FUN_004c2aa5((int)pwVar6);
LAB_004ff7c2:
  FUN_004257be(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


