// Function: FUN_00458ac8
// Entry: 00458ac8
// Size: 189 bytes
// Thunk: false
// External: false


void __thiscall FUN_00458ac8(void *this,uint param_1,uint param_2,byte param_3)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  uint local_8;
  
  iVar4 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar4 = (int)this + 0x3c;
  }
  uVar2 = FUN_00458f31((int)this + 0x3c);
  local_8 = param_1;
  psVar5 = (short *)(iVar4 + uVar2 * 2 + -2);
  *(short **)((int)this + 0x30) = psVar5;
  psVar3 = psVar5;
  while ((0 < *(int *)((int)this + 0x24) || (local_8 != 0 || param_2 != 0))) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    uVar6 = __aullrem(local_8,param_2,10,0);
    uVar1 = (short)uVar6 + 0x30;
    uVar6 = __aulldiv(local_8,param_2,10,0);
    param_2 = (uint)((ulonglong)uVar6 >> 0x20);
    local_8 = (uint)uVar6;
    if (0x39 < uVar1) {
      uVar1 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar1);
    }
    *psVar3 = (short)(char)uVar1;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    psVar3 = *(short **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)psVar5 - (int)psVar3 >> 1;
  *(short **)((int)this + 0x30) = psVar3 + 1;
  return;
}


