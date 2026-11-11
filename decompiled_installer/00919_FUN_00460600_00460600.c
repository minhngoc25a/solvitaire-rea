// Function: FUN_00460600
// Entry: 00460600
// Size: 537 bytes
// Thunk: false
// External: false


void __cdecl FUN_00460600(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  byte *pbVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
    puVar5 = (uint *)FUN_00482949((param_4 * 4 + 2) / 3 + 1);
    if (puVar5 != (uint *)0x0) {
      uVar7 = param_4;
      puVar8 = puVar5;
      puVar9 = param_3;
      if (2 < param_4) {
        uVar6 = param_4 / 3;
        do {
          uVar4 = *puVar9;
          uVar7 = uVar7 - 3;
          uVar2 = CONCAT11((byte)uVar4,*(byte *)((int)puVar9 + 1));
          pbVar1 = (byte *)((int)puVar9 + 2);
          puVar9 = (uint *)((int)puVar9 + 3);
          uVar3 = CONCAT21(uVar2,*pbVar1);
          *(char *)puVar8 =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(byte)((byte)uVar4 >> 2) + 0x40];
          *(char *)((int)puVar8 + 1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uVar2 >> 4 & 0x3f) + 0x40];
          *(char *)((int)puVar8 + 2) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uVar3 >> 6 & 0x3f) + 0x40];
          *(char *)((int)puVar8 + 3) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uVar3 & 0x3f) + 0x40];
          puVar8 = puVar8 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar7 == 1) {
        uVar7 = *puVar9;
        *(char *)puVar8 =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [(byte)((byte)uVar7 >> 2) + 0x40];
        *(char *)((int)puVar8 + 1) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [((byte)uVar7 & 3) * 0x10 + 0x40];
        puVar8 = (uint *)((int)puVar8 + 2);
      }
      else if (uVar7 == 2) {
        uVar2 = CONCAT11((byte)*puVar9,*(byte *)((int)puVar9 + 1));
        *(char *)puVar8 =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [(byte)((byte)*puVar9 >> 2) + 0x40];
        *(char *)((int)puVar8 + 1) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [(uVar2 >> 4 & 0x3f) + 0x40];
        *(char *)((int)puVar8 + 2) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [(uVar2 & 0xf) * 4 + 0x40];
        puVar8 = (uint *)((int)puVar8 + 3);
      }
      *(char *)puVar8 = '\0';
    }
    if ((param_2 != (uint *)0x0) && (puVar5 != (uint *)0x0)) {
      local_c = (uint *)0x0;
      local_4 = 0;
      local_8 = 0;
      FUN_0048d570((int *)&local_c,(uint *)"LIBARCHIVE.xattr.",0x11);
      FUN_0048d660((int *)&local_c,param_2);
      puVar8 = puVar5;
      do {
        uVar7 = *puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
      } while ((char)uVar7 != '\0');
      FUN_0045e3f0((int *)(param_1 + 0x1c),local_c,puVar5,(int)puVar8 - ((int)puVar5 + 1));
      FUN_0048d710(&local_c);
    }
    FUN_0047d191(puVar5);
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    local_c = (uint *)0x0;
    local_4 = 0;
    local_8 = 0;
    FUN_0048d570((int *)&local_c,(uint *)"SCHILY.xattr.",0xd);
    FUN_0048d660((int *)&local_c,param_2);
    FUN_0045e3f0((int *)(param_1 + 0x1c),local_c,param_3,param_4);
    FUN_0048d710(&local_c);
  }
  return;
}


