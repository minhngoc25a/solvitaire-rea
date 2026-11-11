// Function: FUN_004a4fc0
// Entry: 004a4fc0
// Size: 204 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004a4fc0(int param_1,uint *param_2,uint param_3,uint param_4,byte param_5,byte param_6,
            undefined1 param_7,byte param_8,byte param_9)

{
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *param_2 = param_3;
    *(byte *)((int)param_2 + 0x1b) = param_9;
    *(byte *)((int)param_2 + 0x19) = param_6;
    param_2[1] = param_4;
    *(byte *)(param_2 + 6) = param_5;
    *(byte *)((int)param_2 + 0x1a) = param_8;
    *(undefined1 *)(param_2 + 7) = param_7;
    FUN_0046c850(param_1,param_3,param_4,(uint)param_5,(uint)param_6,
                 CONCAT11(param_5,param_7) & 0xff,(uint)param_8,(uint)param_9);
    bVar1 = *(byte *)((int)param_2 + 0x19);
    if (bVar1 == 3) {
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
      uVar2 = 1;
    }
    else {
      uVar2 = CONCAT31((uint3)bVar1,3);
      if ((uVar2 & 0x200) == 0) {
        uVar2 = CONCAT31((uint3)bVar1,1);
      }
      *(char *)((int)param_2 + 0x1d) = (char)uVar2;
      if ((uVar2 & 0x400) != 0) {
        bVar1 = (char)uVar2 + 1;
        uVar2 = (uint)bVar1;
        *(byte *)((int)param_2 + 0x1d) = bVar1;
      }
    }
    bVar1 = (char)param_2[6] * (char)uVar2;
    *(byte *)((int)param_2 + 0x1e) = bVar1;
    if (7 < bVar1) {
      param_2[3] = (bVar1 >> 3) * param_3;
      return;
    }
    param_2[3] = bVar1 * param_3 + 7 >> 3;
  }
  return;
}


