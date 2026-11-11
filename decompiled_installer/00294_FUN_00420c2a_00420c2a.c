// Function: FUN_00420c2a
// Entry: 00420c2a
// Size: 307 bytes
// Thunk: false
// External: false


undefined4 * FUN_00420c2a(int *param_1)

{
  char cVar1;
  HANDLE h;
  undefined4 *puVar2;
  DWORD DVar3;
  int iVar4;
  HDC hdc;
  undefined4 *puVar5;
  undefined1 local_54 [4];
  int local_50;
  ushort local_42;
  int local_40;
  
  puVar5 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)FUN_004258d0(DAT_005434a8,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (DVar3 = GetObjectType((HGDIOBJ)*puVar2), DVar3 == 7)) {
    cVar1 = *(char *)(puVar2 + 2);
    h = (HANDLE)*puVar2;
    if (((h != (HANDLE)0x0) &&
        (((iVar4 = GetObjectW(h,0x54,local_54), iVar4 == 0x54 && (local_40 != 0)) &&
         (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)))) &&
       (puVar5 = FUN_0047a7be(((cVar1 == ' ') - 1 & 0xffffffd0) + 0x40 | 0x8000),
       puVar5 != (undefined4 *)0x0)) {
      puVar5[0x5c] = 0;
      puVar5[0x59] = 0;
      puVar5[0x5d] = h;
      DVar3 = GdiGetBatchLimit();
      puVar5[0x5b] = DVar3;
      GdiSetBatchLimit(1);
      puVar5[0x5a] = hdc;
      SelectObject(hdc,h);
      puVar5[0x32] = local_40;
      iVar4 = FUN_0047a6f7(local_50,(uint)local_42);
      puVar5[0x33] = iVar4;
      puVar5[0x20] = (int)*(short *)(puVar2 + 1);
      puVar5[0x21] = (int)*(short *)((int)puVar2 + 6);
      puVar5[0x1c] = &LAB_00420ba7;
      puVar5[0x22] = (uint)(cVar1 == ' ') * 8 + 0x18;
    }
  }
  return puVar5;
}


