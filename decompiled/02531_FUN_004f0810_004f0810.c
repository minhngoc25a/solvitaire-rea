// Function: FUN_004f0810
// Entry: 004f0810
// Size: 98 bytes
// Thunk: false
// External: false


int __cdecl FUN_004f0810(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*param_1 / 0x7861f80) * 4;
  iVar2 = iVar1 + 0x46;
  iVar3 = *param_1 % 0x7861f80;
  *param_1 = iVar3;
  if (0x1e1337f < iVar3) {
    iVar2 = iVar1 + 0x47;
    *param_1 = iVar3 + -0x1e13380;
    if (0x1e1337f < iVar3 + -0x1e13380) {
      iVar2 = iVar1 + 0x48;
      *param_1 = iVar3 + -0x3c26700;
      if (iVar3 + -0x3c26700 < 0x1e28500) {
        *param_2 = 1;
      }
      else {
        iVar2 = iVar1 + 0x49;
        *param_1 = iVar3 + -0x5a4ec00;
      }
    }
  }
  return iVar2;
}


