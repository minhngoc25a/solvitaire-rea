// Function: FUN_00458b85
// Entry: 00458b85
// Size: 156 bytes
// Thunk: false
// External: false


void __thiscall FUN_00458b85(void *this,uint param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  iVar3 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar3 = (int)this + 0x3c;
  }
  uVar2 = FUN_00458f31((int)this + 0x3c);
  psVar4 = (short *)(iVar3 + uVar2 * 2 + -2);
  *(short **)((int)this + 0x30) = psVar4;
  psVar5 = psVar4;
  while ((0 < *(int *)((int)this + 0x24) || (param_1 != 0))) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    uVar2 = param_1 % 10 + 0x30;
    cVar1 = (char)uVar2;
    param_1 = param_1 / 10;
    if (0x39 < uVar2) {
      cVar1 = (param_2 ^ 1) * ' ' + '\a' + cVar1;
    }
    *psVar5 = (short)cVar1;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    psVar5 = *(short **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)psVar4 - (int)psVar5 >> 1;
  *(short **)((int)this + 0x30) = psVar5 + 1;
  return;
}


