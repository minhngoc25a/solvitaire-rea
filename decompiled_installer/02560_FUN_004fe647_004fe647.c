// Function: FUN_004fe647
// Entry: 004fe647
// Size: 377 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl
FUN_004fe647(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auVar9 [10];
  float10 fVar10;
  double dVar11;
  
  puVar3 = HeapAlloc(DAT_00542264,8,0x4118);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar3 + 0xd44) = param_4;
    dVar2 = _DAT_0050c0a8;
    puVar3[1] = param_2;
    uVar8 = 0;
    uVar6 = 0;
    *puVar3 = param_1;
    puVar3[0xd42] = param_3;
    do {
      dVar11 = (double)(int)uVar6;
      if ((int)uVar6 < 0) {
        dVar11 = dVar11 + _DAT_005223b0;
      }
      auVar9 = FUN_005077f0(param_1,SUB84(dVar11 / dVar2,0),
                            (uint)((ulonglong)(dVar11 / dVar2) >> 0x20),
                            SUB84(1.0 / *(double *)(puVar3 + 0xd44),0),
                            (uint)((ulonglong)(1.0 / *(double *)(puVar3 + 0xd44)) >> 0x20));
      dVar11 = (double)((float10)auVar9 * (float10)dVar2 + (float10)DAT_0050c088);
      fVar10 = FUN_0046a200(dVar11);
      *(double *)(puVar3 + uVar6 * 2 + 0xd46) = (double)fVar10;
      uVar6 = uVar6 + 1;
      param_1 = (undefined4)((ulonglong)dVar11 >> 0x20);
    } while (uVar6 < 0x100);
    uVar6 = puVar3[0xd42];
    if (uVar6 != 0) {
      puVar5 = (undefined8 *)(puVar3 + 6);
      uVar4 = 0;
      puVar7 = (undefined8 *)(puVar3 + 0x902);
      do {
        uVar1 = *(undefined8 *)(puVar3 + (uVar4 / uVar6) * 2 + 0xd46);
        puVar5[1] = uVar1;
        *puVar5 = uVar1;
        puVar5[-1] = uVar1;
        dVar11 = dVar2;
        if ((uVar8 < 0x10) && (dVar11 = (double)(int)(uVar8 << 4), (int)(uVar8 << 4) < 0)) {
          dVar11 = dVar11 + _DAT_005223b0;
        }
        puVar5[-2] = dVar11;
        dVar11 = (double)(int)puVar3[0xd42];
        if ((int)puVar3[0xd42] < 0) {
          dVar11 = dVar11 + _DAT_005223b0;
        }
        uVar8 = uVar8 + 1;
        uVar4 = uVar4 + 0x100;
        puVar5 = puVar5 + 4;
        puVar7[0x100] = 1.0 / dVar11;
        *puVar7 = 0;
        uVar6 = puVar3[0xd42];
        puVar7 = puVar7 + 1;
      } while (uVar8 < uVar6);
    }
  }
  return puVar3;
}


