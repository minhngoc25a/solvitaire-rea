// Function: FUN_0046c850
// Entry: 0046c850
// Size: 506 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0046c850(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  bool bVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    pcVar2 = "Image width is zero in IHDR";
LAB_0046c895:
    FUN_0046f1c0(param_1,pcVar2);
    bVar1 = true;
  }
  else {
    bVar1 = 0x7fffffff < param_2;
    if (bVar1) {
      FUN_0046f1c0(param_1,"Invalid image width in IHDR");
    }
    if (0x1ffffff8 < (param_2 + 7 & 0xfffffff8)) {
      pcVar2 = "Image width is too large for this architecture";
      goto LAB_0046c895;
    }
  }
  if (*(uint *)(param_1 + 0x278) < param_2) {
    FUN_0046f1c0(param_1,"Image width exceeds user limit in IHDR");
    bVar1 = true;
  }
  if (param_3 == 0) {
    pcVar2 = "Image height is zero in IHDR";
LAB_0046c8da:
    FUN_0046f1c0(param_1,pcVar2);
    bVar1 = true;
  }
  else if (0x7fffffff < param_3) {
    pcVar2 = "Invalid image height in IHDR";
    goto LAB_0046c8da;
  }
  if (*(uint *)(param_1 + 0x27c) < param_3) {
    FUN_0046f1c0(param_1,"Image height exceeds user limit in IHDR");
    bVar1 = true;
  }
  if ((((param_4 != 1) && (param_4 != 2)) && (param_4 != 4)) &&
     ((param_4 != 8 && (param_4 != 0x10)))) {
    FUN_0046f1c0(param_1,"Invalid bit depth in IHDR");
    bVar1 = true;
  }
  if (((param_5 < 0) || (param_5 == 1)) || ((param_5 == 5 || (6 < param_5)))) {
    FUN_0046f1c0(param_1,"Invalid color type in IHDR");
    bVar1 = true;
  }
  if (param_5 == 3) {
    if (8 < param_4) {
LAB_0046c97e:
      FUN_0046f1c0(param_1,"Invalid color type/bit depth combination in IHDR");
      bVar1 = true;
    }
  }
  else if ((((param_5 == 2) || (param_5 == 4)) || (param_5 == 6)) && (param_4 < 8))
  goto LAB_0046c97e;
  if (1 < param_6) {
    FUN_0046f1c0(param_1,"Unknown interlace method in IHDR");
    bVar1 = true;
  }
  if (param_7 != 0) {
    FUN_0046f1c0(param_1,"Unknown compression method in IHDR");
    bVar1 = true;
  }
  if (((*(uint *)(param_1 + 0x74) & 0x1000) != 0) && (*(int *)(param_1 + 0x250) != 0)) {
    FUN_0046f1c0(param_1,"MNG features are not allowed in a PNG datastream");
  }
  if (param_8 != 0) {
    if ((((*(byte *)(param_1 + 0x250) & 4) == 0) || (param_8 != 0x40)) ||
       (((*(uint *)(param_1 + 0x74) & 0x1000) != 0 || ((param_5 != 2 && (param_5 != 6)))))) {
      FUN_0046f1c0(param_1,"Unknown filter method in IHDR");
      bVar1 = true;
    }
    if ((*(uint *)(param_1 + 0x74) & 0x1000) != 0) {
      FUN_0046f1c0(param_1,"Invalid filter method in IHDR");
      goto LAB_0046ca44;
    }
  }
  if (!bVar1) {
    return;
  }
LAB_0046ca44:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


