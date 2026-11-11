// Function: FUN_0046c040
// Entry: 0046c040
// Size: 251 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0046c040(int param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined4 uVar8;
  char *pcVar9;
  
  uVar1 = *(ushort *)((int)param_2 + 0x4a);
  if ((short)uVar1 < 0) {
    return 0;
  }
  if (param_3 < 4) {
    if (((uVar1 & 4) == 0) || (*(ushort *)(param_2 + 0x12) == param_3)) {
      if ((uVar1 & 0x20) != 0) {
        FUN_0046f360(param_1,"duplicate sRGB information ignored");
        return 0;
      }
      if (((uVar1 & 2) != 0) &&
         (bVar7 = FUN_0046de50((int *)&DAT_0050d9e0,param_2 + 1,100),
         CONCAT31(extraout_var,bVar7) == 0)) {
        FUN_0046f6d0(param_1,"cHRM chunk does not match sRGB",2);
      }
      FUN_0046d7a0(param_1,param_2,0xb18f,2);
      iVar6 = DAT_0050da20;
      iVar5 = _UNK_0050d9ec;
      iVar4 = _UNK_0050d9e8;
      iVar3 = _UNK_0050d9e4;
      iVar2 = _DAT_0050d9e0;
      *(short *)(param_2 + 0x12) = (short)param_3;
      param_2[1] = iVar2;
      param_2[2] = iVar3;
      param_2[3] = iVar4;
      param_2[4] = iVar5;
      *param_2 = 0xb18f;
      iVar4 = _UNK_0050d9fc;
      iVar3 = _UNK_0050d9f8;
      iVar2 = _UNK_0050d9f4;
      param_2[5] = _DAT_0050d9f0;
      param_2[6] = iVar2;
      param_2[7] = iVar3;
      param_2[8] = iVar4;
      iVar4 = _UNK_0050da0c;
      iVar3 = _UNK_0050da08;
      iVar2 = _UNK_0050da04;
      param_2[9] = _DAT_0050da00;
      param_2[10] = iVar2;
      param_2[0xb] = iVar3;
      param_2[0xc] = iVar4;
      iVar4 = _UNK_0050da1c;
      iVar3 = _UNK_0050da18;
      iVar2 = _UNK_0050da14;
      param_2[0xd] = _DAT_0050da10;
      param_2[0xe] = iVar2;
      param_2[0xf] = iVar3;
      param_2[0x10] = iVar4;
      param_2[0x11] = iVar6;
      *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) | 0xe7;
      return 1;
    }
    pcVar9 = "inconsistent rendering intents";
  }
  else {
    pcVar9 = "invalid sRGB rendering intent";
  }
  uVar8 = FUN_0046e040(param_1,(int)param_2,"sRGB",param_3,pcVar9);
  return uVar8;
}


