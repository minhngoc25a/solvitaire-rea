// Function: FUN_004948c0
// Entry: 004948c0
// Size: 89 bytes
// Thunk: false
// External: false


int __cdecl FUN_004948c0(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    puVar2 = *(uint **)(param_1 + 0x9c);
    uVar4 = param_2;
    if (*(uint *)(param_1 + 0x7c) <= param_2) {
      uVar4 = *(uint *)(param_1 + 0x7c);
    }
    if (puVar2[0xe] != 2) {
      return -0x1e;
    }
    if (uVar4 != 0) {
      if ((code *)puVar2[6] == (code *)0x0) {
        return -0x1e;
      }
      iVar3 = (*(code *)puVar2[6])(puVar2,*(undefined4 *)(param_1 + 0x78),uVar4);
      uVar1 = *puVar2;
      *puVar2 = *puVar2 + uVar4;
      puVar2[1] = puVar2[1] + (uint)CARRY4(uVar1,uVar4);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    param_2 = param_2 - uVar4;
  } while( true );
}


