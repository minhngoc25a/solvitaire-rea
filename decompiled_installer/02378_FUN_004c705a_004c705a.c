// Function: FUN_004c705a
// Entry: 004c705a
// Size: 264 bytes
// Thunk: false
// External: false


int __thiscall
FUN_004c705a(void *this,ushort *param_1,undefined4 *param_2,uint param_3,uint *param_4,int param_5)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var_01;
  int iVar4;
  void *pvVar5;
  ushort *puVar6;
  byte *pbVar7;
  void *local_c;
  void *pvStack_8;
  undefined3 extraout_var_00;
  
  pbVar7 = (byte *)*param_2;
  local_c = this;
  pvStack_8 = this;
  puVar6 = param_1;
  if (param_1 == (ushort *)0x0) {
    iVar2 = 0;
    cVar1 = FUN_004c7162((char *)pbVar7);
    uVar3 = CONCAT31(extraout_var_00,cVar1);
    while (iVar4 = FUN_00501011((uint *)0x0,pbVar7,uVar3,param_4,param_5), iVar4 != -1) {
      if (iVar4 == 0) {
        return iVar2;
      }
      if (iVar4 == 4) {
        iVar2 = iVar2 + 1;
      }
      pbVar7 = pbVar7 + iVar4;
      iVar2 = iVar2 + 1;
      cVar1 = FUN_004c7162((char *)pbVar7);
      uVar3 = CONCAT31(extraout_var_01,cVar1);
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x2a;
    iVar2 = -1;
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      cVar1 = FUN_004c7162((char *)pbVar7);
      iVar2 = FUN_00501011((uint *)&local_c,pbVar7,CONCAT31(extraout_var,cVar1),param_4,param_5);
      if (iVar2 == -1) {
        *param_2 = pbVar7;
        *(undefined1 *)(param_5 + 0x1c) = 1;
        *(undefined4 *)(param_5 + 0x18) = 0x2a;
        return -1;
      }
      if (iVar2 == 0) {
        pbVar7 = (byte *)0x0;
        *puVar6 = 0;
        break;
      }
      pvVar5 = local_c;
      if ((void *)0xffff < local_c) {
        if (param_3 < 2) break;
        local_c = (void *)((int)local_c + -0x10000);
        param_3 = param_3 - 1;
        *puVar6 = (ushort)((uint)local_c >> 10) | 0xd800;
        puVar6 = puVar6 + 1;
        pvVar5 = (void *)((uint)local_c & 0x3ff | 0xdc00);
      }
      *puVar6 = (ushort)pvVar5;
      pbVar7 = pbVar7 + iVar2;
      puVar6 = puVar6 + 1;
    }
    iVar2 = (int)puVar6 - (int)param_1 >> 1;
    *param_2 = pbVar7;
  }
  return iVar2;
}


