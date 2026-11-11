// Function: FUN_004f092b
// Entry: 004f092b
// Size: 260 bytes
// Thunk: false
// External: false


undefined4 __thiscall FUN_004f092b(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *local_c;
  undefined4 uStack_8;
  
  local_c = this;
  uStack_8 = this;
  if (param_1 == (int *)0x0) {
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_004243be();
  }
  else {
    piVar7 = param_1;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = -1;
      piVar7 = piVar7 + 1;
    }
    if (param_2 == (uint *)0x0) {
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 0x16;
      FUN_004243be();
    }
    else {
      local_c = (void *)*param_2;
      if (-0xa8c1 < (int)local_c) {
        uStack_8 = (void *)((uint)this & 0xffffff);
        iVar4 = FUN_004f0810((int *)&local_c,(undefined1 *)((int)&uStack_8 + 3));
        param_1[5] = iVar4;
        iVar4 = (int)local_c / 0x15180;
        puVar6 = (undefined4 *)&DAT_005226d8;
        param_1[7] = iVar4;
        if (uStack_8._3_1_ == '\0') {
          puVar6 = &DAT_005226a4;
        }
        iVar5 = 1;
        iVar1 = puVar6[1];
        while (iVar1 < iVar4) {
          iVar5 = iVar5 + 1;
          iVar1 = puVar6[iVar5];
        }
        param_1[4] = iVar5 + -1;
        param_1[3] = iVar4 - puVar6[iVar5 + -1];
        uVar2 = *param_2;
        param_1[8] = 0;
        param_1[6] = ((int)uVar2 / 0x15180 + 4) % 7;
        param_1[2] = ((int)local_c % 0x15180) / 0xe10;
        iVar4 = ((int)local_c % 0x15180) % 0xe10;
        param_1[1] = iVar4 / 0x3c;
        *param_1 = iVar4 % 0x3c;
        return 0;
      }
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 0x16;
    }
  }
  return 0x16;
}


