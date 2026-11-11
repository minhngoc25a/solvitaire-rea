// Function: FUN_0046c4c0
// Entry: 0046c4c0
// Size: 254 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0046c4c0(int param_1,int param_2,char *param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar4 = 0;
  puVar5 = (undefined1 *)(param_5 + 0x84);
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_5 + 0x80),*(undefined1 *)(param_5 + 0x81)
                                    ),*(undefined1 *)(param_5 + 0x82)),
                   *(undefined1 *)(param_5 + 0x83));
  if (uVar3 != 0) {
    do {
      uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
      uVar2 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
      if ((param_4 < uVar2) ||
         (param_4 - uVar2 < CONCAT31(CONCAT21(CONCAT11(puVar5[8],puVar5[9]),puVar5[10]),puVar5[0xb])
         )) {
        uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar6,"ICC profile tag outside profile");
        return uVar1;
      }
      if ((puVar5[7] & 3) != 0) {
        FUN_0046e040(param_1,0,param_3,uVar6,"ICC profile tag start not a multiple of 4");
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar4 < uVar3);
  }
  return 1;
}


