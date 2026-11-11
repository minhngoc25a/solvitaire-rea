// Function: FUN_00475700
// Entry: 00475700
// Size: 205 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00475700(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (uint *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x198))(param_1);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  cVar2 = *(char *)(*(int *)(param_1 + 0x198) + 8);
  do {
    if (cVar2 == '\0') {
      iVar5 = (*(char *)(param_1 + 0x41) != '\0') + 0xcd;
      *(int *)(param_1 + 0x14) = iVar5;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    uVar4 = *puVar1;
    if (uVar4 < *(uint *)(param_1 + 0x60)) {
      do {
        if (*(int *)(param_1 + 8) != 0) {
          *(uint *)(*(int *)(param_1 + 8) + 4) = uVar4;
          *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x60);
          (*(code *)**(undefined4 **)(param_1 + 8))(param_1);
        }
        uVar3 = *puVar1;
        (**(code **)(*(int *)(param_1 + 0x19c) + 4))(param_1,0,puVar1,0);
        uVar4 = *puVar1;
        if (uVar4 == uVar3) {
          return uVar4 & 0xffffff00;
        }
      } while (uVar4 < *(uint *)(param_1 + 0x60));
    }
    (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1);
    (*(code *)**(undefined4 **)(param_1 + 0x198))(param_1);
    *puVar1 = 0;
    cVar2 = *(char *)(*(int *)(param_1 + 0x198) + 8);
  } while( true );
}


