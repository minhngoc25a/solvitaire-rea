// Function: FUN_00505ea0
// Entry: 00505ea0
// Size: 75 bytes
// Thunk: false
// External: false


int __cdecl FUN_00505ea0(int param_1,byte param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = param_3 + (1 << (param_2 & 0x1f));
  do {
    uVar2 = uVar1 >> 1;
    iVar3 = iVar3 + (uint)(byte)(&DAT_00522710)
                                [(uint)(*(ushort *)(param_1 + uVar2 * 2) >> 4) ^
                                 -(uVar1 & 1) >> 4 & 0x7f];
    uVar1 = uVar2;
  } while (uVar2 != 1);
  return iVar3;
}


