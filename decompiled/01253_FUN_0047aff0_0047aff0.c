// Function: FUN_0047aff0
// Entry: 0047aff0
// Size: 417 bytes
// Thunk: false
// External: false


HBITMAP FUN_0047aff0(HBITMAP param_1)

{
  bool bVar1;
  HDC hdc;
  int iVar2;
  HBITMAP ho;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  LPVOID local_58;
  char *local_54;
  int local_50;
  HBITMAP local_4c;
  HDC local_48;
  undefined1 local_44 [4];
  int local_40;
  UINT local_3c;
  ushort local_32;
  BITMAPINFO local_2c;
  
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc == (HDC)0x0) {
    return (HBITMAP)0x0;
  }
  local_48 = hdc;
  iVar2 = GetObjectW(param_1,0x18,local_44);
  ho = (HBITMAP)0x0;
  if (iVar2 == 0x18) {
    _memset(&local_2c,0,0x2c);
    local_2c.bmiHeader.biWidth = local_40;
    local_2c.bmiHeader.biHeight = local_3c;
    local_2c.bmiHeader.biSize = 0x28;
    local_2c.bmiHeader.biPlanes = 1;
    local_2c.bmiHeader.biCompression = 0;
    local_2c.bmiHeader.biBitCount = 0x18;
    if (0x18 < local_32) {
      local_2c.bmiHeader.biBitCount = 0x20;
    }
    ho = CreateDIBSection(hdc,&local_2c,0,&local_58,(HANDLE)0x0,0);
    local_4c = ho;
    if (ho != (HBITMAP)0x0) {
      iVar2 = GetDIBits(hdc,param_1,0,local_3c,local_58,&local_2c,0);
      if (iVar2 == 0) {
        DeleteObject(ho);
        ho = (HBITMAP)0x0;
      }
      else if (local_32 == 0x20) {
        bVar1 = false;
        local_50 = FUN_0047a6f7(local_40,0x20);
        param_1 = (HBITMAP)0x0;
        if (0 < (int)local_3c) {
          local_54 = (char *)((int)local_58 + 3);
          do {
            if (bVar1) goto LAB_0047b17e;
            iVar2 = 0;
            pcVar4 = local_54;
            if (0 < local_40) {
              do {
                if (*pcVar4 != '\0') {
                  bVar1 = true;
                  break;
                }
                pcVar4 = pcVar4 + 4;
                iVar2 = iVar2 + 1;
              } while (iVar2 < local_40);
            }
            param_1 = (HBITMAP)((int)&param_1->unused + 1);
            local_54 = local_54 + local_50;
          } while ((int)param_1 < (int)local_3c);
          if (bVar1) goto LAB_0047b17e;
        }
        iVar2 = 0;
        if (0 < (int)local_3c) {
          iVar6 = 0;
          do {
            iVar5 = 0;
            puVar3 = (undefined1 *)((int)local_58 + iVar6 + 3);
            if (0 < local_40) {
              do {
                *puVar3 = 0xff;
                iVar5 = iVar5 + 1;
                puVar3 = puVar3 + 4;
              } while (iVar5 < local_40);
            }
            iVar6 = iVar6 + local_50;
            iVar2 = iVar2 + 1;
            ho = local_4c;
            hdc = local_48;
          } while (iVar2 < (int)local_3c);
        }
      }
    }
  }
LAB_0047b17e:
  DeleteDC(hdc);
  return ho;
}


