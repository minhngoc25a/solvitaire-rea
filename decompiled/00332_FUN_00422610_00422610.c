// Function: FUN_00422610
// Entry: 00422610
// Size: 125 bytes
// Thunk: false
// External: false


void FUN_00422610(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  ulonglong uVar6;
  
  bVar1 = true;
  psVar2 = (short *)FUN_0044c3e0(0x10,param_3);
  iVar4 = 0x3c;
  psVar5 = psVar2;
  do {
    uVar6 = __allshr((byte)iVar4,param_2);
    uVar3 = (uint)uVar6 & 0xf;
    if (bVar1) {
      if ((uVar6 & 0xf) != 0) {
        bVar1 = false;
        goto LAB_00422653;
      }
      if (iVar4 == 0) goto LAB_00422653;
    }
    else {
LAB_00422653:
      *psVar5 = (-(ushort)(uVar3 < 10) & 0xfff9) + 0x37 + (short)uVar3;
      psVar5 = psVar5 + 1;
    }
    iVar4 = iVar4 + -4;
    if (iVar4 < 0) {
      FUN_0044c470(0x10 - ((int)psVar5 - (int)psVar2 >> 1));
      *psVar5 = 0;
      return;
    }
  } while( true );
}


