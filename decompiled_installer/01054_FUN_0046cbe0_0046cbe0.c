// Function: FUN_0046cbe0
// Entry: 0046cbe0
// Size: 252 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0046cbe0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      switch(*(undefined1 *)(uVar3 + param_1)) {
      case 0x2b:
        uVar2 = 4;
        break;
      default:
        goto switchD_0046cc17_caseD_2c;
      case 0x2d:
        uVar2 = 0x84;
        break;
      case 0x2e:
        uVar2 = 0x10;
        break;
      case 0x30:
        uVar2 = 8;
        break;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar2 = 0x108;
        break;
      case 0x45:
      case 0x65:
        uVar2 = 0x20;
      }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(((uVar1 & 3) - 4) + (uVar2 & 0x3c)) {
      case 4:
        if ((uVar1 & 0x3c) != 0) goto switchD_0046cc17_caseD_2c;
        uVar1 = uVar1 | uVar2;
        break;
      case 8:
        if ((uVar1 & 0x10) != 0) {
          uVar1 = uVar1 & 0x1c0 | 0x11;
        }
        uVar1 = uVar1 | uVar2 | 0x40;
        break;
      default:
        goto switchD_0046cc17_caseD_2c;
      case 0x10:
        if ((uVar1 & 0x10) != 0) goto switchD_0046cc17_caseD_2c;
        if ((uVar1 & 8) == 0) {
          uVar1 = uVar1 & 0x1c0 | uVar2 | 1;
        }
        else {
          uVar1 = uVar1 | uVar2;
        }
        break;
      case 0x20:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((uVar1 & 8) == 0) goto switchD_0046cc17_caseD_2c;
        uVar1 = uVar1 & 0x1c0 | 2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
switchD_0046cc17_caseD_2c:
    if ((uVar1 & 8) != 0) {
      if (uVar3 != param_2) {
        uVar2 = 0;
        if (*(char *)(uVar3 + param_1) == '\0') {
          uVar2 = uVar1;
        }
        return uVar2;
      }
      return uVar1;
    }
  }
  return 0;
}


