// Function: FUN_00451fe8
// Entry: 00451fe8
// Size: 80 bytes
// Thunk: false
// External: false


uint __thiscall FUN_00451fe8(void *this,int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  bool bVar2;
  
  if (param_2 == 0xffffffff) goto LAB_00452031;
  in_EAX = 0;
  if (param_1 == 0) {
LAB_0045202d:
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  else {
    if (param_1 == 1) {
      in_EAX = 0;
      if (((int)param_2 < 9) || (0xd < (int)param_2)) {
        bVar2 = param_2 == 0x20;
        goto LAB_0045202b;
      }
    }
    else {
      in_EAX = param_1 - 8;
      if (in_EAX == 0) {
        in_EAX = param_1 + -7 << ((byte)param_2 & 7);
        bVar2 = (*(byte *)(((param_2 & 0xff) >> 3) + 0x44 + (int)this) & (byte)in_EAX) == 0;
LAB_0045202b:
        if (!bVar2) goto LAB_0045202d;
      }
    }
LAB_00452031:
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}


