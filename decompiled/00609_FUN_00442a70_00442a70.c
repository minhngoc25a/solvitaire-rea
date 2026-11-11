// Function: FUN_00442a70
// Entry: 00442a70
// Size: 115 bytes
// Thunk: false
// External: false


void __cdecl FUN_00442a70(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = param_3 * param_3 + param_2 * param_2 + param_4 * param_4;
  if (fVar1 == 0.0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  auVar2 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar1 = auVar2._0_4_;
  *param_1 = param_2 * fVar1;
  param_1[1] = param_3 * fVar1;
  param_1[2] = param_4 * fVar1;
  return;
}


