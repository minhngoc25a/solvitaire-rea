// Function: FUN_00418f7a
// Entry: 00418f7a
// Size: 197 bytes
// Thunk: false
// External: false


void __fastcall
FUN_00418f7a(int param_1,int param_2,short *param_3,int param_4,uint param_5,double *param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (param_4 < 0xc) {
    if (param_4 == 0xb) goto LAB_00418ff6;
    if (param_4 == 1) {
      uVar2 = (uint)*(char *)param_6;
    }
    else if (param_4 == 3) {
      uVar2 = (uint)*(short *)param_6;
    }
    else {
      if (param_4 != 5) {
        if (param_4 == 8) {
          FUN_0041941d(param_1,param_2,param_3,*(short **)param_6);
          return;
        }
        if (param_4 != 9) {
          if (param_4 != 10) {
            return;
          }
          FUN_00418f2b(param_1,param_2,param_3,(int)param_6,param_5);
          return;
        }
        fVar1 = *(float *)param_6;
        goto LAB_00419030;
      }
LAB_00418fd4:
      uVar2 = *(uint *)param_6;
    }
  }
  else {
    if (param_4 == 0xc) {
      fVar1 = (float)*param_6;
LAB_00419030:
      FUN_0046a8fa(param_1,param_2,param_3,(double)fVar1);
      return;
    }
    if (param_4 == 0xd) {
      iVar3 = *(int *)((int)param_6 + 4);
      uVar2 = *(uint *)param_6;
      goto LAB_00418fec;
    }
    if (param_4 == 0x15) goto LAB_00418fd4;
    if (param_4 == 0x18) {
      uVar2 = (uint)*(byte *)param_6;
      goto LAB_00418fe9;
    }
    if (param_4 != 0x19) {
      return;
    }
LAB_00418ff6:
    uVar2 = (uint)*(ushort *)param_6;
  }
LAB_00418fe9:
  param_2 = (int)uVar2 >> 0x1f;
  iVar3 = param_2;
LAB_00418fec:
  FUN_0046a91c(param_1,param_2,param_3,uVar2,iVar3);
  return;
}


