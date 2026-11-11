// Function: FUN_004c6301
// Entry: 004c6301
// Size: 160 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004c6301(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = *(uint *)*param_1 & 0xfffffffe;
  FUN_004aa8d4(*(FILE **)param_1[1],(int *)param_1[2]);
  ___acrt_stdio_free_buffer_nolock(*(undefined4 **)param_1[1]);
  LOCK();
  *(uint *)(*(int *)param_1[1] + 0xc) = *(uint *)(*(int *)param_1[1] + 0xc) & 0xfffff81f;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    pvVar1 = *(LPVOID *)param_1[4];
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = __calloc_base(uVar3,1);
      FUN_004247be((LPVOID)0x0);
      if (pvVar1 == (LPVOID)0x0) {
        _DAT_005449a0 = _DAT_005449a0 + 1;
        return -1;
      }
      uVar4 = 0x140;
    }
    else {
      uVar4 = 0x180;
    }
    iVar2 = *(int *)param_1[1];
  }
  else {
    uVar4 = 0x400;
    uVar3 = 2;
    iVar2 = *(int *)param_1[1];
    pvVar1 = (LPVOID)(iVar2 + 0x14);
  }
  iVar2 = set_buffer(iVar2,pvVar1,uVar3,uVar4);
  return iVar2;
}


