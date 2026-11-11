// Function: FUN_004a30f0
// Entry: 004a30f0
// Size: 21 bytes
// Thunk: false
// External: false


undefined1  [10] FUN_004a30f0(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}


