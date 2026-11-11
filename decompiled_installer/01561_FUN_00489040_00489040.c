// Function: FUN_00489040
// Entry: 00489040
// Size: 83 bytes
// Thunk: false
// External: false


int __cdecl FUN_00489040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x168);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if ((*(char *)(iVar2 + 0x4d) == '\0') && (*(int *)(iVar2 + 0x14) != 0)) {
      iVar3 = (**(code **)(*(int *)(iVar2 + 0x14) + 4))(iVar2);
      *(undefined1 *)(iVar2 + 0x4d) = 1;
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
    }
    FUN_0047d191(*(LPVOID *)(iVar2 + 0x2c));
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    iVar2 = iVar1;
  }
  return iVar4;
}


