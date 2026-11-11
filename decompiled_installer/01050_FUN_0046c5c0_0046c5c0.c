// Function: FUN_0046c5c0
// Entry: 0046c5c0
// Size: 312 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046c5c0(int param_1,int *param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined3 extraout_var;
  uint uVar8;
  
  iVar7 = FUN_0046e260(param_1,param_3,param_4);
  if (iVar7 != 0) {
    uVar8 = CONCAT31(CONCAT21(CONCAT11((char)param_3[0x10],*(undefined1 *)((int)param_3 + 0x41)),
                              *(undefined1 *)((int)param_3 + 0x42)),
                     *(undefined1 *)((int)param_3 + 0x43));
    uVar1 = *(ushort *)((int)param_2 + 0x4a);
    if (-1 < (short)uVar1) {
      if (uVar8 < 4) {
        if (((uVar1 & 4) != 0) && (*(ushort *)(param_2 + 0x12) != uVar8)) {
          FUN_0046e040(param_1,(int)param_2,"sRGB",uVar8,"inconsistent rendering intents");
          return;
        }
        if ((uVar1 & 0x20) != 0) {
          FUN_0046f360(param_1,"duplicate sRGB information ignored");
          return;
        }
        if ((uVar1 & 2) != 0) {
          bVar6 = FUN_0046de50((int *)&DAT_0050d9e0,param_2 + 1,100);
          if (CONCAT31(extraout_var,bVar6) == 0) {
            FUN_0046f6d0(param_1,"cHRM chunk does not match sRGB",2);
          }
        }
        FUN_0046d7a0(param_1,param_2,0xb18f,2);
        iVar5 = DAT_0050da20;
        iVar4 = _UNK_0050d9ec;
        iVar3 = _UNK_0050d9e8;
        iVar2 = _UNK_0050d9e4;
        iVar7 = _DAT_0050d9e0;
        *(short *)(param_2 + 0x12) = (short)uVar8;
        param_2[1] = iVar7;
        param_2[2] = iVar2;
        param_2[3] = iVar3;
        param_2[4] = iVar4;
        *param_2 = 0xb18f;
        iVar3 = _UNK_0050d9fc;
        iVar2 = _UNK_0050d9f8;
        iVar7 = _UNK_0050d9f4;
        param_2[5] = _DAT_0050d9f0;
        param_2[6] = iVar7;
        param_2[7] = iVar2;
        param_2[8] = iVar3;
        iVar3 = _UNK_0050da0c;
        iVar2 = _UNK_0050da08;
        iVar7 = _UNK_0050da04;
        param_2[9] = _DAT_0050da00;
        param_2[10] = iVar7;
        param_2[0xb] = iVar2;
        param_2[0xc] = iVar3;
        iVar3 = _UNK_0050da1c;
        iVar2 = _UNK_0050da18;
        iVar7 = _UNK_0050da14;
        param_2[0xd] = _DAT_0050da10;
        param_2[0xe] = iVar7;
        param_2[0xf] = iVar2;
        param_2[0x10] = iVar3;
        param_2[0x11] = iVar5;
        *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) | 0xe7;
        return;
      }
      FUN_0046e040(param_1,(int)param_2,"sRGB",uVar8,"invalid sRGB rendering intent");
    }
  }
  return;
}


