// Function: FUN_00429c90
// Entry: 00429c90
// Size: 578 bytes
// Thunk: false
// External: false


int __cdecl FUN_00429c90(uint *param_1,void *param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  uint local_38;
  size_t local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (((param_3 == (uint *)0x0) || (_memset(param_3,0,0xa8), param_1 == (uint *)0x0)) ||
     (param_2 == (void *)0x0)) {
    iVar3 = -2;
  }
  else {
    iVar3 = FUN_004437e0((int *)param_1,&local_30);
    if (iVar3 == 0) {
      param_3[0x28] = (uint)param_2;
      if (local_30 != 0) {
        _memset(param_2,0,local_30);
      }
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3[6] = param_1[6];
      param_3[7] = param_1[7];
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
      param_3[10] = param_1[10];
      param_3[0xb] = param_1[0xb];
      param_3[0xc] = param_1[0xc];
      param_3[0xd] = param_1[0xd];
      param_3[0xe] = param_1[0xe];
      param_3[0x1e] = param_1[0x10];
      param_3[0xf] = param_1[0xf];
      param_3[0x10] = param_1[0x11];
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      param_3[0x17] = 0xbf800000;
      param_3[0x18] = 0;
      param_3[0x19] = 0;
      param_3[0x1a] = 0;
      param_3[0x1b] = 0;
      param_3[0x1c] = 0;
      param_3[0x1d] = 0x3f800000;
      if (param_3[5] == 1) {
        FUN_0042fa20((int *)(param_3 + 0x18));
        uVar1 = *(undefined8 *)(param_3 + 0x15);
        puVar4 = param_3 + 0x18;
        if (puVar4 != (uint *)0x0) {
          LOCK();
          *puVar4 = 0;
          UNLOCK();
        }
        local_40._0_4_ = (uint)uVar1;
        local_20 = (uint)local_40 ^ DAT_0050c400;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        local_40._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
        local_48 = local_40._4_4_ ^ DAT_0050c400;
        local_38 = param_3[0x17] ^ DAT_0050c400;
        local_40 = uVar1;
        FUN_0042fa20((int *)puVar4);
        *(ulonglong *)(param_3 + 0x15) = CONCAT44(local_48,local_20);
        param_3[0x17] = local_38;
        if (param_3 + 0x18 != (uint *)0x0) {
          LOCK();
          param_3[0x18] = 0;
          UNLOCK();
        }
      }
      if (param_1[2] != 0) {
        uVar2 = *param_3;
        puVar4 = (uint *)(local_2c + (int)param_2);
        param_3[2] = (uint)puVar4;
        if ((puVar4 != (uint *)0x0) && (uVar2 != 0)) {
          if ((uint *)param_1[2] == (uint *)0x0) {
            FUN_0042e820(0,(char *)puVar4,uVar2,uVar2);
          }
          else {
            FUN_0044c490(puVar4,(uint *)param_1[2],uVar2);
          }
        }
      }
      param_3[0x27] = local_28 + (int)param_2;
      local_48 = param_1[1];
      local_44 = param_1[0x11];
      iVar3 = FUN_004291e0(&local_48,(void *)(local_24 + (int)param_2),param_3 + 0x1f);
      return iVar3;
    }
  }
  return iVar3;
}


