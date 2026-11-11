// Function: FUN_0040b3d0
// Entry: 0040b3d0
// Size: 42 bytes
// Thunk: false
// External: false


uint FUN_0040b3d0(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&stack0x00000004;
  uVar1 = in_EAX;
  if (0xfff < in_EAX) {
    do {
      puVar2 = puVar2 + -0x400;
      *puVar2 = *puVar2;
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  *(undefined4 *)((int)puVar2 - uVar1) = *(undefined4 *)((int)puVar2 - uVar1);
  return in_EAX;
}


