// Function: FUN_004fe7c0
// Entry: 004fe7c0
// Size: 148 bytes
// Thunk: false
// External: false


void __thiscall FUN_004fe7c0(void *this,int param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *this_00;
  void *this_01;
  uint uVar3;
  double *pdVar4;
  double dVar5;
  
  uVar3 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x3510);
  if (*(int *)(param_1 + 0x3508) != 0) {
    pdVar4 = (double *)(param_1 + 0x18);
    do {
      uVar2 = FUN_004ff00e(this,uVar1,pdVar4[1]);
      *param_2 = (char)uVar2;
      uVar2 = FUN_004ff00e(this_00,uVar1,*pdVar4);
      param_2[1] = (char)uVar2;
      uVar2 = FUN_004ff00e(this_01,uVar1,pdVar4[-1]);
      param_2[2] = (char)uVar2;
      dVar5 = pdVar4[-2];
      uVar2 = FUN_004ff076(dVar5);
      param_2[3] = (char)uVar2;
      uVar3 = uVar3 + 1;
      pdVar4 = pdVar4 + 4;
      this = (void *)((ulonglong)dVar5 >> 0x20);
      param_2 = param_2 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x3508));
  }
  return;
}


