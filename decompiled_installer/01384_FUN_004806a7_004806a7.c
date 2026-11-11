// Function: FUN_004806a7
// Entry: 004806a7
// Size: 161 bytes
// Thunk: false
// External: false


undefined1 (*) [16] __cdecl FUN_004806a7(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  
  pauVar4 = (undefined1 (*) [16])0x0;
  pauVar2 = param_1;
  if (DAT_00544988 < 2) {
    do {
      puVar1 = *pauVar2;
      pauVar4 = (undefined1 (*) [16])(*pauVar2 + 2);
      pauVar2 = pauVar4;
    } while (*(short *)puVar1 != 0);
    do {
      pauVar4 = (undefined1 (*) [16])(pauVar4[-1] + 0xe);
      if (pauVar4 == param_1) break;
    } while (*(ushort *)*pauVar4 != param_2);
    if (*(ushort *)*pauVar4 != param_2) {
      pauVar4 = (undefined1 (*) [16])0x0;
    }
  }
  else {
    for (; ((uint)(*param_1 + 1) & 0xe) != 0; param_1 = (undefined1 (*) [16])(*param_1 + 2)) {
      if (*(ushort *)*param_1 == param_2) {
        pauVar4 = param_1;
      }
      if (*(ushort *)*param_1 == 0) {
        return pauVar4;
      }
    }
    bVar5 = param_2 != 0;
    bVar6 = param_2 == 0;
    if (bVar6) {
      bVar5 = true;
      while (iVar3 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15), !bVar5) {
        param_1 = param_1 + 1;
        bVar5 = param_1 == (undefined1 (*) [16])0x0;
      }
      pauVar4 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
    }
    else {
      while( true ) {
        iVar3 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
        if (bVar5) {
          pauVar4 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
        }
        if (bVar6) break;
        bVar5 = (undefined1 (*) [16])0xffffffef < param_1;
        param_1 = param_1 + 1;
        bVar6 = param_1 == (undefined1 (*) [16])0x0;
      }
    }
  }
  return pauVar4;
}


