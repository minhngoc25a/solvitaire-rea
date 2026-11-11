// Function: FUN_004ff993
// Entry: 004ff993
// Size: 223 bytes
// Thunk: false
// External: false


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl FUN_004ff993(int *param_1,wchar_t *param_2,ulong param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  int local_1c;
  int local_18;
  char local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  FUN_00425544(&local_1c,param_1);
  local_c = *(uint *)(local_18 + 8);
  iVar1 = ___acrt_GetLocaleInfoEx_16(param_2,param_3,(wchar_t *)0x0,0);
  if (iVar1 == 0) goto LAB_004ffa4e;
  uVar2 = iVar1 * 2 + 8;
  uVar2 = -(uint)((uint)(iVar1 * 2) < uVar2) & uVar2;
  if (uVar2 == 0) {
    pwVar4 = (wchar_t *)0x0;
  }
  else if (uVar2 < 0x401) {
    puVar3 = (undefined4 *)&stack0xffffffd8;
    pwVar4 = (wchar_t *)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_004ffa0c:
      pwVar4 = (wchar_t *)(puVar3 + 2);
      if ((pwVar4 != (wchar_t *)0x0) &&
         (iVar1 = ___acrt_GetLocaleInfoEx_16(param_2,param_3,pwVar4,iVar1), iVar1 != 0)) {
        FUN_004c42a4(local_c,0,pwVar4,-1,(LPSTR)(-(uint)(param_5 != 0) & param_4),param_5,0,
                     (undefined4 *)0x0);
      }
    }
  }
  else {
    puVar3 = __malloc_base(uVar2);
    pwVar4 = (wchar_t *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0xdddd;
      goto LAB_004ffa0c;
    }
  }
  FUN_004c2aa5((int)pwVar4);
LAB_004ffa4e:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


