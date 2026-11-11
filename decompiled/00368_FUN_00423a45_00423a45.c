// Function: FUN_00423a45
// Entry: 00423a45
// Size: 177 bytes
// Thunk: false
// External: false


HFONT FUN_00423a45(HFONT param_1,LPCWSTR param_2,int param_3,uint param_4)

{
  HFONT pHVar1;
  uint iQuality;
  uint bStrikeOut;
  uint bUnderline;
  uint bItalic;
  int iVar2;
  HFONT pHVar3;
  int cWeight;
  int cWidth;
  int cEscapement;
  int cOrientation;
  DWORD iCharSet;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iPitchAndFamily;
  
  pHVar1 = (HFONT)FUN_0042583b(DAT_00543570,(int)param_1);
  pHVar3 = (HFONT)0x0;
  if (pHVar1 != (HFONT)0x0) {
    iPitchAndFamily = 0;
    iQuality = param_4 >> 3 & 2;
    iClipPrecision = 0;
    iOutPrecision = 4;
    iCharSet = 1;
    bStrikeOut = param_4 >> 3 & 1;
    bUnderline = param_4 >> 2 & 1;
    bItalic = param_4 >> 9 & 1;
    cWeight = (-(uint)((param_4 & 0x100) != 0) & 300) + 400;
    cOrientation = 0;
    cEscapement = 0;
    cWidth = 0;
    iVar2 = MulDiv(param_3,DAT_00543574,0x48);
    pHVar3 = CreateFontW(-iVar2,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,
                         bStrikeOut,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,
                         param_2);
    if (pHVar3 == (HFONT)0x0) {
      if (param_1 != (HFONT)0xffffffff) {
        pHVar1 = param_1;
      }
      FUN_00425965(DAT_00543570,(int)pHVar1);
    }
    else {
      pHVar1->unused = (int)pHVar3;
      if (param_1 == (HFONT)0xffffffff) {
        pHVar3 = pHVar1;
      }
    }
  }
  return pHVar3;
}


