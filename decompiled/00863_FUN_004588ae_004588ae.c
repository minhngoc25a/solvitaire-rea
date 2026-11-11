// Function: FUN_004588ae
// Entry: 004588ae
// Size: 150 bytes
// Thunk: false
// External: false


void __thiscall FUN_004588ae(void *this,uint param_1,uint param_2,byte param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  
  iVar4 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar4 = (int)this + 0x3c;
  }
  uVar3 = FUN_00458f31((int)this + 0x3c);
  puVar1 = (ushort *)(iVar4 + (uVar3 - 1) * 2);
  *(ushort **)((int)this + 0x30) = puVar1;
  puVar5 = puVar1;
  do {
    iVar4 = *(int *)((int)this + 0x24);
    if (iVar4 < 1) {
      if (param_1 == 0 && param_2 == 0) {
        *(int *)((int)this + 0x34) = (int)puVar1 - (int)puVar5 >> 1;
        *(ushort **)((int)this + 0x30) = puVar5 + 1;
        return;
      }
      iVar4 = *(int *)((int)this + 0x24);
    }
    *(int *)((int)this + 0x24) = iVar4 + -1;
    uVar3 = (param_1 & 0xf) + 0x30;
    uVar2 = (ushort)uVar3;
    param_1 = param_1 >> 4 | param_2 << 0x1c;
    param_2 = param_2 >> 4;
    if (0x39 < uVar3) {
      uVar2 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *puVar5 = uVar2;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    puVar5 = *(ushort **)((int)this + 0x30);
  } while( true );
}


