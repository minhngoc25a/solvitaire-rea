// Function: FUN_004b2600
// Entry: 004b2600
// Size: 440 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004b2600(int *param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  iVar3 = param_1[0x6c];
  iVar8 = *(int *)(iVar3 + 0x10);
  do {
    if (0x7fff < iVar8) {
      bVar2 = *param_2;
      uVar11 = (uint)bVar2;
      iVar7 = *(int *)(&DAT_00521fa8 + (uVar11 & 0x7f) * 4);
      uVar9 = (uint)CONCAT11((char)iVar7,bVar2);
      bVar5 = (byte)((uint)iVar7 >> 8);
      iVar7 = iVar7 >> 0x10;
      iVar8 = iVar8 - iVar7;
      *(int *)(iVar3 + 0x10) = iVar8;
      iVar12 = iVar8 << ((byte)*(undefined4 *)(iVar3 + 0x14) & 0x1f);
      if (*(int *)(iVar3 + 0xc) < iVar12) {
        if (iVar8 < 0x8000) {
          uVar9 = uVar9 & 0xffffff80;
          bVar10 = (byte)uVar9;
          if (iVar8 < iVar7) {
            *param_2 = bVar10 ^ (byte)(uVar9 >> 8);
            return (uVar11 ^ 0x80) >> 7;
          }
          *param_2 = bVar10 ^ bVar5;
        }
        return (uint)(bVar2 >> 7);
      }
      uVar9 = uVar9 & 0xffffff80;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) - iVar12;
      bVar10 = (byte)uVar9;
      if (iVar8 < iVar7) {
        *(int *)(iVar3 + 0x10) = iVar7;
        *param_2 = bVar10 ^ bVar5;
        return (uint)(bVar2 >> 7);
      }
      *(int *)(iVar3 + 0x10) = iVar7;
      *param_2 = bVar10 ^ (byte)(uVar9 >> 8);
      return (uVar11 ^ 0x80) >> 7;
    }
    piVar1 = (int *)(iVar3 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      if (param_1[0x65] == 0) {
        puVar4 = (undefined4 *)param_1[6];
        if ((puVar4[1] == 0) && (cVar6 = (*(code *)puVar4[3])(param_1), cVar6 == '\0')) {
          *(undefined4 *)(*param_1 + 0x14) = 0x19;
          (**(code **)*param_1)(param_1);
        }
        puVar4[1] = puVar4[1] + -1;
        uVar9 = (uint)*(byte *)*puVar4;
        *puVar4 = (byte *)*puVar4 + 1;
        if (uVar9 == 0xff) {
          do {
            puVar4 = (undefined4 *)param_1[6];
            if ((puVar4[1] == 0) && (cVar6 = (*(code *)puVar4[3])(param_1), cVar6 == '\0')) {
              *(undefined4 *)(*param_1 + 0x14) = 0x19;
              (**(code **)*param_1)(param_1);
            }
            puVar4[1] = puVar4[1] + -1;
            bVar2 = *(byte *)*puVar4;
            *puVar4 = (byte *)*puVar4 + 1;
          } while (bVar2 == 0xff);
          if (bVar2 != 0) {
            param_1[0x65] = (uint)bVar2;
            goto LAB_004b26c3;
          }
          uVar9 = 0xff;
        }
      }
      else {
LAB_004b26c3:
        uVar9 = 0;
      }
      *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) << 8 | uVar9;
      iVar8 = *(int *)(iVar3 + 0x14);
      iVar7 = iVar8 + 8;
      *(int *)(iVar3 + 0x14) = iVar7;
      if ((iVar7 < 0) && (iVar8 = iVar8 + 9, *(int *)(iVar3 + 0x14) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(iVar3 + 0x10) = 0x8000;
      }
    }
    iVar8 = *(int *)(iVar3 + 0x10) * 2;
    *(int *)(iVar3 + 0x10) = iVar8;
  } while( true );
}


