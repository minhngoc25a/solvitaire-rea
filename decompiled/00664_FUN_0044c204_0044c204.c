// Function: FUN_0044c204
// Entry: 0044c204
// Size: 64 bytes
// Thunk: false
// External: false


short * __cdecl FUN_0044c204(short *param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  if (param_3 != 0) {
    psVar3 = param_1;
    do {
      sVar1 = *(short *)((param_2 - (int)param_1) + (int)psVar3);
      *psVar3 = sVar1;
      psVar3 = psVar3 + 1;
      param_3 = param_3 - 1;
      if (sVar1 == 0) {
        if (param_3 == 0) {
          return param_1;
        }
        for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
          psVar3[0] = 0;
          psVar3[1] = 0;
          psVar3 = psVar3 + 2;
        }
        for (uVar2 = (uint)((param_3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
          *psVar3 = 0;
          psVar3 = psVar3 + 1;
        }
        return param_1;
      }
    } while (param_3 != 0);
  }
  return param_1;
}


