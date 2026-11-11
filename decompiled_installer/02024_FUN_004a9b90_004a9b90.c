// Function: FUN_004a9b90
// Entry: 004a9b90
// Size: 270 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a9b90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 != 0) {
    local_3d = (undefined1)iVar2;
    local_40 = (undefined1)((uint)iVar2 >> 0x18);
    local_3f = (undefined1)((uint)iVar2 >> 0x10);
    local_3e = (undefined1)((uint)iVar2 >> 8);
    FUN_0046f470((int)&local_40,0x40,4," using zstream");
    FUN_0046f210(param_1,(int)&local_40);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar3 = 0xf;
  bVar4 = (*(uint *)(param_1 + 0x20c) & 0xc) != 0xc;
  puVar1 = (undefined4 *)(param_1 + 0x84);
  *(bool *)(param_1 + 0x158) = bVar4;
  if (bVar4) {
    uVar3 = 0;
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((*(byte *)(param_1 + 0x78) & 2) == 0) {
    iVar2 = FUN_0048b070((int)puVar1,uVar3,"1.2.12",0x38);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 2;
    }
  }
  else {
    iVar2 = FUN_0048afb0((int)puVar1,uVar3);
  }
  if ((*(uint *)(param_1 + 0x20c) & 0x300) == 0x300) {
    iVar2 = FUN_0048b1c0((int)puVar1,0);
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    return 0;
  }
  FUN_0046ba30(param_1,iVar2);
  return iVar2;
}


