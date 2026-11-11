// Function: FUN_0046e450
// Entry: 0046e450
// Size: 408 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046e450(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  
  bVar5 = (byte)(8 - param_3);
  uVar6 = 1 << (bVar5 & 0x1f);
  uVar1 = (1 << (0x10U - (char)param_3 & 0x1f)) - 1;
  dVar10 = DAT_0050c098 / (double)(int)uVar1;
  pvVar2 = FUN_004a4830(param_1,uVar6 * 4);
  uVar8 = 0;
  *param_2 = pvVar2;
  if (uVar6 != 0) {
    do {
      iVar3 = FUN_004a47f0(param_1,0x200);
      uVar7 = 0;
      *(int *)((int)pvVar2 + uVar8 * 4) = iVar3;
      if (param_4 - 95000U < 0x2711) {
        if (param_3 == 0) {
          uVar7 = 0;
          do {
            *(short *)(iVar3 + uVar7 * 2) = (short)uVar7 * 0x100 + (short)uVar8;
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x100);
        }
        else {
          do {
            *(short *)(iVar3 + uVar7 * 2) =
                 (short)((((uVar7 << (bVar5 & 0x1f)) + uVar8) * 0xffff +
                         (1 << (0xfU - (char)param_3 & 0x1f))) / uVar1);
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x100);
        }
      }
      else {
        do {
          iVar4 = (uVar7 << (bVar5 & 0x1f)) + uVar8;
          dVar9 = ((double)iVar4 + (double)(&DAT_0050c3d0)[-(iVar4 >> 0x1f)]) * dVar10;
          FUN_00483370(8 - param_3);
          FUN_0046a200(dVar9 * _DAT_0050db18 + DAT_0050c088);
          lVar11 = FUN_00469de0();
          *(short *)(iVar3 + uVar7 * 2) = (short)lVar11;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x100);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return;
}


