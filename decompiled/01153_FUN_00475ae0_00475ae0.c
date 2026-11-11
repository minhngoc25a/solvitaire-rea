// Function: FUN_00475ae0
// Entry: 00475ae0
// Size: 166 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00475ae0(int param_1)

{
  int iVar1;
  uint in_EAX;
  
  if ((((*(char *)(param_1 + 0x110) == '\0') &&
       ((((in_EAX = *(uint *)(param_1 + 0x28), in_EAX == 3 || (in_EAX == 7)) &&
         (*(int *)(param_1 + 0x24) == 3)) &&
        ((*(int *)(param_1 + 0x2c) == 2 && (*(int *)(param_1 + 100) == 3)))))) &&
      (((*(int *)(param_1 + 0x10c) == 0 &&
        (((in_EAX = *(uint *)(param_1 + 0xc4), *(int *)(in_EAX + 8) == 2 &&
          (*(int *)(in_EAX + 0x60) == 1)) &&
         ((*(int *)(in_EAX + 0xb8) == 1 &&
          (((*(int *)(in_EAX + 0xc) < 3 && (*(int *)(in_EAX + 100) == 1)) &&
           (*(int *)(in_EAX + 0xbc) == 1)))))))) &&
       (((iVar1 = *(int *)(param_1 + 0x120), *(int *)(in_EAX + 0x24) == iVar1 &&
         (*(int *)(in_EAX + 0x7c) == iVar1)) && (*(int *)(in_EAX + 0xd4) == iVar1)))))) &&
     (((iVar1 = *(int *)(param_1 + 0x124), *(int *)(in_EAX + 0x28) == iVar1 &&
       (*(int *)(in_EAX + 0x80) == iVar1)) && (*(int *)(in_EAX + 0xd8) == iVar1)))) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


