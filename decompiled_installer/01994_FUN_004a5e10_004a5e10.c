// Function: FUN_004a5e10
// Entry: 004a5e10
// Size: 377 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a5e10(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 unaff_retaddr;
  undefined1 unaff_retaddr_00;
  undefined1 unaff_retaddr_01;
  undefined1 unaff_retaddr_02;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  *(undefined4 *)(param_1 + 0x2ac) = 0x21;
  FUN_00474230(param_1);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(uStack_4,uStack_3),uStack_2),uStack_1);
  if (uVar5 < 0x80000000) {
    *(uint *)(param_1 + 0x11c) =
         CONCAT31(CONCAT21(CONCAT11(unaff_retaddr,unaff_retaddr_00),unaff_retaddr_01),
                  unaff_retaddr_02);
    FUN_0046bd50(param_1);
    FUN_0046bd70(param_1,(uint *)&stack0x00000000,4);
    iVar2 = 1;
    uVar3 = *(uint *)(param_1 + 0x11c);
    do {
      uVar1 = uVar3 & 0xff;
      if ((0x39 < uVar1 - 0x41) || ((0x5a < uVar1 && (uVar1 < 0x61)))) goto LAB_004a5f83;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 >> 8;
    } while (iVar2 < 5);
    uVar3 = *(uint *)(param_1 + 0x284);
    uVar1 = 0x7fffffff;
    if ((uVar3 != 0) && (uVar3 < 0x7fffffff)) {
      uVar1 = uVar3;
    }
    if (*(uint *)(param_1 + 0x11c) == 0x49444154) {
      iVar2 = 1;
      if (*(char *)(param_1 + 0x14c) != '\0') {
        iVar2 = 7;
      }
      uVar3 = ((8 < *(byte *)(param_1 + 0x150)) + 1) * (uint)*(byte *)(param_1 + 0x153) *
              *(int *)(param_1 + 0x100) + iVar2;
      if ((uint)(0xffffffff / (ulonglong)uVar3) < *(uint *)(param_1 + 0x104)) {
        uVar4 = 0x7fffffff;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x104) * uVar3;
      }
      if (0x7f36 < uVar3) {
        uVar3 = 0x7f36;
      }
      uVar4 = (uVar4 / uVar3) * 5 + uVar4 + 0xb;
      uVar3 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        uVar3 = uVar4;
      }
      if (uVar1 < uVar3) {
        uVar1 = uVar3;
      }
    }
    if (uVar5 <= uVar1) {
      *(undefined4 *)(param_1 + 0x2ac) = 0x41;
      return uVar5;
    }
  }
LAB_004a5f83:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


