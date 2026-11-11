// Function: FUN_00483ec0
// Entry: 00483ec0
// Size: 453 bytes
// Thunk: false
// External: false


void __fastcall FUN_00483ec0(void *param_1)

{
  ushort uVar1;
  ushort in_FPUControlWord;
  undefined2 in_XMM0_Wa;
  undefined2 in_XMM0_Wb;
  undefined2 in_XMM0_Wc;
  ushort in_XMM0_Wd;
  
  if ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f) {
    uVar1 = (in_XMM0_Wd & 0x7fff) + 0xcfd0;
    if (uVar1 < 0x10c6) {
      return;
    }
    if ((short)uVar1 < 0x10c6) {
      if (uVar1 >> 4 == 0xcfd) {
        return;
      }
      return;
    }
  }
  FUN_004c6f4f(param_1,CONCAT22(in_XMM0_Wb,in_XMM0_Wa),
               (int)(CONCAT26(in_XMM0_Wd,CONCAT24(in_XMM0_Wc,CONCAT22(in_XMM0_Wb,in_XMM0_Wa))) >>
                    0x20));
  return;
}


