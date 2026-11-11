// Function: FUN_004ff7e3
// Entry: 004ff7e3
// Size: 431 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ff7e3(int *param_1,int param_2,wchar_t *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  DWORD DVar4;
  wchar_t *pwVar5;
  wchar_t *local_8c;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_8c = param_3;
  *param_5 = 0;
  if (param_2 == 1) {
    uVar1 = FUN_004ff993(param_1,param_3,param_4,(uint)local_88,0x80);
    if (uVar1 != 0) {
      pvVar2 = __calloc_base(uVar1,1);
      *param_5 = (int)pvVar2;
      FUN_004247be((LPVOID)0x0);
      if ((*param_5 != 0) &&
         (iVar3 = FUN_004f0c7d((char *)*param_5,uVar1,(int)local_88,uVar1 - 1), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_004ff979;
    }
    DVar4 = GetLastError();
    if ((DVar4 != 0x7a) || (uVar1 = FUN_004ff993(param_1,param_3,param_4,0,0), uVar1 == 0))
    goto LAB_004ff979;
    pwVar5 = __calloc_base(uVar1,1);
    if (pwVar5 != (wchar_t *)0x0) {
      iVar3 = FUN_004ff993(param_1,local_8c,param_4,(uint)pwVar5,uVar1);
LAB_004ff8e8:
      if (iVar3 != 0) {
        *param_5 = (int)pwVar5;
        pwVar5 = (wchar_t *)0x0;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_8c = (wchar_t *)0x0;
        iVar3 = ___acrt_GetLocaleInfoEx_16(param_3,param_4 | 0x20000000,(wchar_t *)&local_8c,2);
        if (iVar3 != 0) {
          *(undefined1 *)param_5 = local_8c._0_1_;
        }
      }
      goto LAB_004ff979;
    }
    uVar1 = ___acrt_GetLocaleInfoEx_16(param_3,param_4,(wchar_t *)0x0,0);
    if (uVar1 == 0) goto LAB_004ff979;
    pwVar5 = __calloc_base(uVar1,2);
    if (pwVar5 != (wchar_t *)0x0) {
      iVar3 = ___acrt_GetLocaleInfoEx_16(local_8c,param_4,pwVar5,uVar1);
      goto LAB_004ff8e8;
    }
  }
  FUN_004247be(pwVar5);
LAB_004ff979:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


