// Function: FUN_00494870
// Entry: 00494870
// Size: 73 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00494870(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(uint **)(param_1 + 0x9c);
  if (puVar2[0xe] != 2) {
    return 0xffffffe2;
  }
  if (param_3 == 0) {
    return 0;
  }
  if ((code *)puVar2[6] == (code *)0x0) {
    return 0xffffffe2;
  }
  uVar3 = (*(code *)puVar2[6])(puVar2,param_2,param_3);
  uVar1 = *puVar2;
  *puVar2 = *puVar2 + param_3;
  puVar2[1] = puVar2[1] + (uint)CARRY4(uVar1,param_3);
  return uVar3;
}


