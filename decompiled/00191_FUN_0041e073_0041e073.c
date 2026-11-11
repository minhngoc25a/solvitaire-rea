// Function: FUN_0041e073
// Entry: 0041e073
// Size: 83 bytes
// Thunk: false
// External: false


UINT_PTR FUN_0041e073(int *param_1,UINT_PTR param_2,UINT param_3)

{
  undefined4 *puVar1;
  UINT_PTR *pUVar2;
  UINT_PTR UVar3;
  
  UVar3 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0041e689(param_1,param_2);
    UVar3 = SetTimer((HWND)*puVar1,param_2,param_3,(TIMERPROC)0x0);
    if (UVar3 != 0) {
      pUVar2 = (UINT_PTR *)FUN_004257cc(puVar1 + 0x11,0xc);
      *pUVar2 = param_2;
    }
  }
  return UVar3;
}


