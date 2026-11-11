// Function: FUN_00420f7e
// Entry: 00420f7e
// Size: 146 bytes
// Thunk: false
// External: false


undefined4 * FUN_00420f7e(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar1 = HeapAlloc(DAT_00542264,0,0x34);
  bVar4 = param_2 == (undefined4 *)0x0;
  if (bVar4) {
    param_2 = HeapAlloc(DAT_00542264,0,8);
  }
  *(bool *)((int)puVar1 + 0x32) = bVar4;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = param_2 + 1;
  puVar1[10] = param_1 + 8;
  puVar1[6] = param_3;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1[0xb] = param_4;
  iVar2 = FUN_0047a193(param_3);
  puVar1[8] = 0;
  *(char *)((int)puVar1 + 0x31) = (char)iVar2;
  puVar1[9] = param_2;
  *param_2 = puVar1;
  puVar3 = FUN_00478910(param_1 + 8,0x10,0x10000,4);
  puVar1[7] = puVar3;
  return puVar1;
}


