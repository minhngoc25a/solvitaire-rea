// Function: FUN_004a38c0
// Entry: 004a38c0
// Size: 35 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a38c0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *param_1;
  while (uVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 * 0x1003f + (uint)uVar1;
    uVar1 = *param_1;
  }
  return iVar2;
}


