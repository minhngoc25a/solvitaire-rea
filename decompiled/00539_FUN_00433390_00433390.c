// Function: FUN_00433390
// Entry: 00433390
// Size: 100 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00433390(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
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
      if ((uVar4 <= param_3) && ((uVar4 < param_3 || (uVar3 <= param_2)))) {
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
        if ((param_5 <= uVar4) && ((param_5 < uVar4 || (param_4 < uVar3)))) {
          return 0;
        }
      }
    }
  }
  return 1;
}


