// Function: FUN_0047a4a2
// Entry: 0047a4a2
// Size: 126 bytes
// Thunk: false
// External: false


HICON __cdecl FUN_0047a4a2(short *param_1)

{
  PBYTE presbits;
  HGLOBAL hMem;
  HICON pHVar1;
  
  pHVar1 = (HICON)0x0;
  hMem = FUN_0047a5af(param_1);
  if (hMem != (HGLOBAL)0x0) {
    presbits = *(PBYTE *)((int)hMem + 0x424);
    pHVar1 = CreateIconFromResourceEx
                       (presbits,*(DWORD *)((int)hMem + 0x428),1,0x30000,*(int *)(presbits + 4),
                        *(int *)(presbits + 8) / 2,0);
    if ((pHVar1 == (HICON)0x0) && (*(short *)(*(int *)((int)hMem + 0x42c) + 0xe) != 0x10)) {
      pHVar1 = CreateIconFromResource
                         (*(PBYTE *)((int)hMem + 0x424),*(DWORD *)((int)hMem + 0x428),1,0x30000);
    }
    GlobalFree(*(HGLOBAL *)((int)hMem + 0x424));
    GlobalFree(hMem);
  }
  return pHVar1;
}


