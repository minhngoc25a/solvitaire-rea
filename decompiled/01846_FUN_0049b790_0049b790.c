// Function: FUN_0049b790
// Entry: 0049b790
// Size: 253 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049b790(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  do {
    if (uVar4 < 0xc) {
      iVar2 = (uVar4 >> 2) + 1;
    }
    else {
      iVar2 = 4;
    }
    puVar3 = (undefined1 *)(param_1 + 0x6e + iVar5);
    do {
      iVar5 = iVar5 + 1;
      *puVar3 = (char)uVar4;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(char *)(param_1 + 0x48 + uVar4) = (char)iVar5;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x26);
  *(undefined2 *)(param_1 + 0x288) = 0x200;
  *(undefined4 *)(param_1 + 0x28a) = 0x4040404;
  *(undefined4 *)(param_1 + 0x28e) = 0x4040404;
  *(undefined1 *)(param_1 + 0x292) = 4;
  _memset((void *)(param_1 + 0x293),6,0xf5);
  uVar4 = 0;
  do {
    *(char *)(param_1 + 0x188 + uVar4) = (char)uVar4;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  iVar5 = 1;
  if (uVar4 < 0x100) {
    puVar3 = (undefined1 *)(param_1 + 0x188 + uVar4);
    iVar2 = 0x100 - uVar4;
    do {
      iVar6 = iVar5 + -1;
      *puVar3 = (char)uVar4;
      iVar5 = uVar4 - 1;
      uVar1 = uVar4 + 1;
      if (iVar6 != 0) {
        iVar5 = iVar6;
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  _memset((void *)(param_1 + 0x388),0,0x40);
  _memset((void *)(param_1 + 0x3c8),8,0xc0);
  return;
}


