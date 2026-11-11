// Function: FUN_004de5b0
// Entry: 004de5b0
// Size: 149 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004de5b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = (undefined1)((uint)param_2 >> 0x18);
  *(undefined1 *)((int)param_1 + 7) = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(char *)(param_1 + 1) = (char)param_2;
  uVar2 = (undefined1)((uint)param_2 >> 8);
  *(undefined1 *)((int)param_1 + 5) = uVar2;
  uVar1 = (undefined1)((uint)param_2 >> 0x10);
  *(undefined1 *)((int)param_1 + 6) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = uVar1;
  *(undefined1 *)((int)param_1 + 10) = uVar2;
  *(char *)((int)param_1 + 0xb) = (char)param_2;
  *(char *)(param_1 + 3) = (char)param_3;
  uVar1 = (undefined1)((uint)param_3 >> 0x18);
  *(undefined1 *)((int)param_1 + 0xf) = uVar1;
  *(undefined1 *)(param_1 + 4) = uVar1;
  *(char *)((int)param_1 + 0x13) = (char)param_3;
  uVar2 = (undefined1)((uint)param_3 >> 8);
  *(undefined1 *)((int)param_1 + 0xd) = uVar2;
  uVar1 = (undefined1)((uint)param_3 >> 0x10);
  *(undefined1 *)((int)param_1 + 0xe) = uVar1;
  *(undefined1 *)((int)param_1 + 0x11) = uVar1;
  *(undefined1 *)((int)param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 5) = (char)param_4;
  uVar1 = (undefined1)((uint)param_4 >> 0x18);
  *(undefined1 *)((int)param_1 + 0x17) = uVar1;
  *(undefined1 *)(param_1 + 6) = uVar1;
  *(char *)((int)param_1 + 0x1b) = (char)param_4;
  *param_1 = 0x11c4543;
  uVar2 = (undefined1)((uint)param_4 >> 8);
  *(undefined1 *)((int)param_1 + 0x15) = uVar2;
  uVar1 = (undefined1)((uint)param_4 >> 0x10);
  *(undefined1 *)((int)param_1 + 0x16) = uVar1;
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  *(undefined1 *)((int)param_1 + 0x1a) = uVar2;
  return 0x1c;
}


