// Function: FUN_004779a6
// Entry: 004779a6
// Size: 400 bytes
// Thunk: false
// External: false


void FUN_004779a6(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  bool bVar10;
  
  bVar10 = false;
  puVar8 = (undefined4 *)FUN_0041fa5e();
  if (DAT_00535004 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
  }
  if ((param_7 & 4) != 0) {
    puVar8 = DAT_00543a14;
  }
  if ((puVar8[3] == 0) || ((param_7 & 1) != 0)) {
    iVar1 = puVar8[2];
    if (((iVar1 == 0) ||
        ((((0xffff < param_1 || ((param_7 & 6) != 0)) || (*(int *)(iVar1 + 4) != param_1)) ||
         ((*(int *)(iVar1 + 0xc) != param_2 || (*(int *)(iVar1 + 0x10) != param_3)))))) ||
       (*(int *)(iVar1 + 0x14) != param_4)) {
      piVar9 = FUN_00478ad9((int *)*puVar8);
      if ((undefined4 *)puVar8[2] != (undefined4 *)0x0) {
        *(undefined4 *)puVar8[2] = piVar9;
      }
      puVar8[2] = piVar9;
      if (puVar8[1] == 0) {
        puVar8[1] = piVar9;
      }
      piVar9[3] = param_2;
      piVar9[4] = param_3;
      piVar9[5] = param_4;
      piVar9[6] = param_5;
      *piVar9 = 0;
      piVar9[1] = param_1;
      piVar9[7] = param_6;
      piVar9[2] = param_7;
    }
    if ((param_7 & 2) == 0) {
      bVar10 = DAT_00535004 != 0;
      if (bVar10) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
      }
      uVar2 = puVar8[4];
      uVar3 = puVar8[6];
      uVar4 = puVar8[8];
      uVar5 = puVar8[7];
      uVar6 = puVar8[5];
      uVar7 = puVar8[9];
      puVar8[5] = param_3;
      puVar8[6] = param_2;
      puVar8[4] = param_1;
      puVar8[8] = param_5;
      puVar8[9] = param_6;
      puVar8[7] = param_4;
      FUN_00477cf4();
      puVar8[4] = uVar2;
      puVar8[6] = uVar3;
      puVar8[5] = uVar6;
      puVar8[7] = uVar5;
      puVar8[8] = uVar4;
      puVar8[9] = uVar7;
    }
  }
  if ((DAT_00535004 != 0) && (!bVar10)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
  }
  return;
}


