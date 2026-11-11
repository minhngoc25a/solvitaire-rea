// Function: FUN_0047d7b2
// Entry: 0047d7b2
// Size: 350 bytes
// Thunk: false
// External: false


undefined4 * __fastcall FUN_0047d7b2(undefined4 *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_14;
  undefined4 local_10;
  __acrt_ptd *local_c;
  uint local_8;
  
  pwVar2 = FUN_0047d717(*(int *)*param_1,*(byte **)param_1[1]);
  if (pwVar2 != (wchar_t *)0x0) {
    local_c = FUN_0047dbec();
    local_14 = *(int *)(local_c + 0x4c);
    local_10 = *(undefined4 *)(local_c + 0x48);
    local_8 = 0;
    iVar3 = FUN_004c032d(&local_8,(uint *)0x0,0,pwVar2,0,&local_14);
    if (iVar3 == 0) {
      puVar4 = __malloc_base(local_8 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        iVar5 = FUN_004c032d((uint *)0x0,puVar4 + 1,local_8,pwVar2,0xffffffff,&local_14);
        iVar3 = local_14;
        if (iVar5 == 0) {
          piVar1 = *(int **)(local_14 + 0x24 + *(int *)*param_1 * 0x10);
          if (piVar1 != (int *)0x0) {
            LOCK();
            iVar5 = *piVar1;
            *piVar1 = iVar5 + -1;
            UNLOCK();
            if (iVar5 + -1 == 0) {
              FUN_004247be(*(LPVOID *)(local_14 + 0x24 + *(int *)*param_1 * 0x10));
              *(undefined4 *)(iVar3 + 0x24 + *(int *)*param_1 * 0x10) = 0;
            }
          }
          if (((*(uint *)(local_c + 0x350) & DAT_00540e44) == 0) &&
             (piVar1 = *(int **)(iVar3 + 0x24 + *(int *)*param_1 * 0x10), piVar1 != (int *)0x0)) {
            LOCK();
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              FUN_004247be(*(LPVOID *)(iVar3 + 0x24 + *(int *)*param_1 * 0x10));
              *(undefined4 *)(iVar3 + 0x24 + *(int *)*param_1 * 0x10) = 0;
            }
          }
          *puVar4 = *(undefined4 *)(iVar3 + 0xc);
          *(undefined4 **)(iVar3 + 0x24 + *(int *)*param_1 * 0x10) = puVar4;
          *(undefined4 **)(iVar3 + 0x1c + *(int *)*param_1 * 0x10) = puVar4 + 1;
          return puVar4 + 1;
        }
        if ((iVar5 == 0x16) || (iVar5 == 0x22)) goto LAB_0047d906;
        FUN_004247be(puVar4);
      }
    }
    else if ((iVar3 == 0x16) || (iVar3 == 0x22)) {
LAB_0047d906:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (undefined4 *)0x0;
}


