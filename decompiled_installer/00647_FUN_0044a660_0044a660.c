// Function: FUN_0044a660
// Entry: 0044a660
// Size: 284 bytes
// Thunk: false
// External: false


void __cdecl FUN_0044a660(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pEngineNode != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x12135);
  }
  LOCK();
  fVar3 = *(float *)(param_1 + 0x27c);
  if (fVar3 == 0.0) {
    *(float *)(param_1 + 0x27c) = 0.0;
    fVar3 = 0.0;
  }
  UNLOCK();
  fVar1 = *(float *)(param_1 + 0x280);
  fVar6 = fVar1;
  if (fVar1 != fVar3) {
    *(float *)(param_1 + 0x280) = fVar3;
    fVar6 = fVar3;
  }
  fVar5 = *(float *)(param_1 + 0x284);
  fVar2 = *(float *)(param_1 + 0x214);
  if (fVar5 == fVar2) {
    if (fVar1 == fVar3) {
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x284) = fVar2;
    fVar5 = fVar2;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x100) + 0x210);
  }
  if (((undefined4 *)(param_1 + 0x138) != (undefined4 *)0x0) &&
     (0.0 < ((float)((double)*(int *)(param_1 + 0x104) +
                    (double)(&DAT_0050c3d0)[-(*(int *)(param_1 + 0x104) >> 0x1f)]) /
            (float)((double)iVar4 + (double)(&DAT_0050c3d0)[-(iVar4 >> 0x1f)])) * fVar6 * fVar5)) {
    lVar7 = FUN_00482bb0();
    if ((uint)lVar7 != 0) {
      FUN_00443980((undefined4 *)(param_1 + 0x138),0,0,(uint)lVar7,1000000,1);
    }
  }
  return;
}


