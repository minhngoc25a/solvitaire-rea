// Function: FUN_0046c1a0
// Entry: 0046c1a0
// Size: 800 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0046c1a0(int param_1,int param_2,char *param_3,uint param_4,undefined1 *param_5,byte param_6)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_5,param_5[1]),param_5[2]),param_5[3]);
  if (uVar2 != param_4) {
    uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar2,"length does not match profile");
    return uVar1;
  }
  if ((3 < (byte)param_5[8]) && ((param_4 & 3) != 0)) {
    uVar1 = FUN_0046e040(param_1,param_2,param_3,param_4,"invalid length");
    return uVar1;
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_5[0x80],param_5[0x81]),param_5[0x82]),param_5[0x83]);
  if ((0x1555554a < uVar2) || (param_4 < (uVar2 + 0xb) * 0xc)) {
    uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar2,"tag count too large");
    return uVar1;
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_5[0x40],param_5[0x41]),param_5[0x42]),param_5[0x43]);
  if (0xfffe < uVar2) {
    uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar2,"invalid rendering intent");
    return uVar1;
  }
  if (3 < uVar2) {
    FUN_0046e040(param_1,0,param_3,uVar2,"intent outside defined range");
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_5[0x24],param_5[0x25]),param_5[0x26]),param_5[0x27]);
  if (uVar2 != 0x61637370) {
    uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar2,"invalid signature");
    return uVar1;
  }
  if (((*(int *)(param_5 + 0x44) != DAT_0050da24) || (*(int *)(param_5 + 0x48) != DAT_0050da28)) ||
     (*(int *)(param_5 + 0x4c) != DAT_0050da2c)) {
    FUN_0046e040(param_1,0,param_3,0,"PCS illuminant is not D50");
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_5[0x10],param_5[0x11]),param_5[0x12]),param_5[0x13]);
  if (uVar2 == 0x47524159) {
    if ((param_6 & 2) != 0) {
      uVar1 = FUN_0046e040(param_1,param_2,param_3,0x47524159,
                           "Gray color space not permitted on RGB PNG");
      return uVar1;
    }
  }
  else {
    if (uVar2 != 0x52474220) {
      uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar2,"invalid ICC profile color space");
      return uVar1;
    }
    if ((param_6 & 2) == 0) {
      uVar1 = FUN_0046e040(param_1,param_2,param_3,0x52474220,
                           "RGB color space not permitted on grayscale PNG");
      return uVar1;
    }
  }
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_5[0xc],param_5[0xd]),param_5[0xe]),param_5[0xf]);
  if (uVar2 < 0x6e6d636d) {
    if (uVar2 != 0x6e6d636c) {
      if (uVar2 == 0x61627374) {
        uVar1 = FUN_0046e040(param_1,param_2,param_3,0x61627374,
                             "invalid embedded Abstract ICC profile");
        return uVar1;
      }
      if (uVar2 == 0x6c696e6b) {
        uVar1 = FUN_0046e040(param_1,param_2,param_3,0x6c696e6b,
                             "unexpected DeviceLink ICC profile class");
        return uVar1;
      }
      bVar3 = uVar2 == 0x6d6e7472;
      goto LAB_0046c440;
    }
    pcVar4 = "unexpected NamedColor ICC profile class";
  }
  else {
    if ((uVar2 == 0x70727472) || (uVar2 == 0x73636e72)) goto LAB_0046c454;
    bVar3 = uVar2 == 0x73706163;
LAB_0046c440:
    if (bVar3) goto LAB_0046c454;
    pcVar4 = "unrecognized ICC profile class";
  }
  FUN_0046e040(param_1,0,param_3,uVar2,pcVar4);
LAB_0046c454:
  uVar2 = CONCAT31(CONCAT21(CONCAT11(param_5[0x14],param_5[0x15]),param_5[0x16]),param_5[0x17]);
  if ((uVar2 != 0x4c616220) && (uVar2 != 0x58595a20)) {
    uVar1 = FUN_0046e040(param_1,param_2,param_3,uVar2,"unexpected ICC PCS encoding");
    return uVar1;
  }
  return 1;
}


