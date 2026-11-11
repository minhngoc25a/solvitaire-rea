// Function: FUN_0041df72
// Entry: 0041df72
// Size: 257 bytes
// Thunk: false
// External: false


undefined4 FUN_0041df72(int *param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  HACCEL pHVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar1 = FUN_004258d0(DAT_0054398c,param_1);
  if (uVar1 != 0) {
    uVar6 = (param_2 & 0x10000 | 0xc000) >> 0xe;
    if ((param_2 & 0x20000) != 0) {
      uVar6 = uVar6 | 8;
    }
    if ((param_2 & 0x40000) != 0) {
      uVar6 = uVar6 | 0x10;
    }
    iVar4 = 0;
    if (0 < *(int *)(uVar1 + 0x10)) {
      pbVar5 = *(byte **)(uVar1 + 4);
      do {
        if (((param_2 & 0xffff) == (uint)*(ushort *)(pbVar5 + 2)) && (uVar6 == *pbVar5)) {
          *(undefined2 *)(*(byte **)(uVar1 + 4) + iVar4 * 6 + 4) = param_3;
          goto LAB_0041e04b;
        }
        iVar4 = iVar4 + 1;
        pbVar5 = pbVar5 + 6;
      } while (iVar4 < *(int *)(uVar1 + 0x10));
    }
    iVar4 = *(int *)(uVar1 + 0x10) + 1;
    *(int *)(uVar1 + 0x10) = iVar4;
    if (iVar4 == 1) {
      pvVar2 = HeapAlloc(DAT_00542264,0,6);
    }
    else {
      pvVar2 = HeapReAlloc(DAT_00542264,0,*(LPVOID *)(uVar1 + 4),iVar4 * 6);
    }
    *(LPVOID *)(uVar1 + 4) = pvVar2;
    *(short *)(*(int *)(uVar1 + 0x10) * 6 + -4 + (int)pvVar2) = (short)param_2;
    *(undefined2 *)(*(int *)(uVar1 + 0x10) * 6 + -2 + *(int *)(uVar1 + 4)) = param_3;
    *(char *)(*(int *)(uVar1 + 0x10) * 6 + -6 + *(int *)(uVar1 + 4)) = (char)uVar6;
LAB_0041e04b:
    if (*(int *)(uVar1 + 8) != 0) {
      DestroyAcceleratorTable(*(HACCEL *)(uVar1 + 8));
    }
    pHVar3 = CreateAcceleratorTableW(*(LPACCEL *)(uVar1 + 4),*(int *)(uVar1 + 0x10));
    *(HACCEL *)(uVar1 + 8) = pHVar3;
  }
  return *(undefined4 *)(uVar1 + 8);
}


