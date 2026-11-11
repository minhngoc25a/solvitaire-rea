// Function: FUN_004ad730
// Entry: 004ad730
// Size: 255 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004ad730(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar7 = (byte *)*puVar2;
  iVar6 = puVar2[1];
  do {
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') {
LAB_004ad7d4:
        return uVar4 & 0xffffff00;
      }
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    bVar1 = *pbVar7;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      iVar6 = iVar6 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6b] + 0x14) = *(int *)(param_1[0x6b] + 0x14) + 1;
      *puVar2 = pbVar7;
      puVar2[1] = iVar6;
      if (iVar6 == 0) {
        uVar4 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar4 == '\0') goto LAB_004ad7d4;
        pbVar7 = (byte *)*puVar2;
        iVar6 = puVar2[1];
      }
      bVar1 = *pbVar7;
    }
    do {
      if (iVar6 == 0) {
        uVar4 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar4 == '\0') goto LAB_004ad7d4;
        pbVar7 = (byte *)*puVar2;
        iVar6 = puVar2[1];
      }
      uVar4 = (uint)*pbVar7;
      iVar6 = iVar6 + -1;
      pbVar7 = pbVar7 + 1;
    } while (uVar4 == 0xff);
    iVar3 = *(int *)(param_1[0x6b] + 0x14);
    if (uVar4 != 0) {
      iVar5 = 0;
      if (iVar3 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x77;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6b] + 0x14);
        *(uint *)(*param_1 + 0x1c) = uVar4;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        iVar5 = param_1[0x6b];
        *(undefined4 *)(iVar5 + 0x14) = 0;
      }
      param_1[0x65] = uVar4;
      *puVar2 = pbVar7;
      puVar2[1] = iVar6;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    *(int *)(param_1[0x6b] + 0x14) = iVar3 + 2;
    *puVar2 = pbVar7;
    puVar2[1] = iVar6;
  } while( true );
}


