// Function: FUN_00443890
// Entry: 00443890
// Size: 240 bytes
// Thunk: false
// External: false


float10 __thiscall
FUN_00443890(void *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10)

{
  void *extraout_ECX;
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_0050c348 <= param_8) {
    return (float10)1;
  }
  dVar1 = DAT_0050c320 - (double)(param_8 * DAT_0050c310);
  FUN_00483ec0(param_1);
  dVar2 = DAT_0050c320 - (double)(param_9 * DAT_0050c310);
  FUN_00483ec0(extraout_ECX);
  fVar4 = (float)dVar2;
  fVar3 = param_2 * param_5 + param_3 * param_6 + param_4 * param_7;
  if ((float)dVar1 < fVar3) {
    return (float10)1.0;
  }
  if (fVar4 < fVar3) {
    fVar3 = (fVar3 - fVar4) / ((float)dVar1 - fVar4);
    return (float10)((DAT_0050c314 - fVar3) * param_10 + fVar3);
  }
  return (float10)param_10;
}


