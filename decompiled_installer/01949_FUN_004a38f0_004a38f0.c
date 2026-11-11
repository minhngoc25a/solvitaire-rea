// Function: FUN_004a38f0
// Entry: 004a38f0
// Size: 59 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a38f0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = _tolower((uint)*param_1);
  while (iVar2 != 0) {
    puVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 * 0x1003f + iVar2;
    iVar2 = _tolower((uint)*puVar1);
  }
  return iVar3;
}


