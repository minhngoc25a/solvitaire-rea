// Function: FUN_0045882c
// Entry: 0045882c
// Size: 130 bytes
// Thunk: false
// External: false


uint __thiscall FUN_0045882c(void *this,uint param_1,int param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  void *local_8;
  
  if (param_1 < 0x40000000) {
    uVar1 = param_1 << 2;
    if (((*(int *)((int)this + 0x404) != 0) || (0x400 < uVar1)) &&
       (*(uint *)((int)this + 0x400) < uVar1)) {
      local_8 = this;
      local_8 = __malloc_base(uVar1);
      if (local_8 == (LPVOID)0x0) {
        uVar1 = FUN_004247be((LPVOID)0x0);
        return uVar1 & 0xffffff00;
      }
      FUN_004544f0((int *)((int)this + 0x404),&local_8);
      *(uint *)((int)this + 0x400) = uVar1;
      in_EAX = FUN_004247be(local_8);
    }
    uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0xc;
    uVar1 = param_2 & 0xffffff00;
  }
  return uVar1;
}


