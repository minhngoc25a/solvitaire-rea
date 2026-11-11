// Function: FUN_004947d0
// Entry: 004947d0
// Size: 71 bytes
// Thunk: false
// External: false


void __cdecl FUN_004947d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (*(code **)(iVar2 + 0x20) != (code *)0x0) {
      (**(code **)(iVar2 + 0x20))(iVar2);
    }
    FUN_0047d191(*(LPVOID *)(param_1 + 0x9c));
    *(int *)(param_1 + 0x9c) = iVar1;
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


