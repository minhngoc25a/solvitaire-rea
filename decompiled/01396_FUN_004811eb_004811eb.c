// Function: FUN_004811eb
// Entry: 004811eb
// Size: 176 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * __cdecl FUN_004811eb(ushort *param_1,ushort param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  
  if (0 < DAT_00544988) {
    auVar2 = pshuflw(ZEXT216(param_2),ZEXT216(param_2),0);
    do {
      if (((uint)param_1 & 0xfff) < 0xff1) {
        auVar3._0_2_ = -(ushort)(_DAT_0050e110 == *param_1);
        auVar3._2_2_ = -(ushort)(_UNK_0050e112 == param_1[1]);
        auVar3._4_2_ = -(ushort)(_UNK_0050e114 == param_1[2]);
        auVar3._6_2_ = -(ushort)(_UNK_0050e116 == param_1[3]);
        auVar3._8_2_ = -(ushort)(_UNK_0050e118 == param_1[4]);
        auVar3._10_2_ = -(ushort)(_UNK_0050e11a == param_1[5]);
        auVar3._12_2_ = -(ushort)(_UNK_0050e11c == param_1[6]);
        auVar3._14_2_ = -(ushort)(_UNK_0050e11e == param_1[7]);
        uVar4 = auVar2._0_2_;
        uVar5 = auVar2._2_2_;
        auVar1._2_2_ = -(ushort)(param_1[1] == uVar5);
        auVar1._0_2_ = -(ushort)(*param_1 == uVar4);
        auVar1._4_2_ = -(ushort)(param_1[2] == uVar4);
        auVar1._6_2_ = -(ushort)(param_1[3] == uVar5);
        auVar1._8_2_ = -(ushort)(param_1[4] == uVar4);
        auVar1._10_2_ = -(ushort)(param_1[5] == uVar5);
        auVar1._12_2_ = -(ushort)(param_1[6] == uVar4);
        auVar1._14_2_ = -(ushort)(param_1[7] == uVar5);
        auVar3 = auVar3 | auVar1;
        uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
        if (uVar4 != 0) goto LAB_00481287;
        iVar6 = 0x10;
      }
      else {
        if (*param_1 == param_2) {
          return param_1;
        }
        if (*param_1 == 0) {
          return (ushort *)0x0;
        }
        iVar6 = 2;
      }
      param_1 = (ushort *)((int)param_1 + iVar6);
    } while( true );
  }
  uVar4 = *param_1;
  while ((uVar4 != 0 && (uVar4 != param_2))) {
    param_1 = param_1 + 1;
    uVar4 = *param_1;
  }
LAB_00481226:
  return (ushort *)((uVar4 != param_2) - 1 & (uint)param_1);
LAB_00481287:
  iVar6 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
    }
  }
  param_1 = (ushort *)((int)param_1 + iVar6);
  uVar4 = *param_1;
  goto LAB_00481226;
}


