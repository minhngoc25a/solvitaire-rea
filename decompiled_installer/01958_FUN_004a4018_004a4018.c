// Function: FUN_004a4018
// Entry: 004a4018
// Size: 126 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a4018(uint param_1,short *param_2,int param_3)

{
  byte *pbVar1;
  short *psVar2;
  short sVar3;
  short *psVar4;
  int iStack_18;
  
  psVar2 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) {
LAB_004a408b:
      return (int)psVar2 - (int)param_2 & 0xfffffffe;
    }
    sVar3 = *psVar4;
    if (sVar3 == 0x1a) {
      pbVar1 = (byte *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38);
      *pbVar1 = *pbVar1 | 2;
      goto LAB_004a408b;
    }
    if (((sVar3 == 0xd) && (psVar4 + 1 < param_2 + param_3)) && (psVar4[1] == 10)) {
      iStack_18 = 4;
      sVar3 = 10;
    }
    else {
      iStack_18 = 2;
    }
    *psVar2 = sVar3;
    psVar4 = (short *)((int)psVar4 + iStack_18);
    psVar2 = psVar2 + 1;
  } while( true );
}


