// Function: FUN_0048e150
// Entry: 0048e150
// Size: 291 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048e150(int param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  bool bVar10;
  
  if (param_1 == 0) {
    pbVar5 = (byte *)FUN_0048e4b0();
  }
  else {
    piVar9 = *(int **)(param_1 + 0x38);
    if (piVar9 != (int *)0x0) {
      do {
        pbVar5 = (byte *)piVar9[1];
        pbVar7 = param_2;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0048e197:
            uVar6 = -(uint)bVar10 | 1;
            goto LAB_0048e19c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0048e197;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_0048e19c:
        if (uVar6 == 0) {
          pbVar5 = (byte *)piVar9[2];
          pbVar7 = param_3;
          do {
            bVar1 = *pbVar5;
            bVar10 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_0048e1c5:
              uVar6 = -(uint)bVar10 | 1;
              goto LAB_0048e1ca;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar10 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_0048e1c5;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_0048e1ca:
          if (uVar6 == 0) break;
        }
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)0x0);
      if (piVar9 != (int *)0x0) {
        return piVar9;
      }
    }
    pbVar5 = *(byte **)(param_1 + 0x30);
  }
  pbVar7 = FUN_00491660(param_3);
  pbVar8 = FUN_00491660(param_2);
  piVar9 = FUN_0048de10(pbVar8,pbVar7,pbVar5,param_4,unaff_EDI,unaff_ESI);
  if (piVar9 == (int *)0x0) {
    if (param_1 != 0) {
      FUN_00487380(param_1,0xc,0x524554);
    }
    return (int *)0x0;
  }
  if (piVar9[0xc] != 0) {
    if (param_1 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x38);
      puVar3 = (undefined4 *)(param_1 + 0x38);
      while (puVar2 = puVar4, puVar2 != (undefined4 *)0x0) {
        puVar3 = puVar2;
        puVar4 = (undefined4 *)*puVar2;
      }
      *puVar3 = piVar9;
    }
    return piVar9;
  }
  if (param_1 != 0) {
    FUN_00487380(param_1,0xffffffff,0x52f270);
  }
  FUN_0048e110(piVar9);
  return (int *)0x0;
}


