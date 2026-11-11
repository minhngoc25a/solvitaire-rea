// Function: FUN_004f05b7
// Entry: 004f05b7
// Size: 272 bytes
// Thunk: false
// External: false


void __cdecl FUN_004f05b7(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_0053fbc0 ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_004f0625:
    uVar3 = 8;
LAB_004f0627:
    bVar1 = FUN_004bf6b8(uVar3,(double *)(param_2 + 6),local_94);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
    }
  }
  else {
    if (iVar2 == 2) {
      uVar3 = 4;
      goto LAB_004f0627;
    }
    if (iVar2 == 3) {
      uVar3 = 0x11;
      goto LAB_004f0627;
    }
    if (iVar2 == 4) {
      uVar3 = 0x12;
      goto LAB_004f0627;
    }
    if (iVar2 == 5) goto LAB_004f0625;
    if ((iVar2 != 7) && (iVar2 == 8)) {
      uVar3 = 0x10;
      goto LAB_004f0627;
    }
  }
  __ctrlfp();
  if (*param_2 != 8) {
    bVar1 = FUN_004f06ff();
    if (bVar1) {
      iVar2 = FUN_004f071c(param_2);
      if (iVar2 != 0) goto LAB_004f06b4;
    }
  }
  FUN_004bf687(*param_2);
LAB_004f06b4:
  FUN_004257be(local_14 ^ (uint)&stack0xfffffff0);
  return;
}


