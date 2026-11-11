// Function: FUN_00491960
// Entry: 00491960
// Size: 158 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00491960(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((((param_3 < 0x2000) || (0x2fff < param_3)) && ((param_3 < 0xf900 || (0xfaff < param_3)))) &&
      (((0x2ff < param_3 - 0x2f800 && (param_3 != 0x1109a)) && (param_3 != 0x1109c)))) &&
     (param_3 != 0x110ab)) {
    iVar3 = 0;
    iVar2 = 0x3a2;
    do {
      iVar1 = (iVar2 + iVar3) / 2;
      if (*(uint *)(&UNK_00515bf0 + iVar1 * 0xc) < param_3) {
        iVar3 = iVar1 + 1;
      }
      else {
        if (*(uint *)(&UNK_00515bf0 + iVar1 * 0xc) <= param_3) {
          *param_1 = *(undefined4 *)(&UNK_00515bf4 + iVar1 * 0xc);
          *param_2 = *(undefined4 *)(&UNK_00515bf8 + iVar1 * 0xc);
          return 1;
        }
        iVar2 = iVar1 + -1;
      }
    } while (iVar3 <= iVar2);
  }
  return 0;
}


