// Function: FUN_00435170
// Entry: 00435170
// Size: 204 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00435170(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  uint uStack_4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x100);
  if (iVar2 == 0) {
    uStack_4 = 0;
    local_8 = 0;
  }
  else if (iVar2 == -0x100) {
    uStack_4 = 0;
    local_8 = 0;
  }
  else {
    local_8 = 0;
    uStack_4 = 0;
    LOCK();
    lVar1 = *(longlong *)(iVar2 + 0x128);
    if (lVar1 == 0) {
      *(longlong *)(iVar2 + 0x128) = 0;
    }
    else {
      uStack_4 = (uint)((ulonglong)lVar1 >> 0x20);
      local_8 = (uint)lVar1;
    }
    UNLOCK();
  }
  LOCK();
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x14) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  if (iVar2 != 1) {
    uVar3 = 0;
    uVar4 = 0;
    LOCK();
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 == 0) {
      *(longlong *)(param_1 + 0x18) = 0;
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar3 = (uint)lVar1;
    }
    UNLOCK();
    if ((uVar4 < uStack_4) || ((uVar4 <= uStack_4 && (uVar3 <= local_8)))) {
      uVar3 = 0;
      uVar4 = 0;
      LOCK();
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (lVar1 == 0) {
        *(longlong *)(param_1 + 0x20) = 0;
      }
      else {
        uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar3 = (uint)lVar1;
      }
      UNLOCK();
      if ((uStack_4 < uVar4) || ((uStack_4 <= uVar4 && (local_8 < uVar3)))) {
        return 1;
      }
    }
  }
  return 0;
}


