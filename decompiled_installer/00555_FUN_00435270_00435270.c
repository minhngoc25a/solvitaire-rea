// Function: FUN_00435270
// Entry: 00435270
// Size: 78 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00435270(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x2b8) == 0) {
    return 0xfffffffd;
  }
  plVar1 = (longlong *)(param_1 + 0x2c0);
  do {
    iVar3 = *(int *)plVar1;
    LOCK();
    lVar2 = *plVar1;
    if (*plVar1 == lVar2) {
      *plVar1 = CONCAT44(param_3,param_2);
      iVar4 = iVar3;
      iVar5 = *(int *)(param_1 + 0x2c4);
    }
    else {
      iVar4 = (int)lVar2;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    }
    UNLOCK();
  } while ((iVar4 != iVar3) || (iVar5 != *(int *)(param_1 + 0x2c4)));
  return 0;
}


