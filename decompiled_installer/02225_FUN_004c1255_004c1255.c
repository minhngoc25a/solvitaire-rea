// Function: FUN_004c1255
// Entry: 004c1255
// Size: 99 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c1255(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  _memset((void *)(param_1 + 0x18),0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *(undefined1 *)(param_1 + 0x18 + iVar1) = (&DAT_00540e60)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x101);
  do {
    *(undefined1 *)(param_1 + 0x119 + iVar2) = (&DAT_00540f61)[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}


