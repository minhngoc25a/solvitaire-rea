// Function: FUN_00477b36
// Entry: 00477b36
// Size: 208 bytes
// Thunk: false
// External: false


undefined4 FUN_00477b36(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = false;
  puVar3 = (undefined4 *)FUN_0041fa5e();
  puVar3[4] = 0;
  if (DAT_00535004 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
  }
  if ((puVar3[8] != 0) && ((code *)puVar3[9] != (code *)0x0)) {
    (*(code *)puVar3[9])(puVar3[8]);
    puVar3[9] = 0;
    puVar3[8] = 0;
  }
  puVar3[7] = 0xffffffff;
  puVar1 = (undefined4 *)puVar3[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar3[4] = puVar1[1];
    puVar3[6] = puVar1[3];
    puVar3[5] = puVar1[4];
    puVar3[7] = puVar1[5];
    puVar3[8] = puVar1[6];
    puVar3[9] = puVar1[7];
    uVar2 = puVar1[2];
    puVar3[1] = *puVar1;
    if (puVar1 == (undefined4 *)puVar3[2]) {
      puVar3[2] = 0;
    }
    FUN_00478c4a((int *)*puVar3,(int)puVar1);
    if ((uVar2 & 2) != 0) {
      bVar4 = DAT_00535004 != 0;
      if (bVar4) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
      }
      FUN_00477cf4();
    }
  }
  if ((DAT_00535004 != 0) && (!bVar4)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
  }
  return puVar3[4];
}


