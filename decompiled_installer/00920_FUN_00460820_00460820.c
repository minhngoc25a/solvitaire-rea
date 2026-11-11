// Function: FUN_00460820
// Entry: 00460820
// Size: 361 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00460820(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  __acrt_ptd *p_Var5;
  byte *pbVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *local_10;
  uint local_c;
  uint *local_8;
  int local_4;
  
  local_4 = FUN_00493a20(param_3);
  do {
    if (local_4 == 0) {
      return 0;
    }
    local_4 = local_4 + -1;
    puVar9 = (uint *)0x0;
    FUN_00493a40(param_3,&local_10,&local_8,&local_c);
    pbVar10 = local_10;
    iVar8 = 0;
    bVar2 = *local_10;
    pbVar6 = local_10;
    while (bVar2 != 0) {
      if (((((char)bVar2 < '!') || (bVar2 = *pbVar6, bVar2 == 0x7f)) || (bVar2 == 0x25)) ||
         (iVar3 = 1, bVar2 == 0x3d)) {
        iVar3 = 3;
      }
      pbVar6 = pbVar6 + 1;
      iVar8 = iVar8 + iVar3;
      bVar2 = *pbVar6;
    }
    puVar4 = (uint *)FUN_00482949(iVar8 + 1);
    if (puVar4 != (uint *)0x0) {
      bVar2 = *pbVar10;
      puVar7 = puVar4;
      while (bVar2 != 0) {
        if ((((char)bVar2 < '!') || (bVar2 = *pbVar10, bVar2 == 0x7f)) ||
           ((bVar2 == 0x25 || (bVar2 == 0x3d)))) {
          *(byte *)puVar7 = 0x25;
          *(char *)((int)puVar7 + 1) = "0123456789ABCDEF"[*pbVar10 >> 4];
          puVar7 = (uint *)((int)puVar7 + 2);
          bVar2 = "0123456789ABCDEF"[(int)(char)*pbVar10 & 0xf];
        }
        pbVar10 = pbVar10 + 1;
        *(byte *)puVar7 = bVar2;
        puVar7 = (uint *)((int)puVar7 + 1);
        bVar2 = *pbVar10;
      }
      *(byte *)puVar7 = 0;
      puVar7 = puVar4;
      do {
        uVar1 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while ((char)uVar1 != '\0');
      iVar8 = FUN_0048d320((int *)(param_2 + 0x10),puVar4,(int)puVar7 - ((int)puVar4 + 1),
                           *(int *)(param_2 + 0x40));
      FUN_0047d191(puVar4);
      if (iVar8 == 0) {
        puVar9 = *(uint **)(param_2 + 0x10);
      }
      else {
        p_Var5 = FUN_0042470e();
        if (*(int *)p_Var5 == 0xc) {
          FUN_00487380(param_1,0xc,0x526e8c);
          return 0xffffffe2;
        }
      }
    }
    FUN_00460600(param_2,puVar9,local_8,local_c);
  } while( true );
}


