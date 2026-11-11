// Function: FUN_00499710
// Entry: 00499710
// Size: 651 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00499710(uint *param_1,char *param_2,uint param_3,char *param_4,undefined *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  
  bVar3 = true;
  bVar4 = false;
  bVar2 = false;
  iVar5 = FUN_00493d30(param_1,param_3,1,param_4);
  if (iVar5 != -0x1e) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return 0;
    }
    puVar6 = (uint *)FUN_004894ef(param_2);
    puVar9 = puVar6;
    if (puVar6 != (uint *)0x0) {
      do {
        puVar14 = (uint *)0x0;
        puVar13 = &DAT_00529c24;
        puVar7 = FUN_004810c0(puVar9,',');
        if (puVar7 != (uint *)0x0) {
          *(undefined1 *)puVar7 = 0;
          puVar14 = (uint *)((int)puVar7 + 1);
        }
        puVar7 = puVar9;
        do {
          uVar11 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while ((char)uVar11 != '\0');
        if (puVar7 == (uint *)((int)puVar9 + 1)) {
          puVar15 = (uint *)0x0;
          puVar7 = (uint *)0x0;
          puVar13 = (undefined1 *)0x0;
LAB_004997c4:
          iVar5 = (*(code *)param_5)(param_1,puVar15,puVar7,puVar13);
          if (iVar5 == -0x1e) {
            FUN_0047d191(puVar6);
            return 0xffffffe2;
          }
          if (iVar5 == -0x19) {
            if (puVar15 != (uint *)0x0) {
              FUN_0047d191(puVar6);
              return 0xffffffe7;
            }
LAB_004997ed:
            bVar3 = false;
          }
          else if (iVar5 == -0x15) {
            if (!bVar2) {
              FUN_00487380((int)param_1,0xffffffff,0x52aae4);
              FUN_0047d191(puVar6);
              return 0xffffffe7;
            }
          }
          else {
            if (iVar5 == -0x14) {
              FUN_00487380((int)param_1,0xffffffff,0x52aa94);
              FUN_0047d191(puVar6);
              return 0xffffffe7;
            }
            if (iVar5 != 0) goto LAB_004997ed;
            bVar4 = true;
          }
        }
        else {
          puVar8 = FUN_004810c0(puVar9,':');
          puVar7 = puVar9;
          puVar15 = (uint *)0x0;
          if (puVar8 != (uint *)0x0) {
            *(undefined1 *)puVar8 = 0;
            puVar7 = (uint *)((int)puVar8 + 1);
            puVar15 = puVar9;
          }
          puVar9 = FUN_004810c0(puVar7,'=');
          if (puVar9 == (uint *)0x0) {
            if ((char)*puVar7 == '!') {
              puVar7 = (uint *)((int)puVar7 + 1);
              puVar13 = (undefined1 *)0x0;
            }
          }
          else {
            *(undefined1 *)puVar9 = 0;
            puVar13 = (undefined1 *)((int)puVar9 + 1);
          }
          if ((puVar15 != (uint *)0x0) || (puVar7 == (uint *)0x0)) goto LAB_004997c4;
          pcVar10 = "__ignore_wrong_module_name__";
          puVar9 = puVar7;
          do {
            bVar1 = *pcVar10;
            bVar16 = bVar1 < (byte)*puVar9;
            if (bVar1 != (byte)*puVar9) {
LAB_00499868:
              uVar11 = -(uint)bVar16 | 1;
              goto LAB_0049986d;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar10[1];
            bVar16 = bVar1 < *(byte *)((int)puVar9 + 1);
            if (bVar1 != *(byte *)((int)puVar9 + 1)) goto LAB_00499868;
            pcVar10 = pcVar10 + 2;
            puVar9 = (uint *)((int)puVar9 + 2);
          } while (bVar1 != 0);
          uVar11 = 0;
LAB_0049986d:
          if (uVar11 != 0) goto LAB_004997c4;
          if (puVar13 != (undefined1 *)0x0) {
            bVar2 = true;
            bVar4 = true;
          }
        }
        puVar9 = puVar14;
        if (puVar14 == (uint *)0x0) {
          FUN_0047d191(puVar6);
          if (!bVar3) {
            uVar12 = 0xffffffe7;
            if (bVar4) {
              uVar12 = 0xffffffec;
            }
            return uVar12;
          }
          return 0;
        }
      } while( true );
    }
    FUN_00487380((int)param_1,0xc,0x524178);
  }
  return 0xffffffe2;
}


