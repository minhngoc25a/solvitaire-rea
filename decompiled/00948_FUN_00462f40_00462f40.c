// Function: FUN_00462f40
// Entry: 00462f40
// Size: 264 bytes
// Thunk: false
// External: false


void __cdecl FUN_00462f40(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int local_4;
  
  uVar1 = param_1;
  FUN_0047d191(*(LPVOID *)(param_1 + 0x10));
  FUN_0047d191(*(LPVOID *)(param_1 + 0x1c));
  FUN_0047d191(*(LPVOID *)(param_1 + 0x14));
  FUN_0047d191(*(LPVOID *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x28) != 0) {
    param_1 = 0;
    if ((*(int *)(uVar1 + 0x24) != 0) || (*(int *)(uVar1 + 0x20) != 0)) {
      local_4 = 0;
      do {
        puVar3 = (uint *)(*(int *)(uVar1 + 0x28) + local_4);
        if (puVar3[2] != 0) {
          uVar4 = 0;
          if ((puVar3[1] != 0) || (*puVar3 != 0)) {
            iVar2 = 0;
            do {
              do {
                FUN_0047d191(*(LPVOID *)(puVar3[2] + 0x20 + iVar2));
                iVar2 = iVar2 + 0x28;
                uVar4 = uVar4 + 1;
              } while (puVar3[1] != 0);
            } while (uVar4 < *puVar3);
          }
          FUN_0047d191((LPVOID)puVar3[2]);
        }
        FUN_0047d191((LPVOID)puVar3[6]);
        FUN_0047d191((LPVOID)puVar3[10]);
        FUN_0047d191((LPVOID)puVar3[0x10]);
        param_1 = param_1 + 1;
        local_4 = local_4 + 0x68;
      } while ((*(int *)(uVar1 + 0x24) != 0) || (param_1 < *(uint *)(uVar1 + 0x20)));
    }
    FUN_0047d191(*(LPVOID *)(uVar1 + 0x28));
  }
  FUN_0047d191(*(LPVOID *)(uVar1 + 0x3c));
  FUN_0047d191(*(LPVOID *)(uVar1 + 0x40));
  FUN_0047d191(*(LPVOID *)(uVar1 + 0x44));
  return;
}


