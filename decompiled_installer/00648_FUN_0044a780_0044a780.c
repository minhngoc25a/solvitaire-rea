// Function: FUN_0044a780
// Entry: 0044a780
// Size: 227 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_0044a780(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pEngineNode != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1214b);
  }
  LOCK();
  iVar3 = *(int *)(param_1 + 0x288);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x288) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if (iVar3 != 0) {
    return CONCAT44(param_3,param_2);
  }
  if (param_1 == -0x138) {
    return 0;
  }
  if (param_2 == 0 && param_3 == 0) {
    return 0;
  }
  iVar3 = param_3 + -1 + (uint)(param_2 != 0);
  lVar1 = (ulonglong)(param_2 - 1U) * (ulonglong)*(uint *)(param_1 + 0x15c);
  uVar2 = (uint)lVar1;
  lVar4 = __aulldiv(uVar2 + *(uint *)(param_1 + 0x164),
                    iVar3 * *(int *)(param_1 + 0x15c) + (int)((ulonglong)lVar1 >> 0x20) +
                    (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x164)),*(uint *)(param_1 + 0x144),0);
  lVar1 = (ulonglong)(param_2 - 1U) * (ulonglong)*(uint *)(param_1 + 0x158);
  lVar4 = lVar4 + CONCAT44((int)((ulonglong)lVar1 >> 0x20) + iVar3 * *(int *)(param_1 + 0x158),
                           (int)lVar1);
  uVar2 = (uint)lVar4;
  return CONCAT44((int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x160)),
                  uVar2 + *(uint *)(param_1 + 0x160));
}


