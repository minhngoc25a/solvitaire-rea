// Function: FUN_00491900
// Entry: 00491900
// Size: 88 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00491900(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x3a2;
  iVar3 = 0;
  do {
    iVar1 = (iVar2 + iVar3) / 2;
    if (*(uint *)(&UNK_005122f8 + iVar1 * 0xc) < param_1) {
      iVar3 = iVar1 + 1;
    }
    else {
      if (*(uint *)(&UNK_005122f8 + iVar1 * 0xc) <= param_1) {
        if (*(uint *)(&UNK_005122fc + iVar1 * 0xc) < param_2) {
          iVar3 = iVar1 + 1;
          goto LAB_00491941;
        }
        if (*(uint *)(&UNK_005122fc + iVar1 * 0xc) <= param_2) {
          return *(undefined4 *)(&UNK_00512300 + iVar1 * 0xc);
        }
      }
      iVar2 = iVar1 + -1;
    }
LAB_00491941:
    if (iVar2 < iVar3) {
      return 0;
    }
  } while( true );
}


