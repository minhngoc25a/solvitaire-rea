// Function: FUN_0047b2f8
// Entry: 0047b2f8
// Size: 197 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0047b2f8(int param_1,HDC param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  HFONT h;
  float10 fVar4;
  LOGFONTW local_68;
  double local_c;
  
  fVar4 = FUN_0047a781(param_3,_DAT_0050e0d8);
  fVar1 = (float)fVar4;
  if ((*(HGDIOBJ *)(param_1 + 0x15c) == (HGDIOBJ)0x0) ||
     (local_c = (double)fVar1, *(float *)(param_1 + 0x160) != fVar1)) {
    local_c = (double)fVar1;
    iVar3 = GetObjectW(*(HANDLE *)(param_1 + 0x13c),0x5c,&local_68);
    if (iVar3 == 0x5c) {
      local_68.lfEscapement = thunk_FUN_00469d60();
      local_68.lfOutPrecision = '\a';
      local_68.lfOrientation = local_68.lfEscapement;
      if (*(HGDIOBJ *)(param_1 + 0x15c) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x15c));
      }
      h = CreateFontIndirectW(&local_68);
      *(HFONT *)(param_1 + 0x15c) = h;
      if (h != (HFONT)0x0) {
        SelectObject(param_2,h);
        *(float *)(param_1 + 0x160) = fVar1;
        goto LAB_0047b347;
      }
    }
    uVar2 = 0;
  }
  else {
    SelectObject(param_2,*(HGDIOBJ *)(param_1 + 0x15c));
LAB_0047b347:
    uVar2 = 1;
  }
  return uVar2;
}


