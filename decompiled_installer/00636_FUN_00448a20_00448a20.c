// Function: FUN_00448a20
// Entry: 00448a20
// Size: 715 bytes
// Thunk: false
// External: false


char __cdecl FUN_00448a20(undefined4 param_1,uint param_2,uint param_3)

{
  if (param_2 == 0) {
    return '\0';
  }
  if (param_2 <= param_3) {
    return '\0';
  }
  switch(param_1) {
  default:
    switch(param_2) {
    case 0:
      break;
    case 1:
switchD_00448c98_caseD_1:
      return '\x01';
    case 2:
switchD_00448c98_caseD_2:
      if (param_3 == 0) {
switchD_00448cd4_caseD_0:
        return '\x02';
      }
LAB_00448a64:
      if (param_3 == 1) {
switchD_00448cd4_caseD_1:
        return '\x03';
      }
      break;
    case 3:
switchD_00448c98_caseD_3:
      if (param_3 == 0) {
        return '\x02';
      }
      if (param_3 == 1) {
        return '\x03';
      }
      if (param_3 != 2) {
        return '\0';
      }
switchD_00448cd4_caseD_2:
      return '\x04';
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
switchD_00448b1d_caseD_5:
        return '\n';
      default:
        break;
      }
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
switchD_00448cd4_caseD_4:
        return '\x06';
      case 4:
switchD_00448cd4_caseD_5:
        return '\a';
      }
      break;
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
switchD_00448cd4_caseD_3:
        return '\x05';
      case 4:
switchD_00448cd4_caseD_6:
        return '\v';
      case 5:
switchD_00448cd4_caseD_7:
        return '\f';
      }
      break;
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_3;
      case 4:
        goto switchD_00448b1d_caseD_5;
      case 5:
        goto switchD_00448cd4_caseD_6;
      case 6:
        goto switchD_00448cd4_caseD_7;
      }
      break;
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_3;
      case 4:
        goto switchD_00448cd4_caseD_4;
      case 5:
        goto switchD_00448cd4_caseD_5;
      case 6:
        goto switchD_00448cd4_caseD_6;
      case 7:
        goto switchD_00448cd4_caseD_7;
      }
switchD_00448cd4_default:
      if ((8 < param_2) && (param_3 < 0x20)) {
        return (char)param_3 + '\f';
      }
    }
    break;
  case 1:
    switch(param_2) {
    case 0:
      return '\0';
    case 1:
      goto switchD_00448c98_caseD_1;
    case 2:
      goto switchD_00448c98_caseD_2;
    case 3:
      goto switchD_00448c98_caseD_3;
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      case 4:
        goto switchD_00448cd4_caseD_2;
      default:
        return '\0';
      }
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      case 4:
        goto switchD_00448cd4_caseD_2;
      case 5:
        goto switchD_00448cd4_caseD_3;
      default:
        return '\0';
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      case 4:
        goto switchD_00448cd4_caseD_2;
      case 5:
        goto switchD_00448cd4_caseD_3;
      case 6:
        goto switchD_00448b1d_caseD_5;
      default:
        return '\0';
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      case 4:
        goto switchD_00448cd4_caseD_2;
      case 5:
        goto switchD_00448cd4_caseD_3;
      case 6:
        goto switchD_00448cd4_caseD_6;
      case 7:
        goto switchD_00448cd4_caseD_7;
      }
      goto switchD_00448cd4_default;
    }
  case 2:
    switch(param_2) {
    case 0:
      return '\0';
    case 1:
      goto switchD_00448c98_caseD_1;
    case 2:
      goto switchD_00448c98_caseD_2;
    case 3:
      goto switchD_00448c98_caseD_3;
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448b1d_caseD_5;
      default:
        return '\0';
      }
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_4;
      case 4:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_6;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_1;
      case 4:
        goto switchD_00448cd4_caseD_7;
      case 5:
        goto switchD_00448b1d_caseD_5;
      default:
switchD_00448c7f_default:
        if (param_2 < 7) {
          return '\0';
        }
        if (0x1f < param_3) {
          return '\0';
        }
        return (char)param_3 + '\x0e';
      }
    }
  case 3:
    switch(param_2) {
    case 0:
      return '\0';
    case 1:
      goto switchD_00448c98_caseD_1;
    case 2:
      goto switchD_00448c98_caseD_2;
    case 3:
      goto switchD_00448c98_caseD_3;
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_4;
      case 4:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_3;
      case 4:
        goto switchD_00448cd4_caseD_4;
      case 5:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_3;
      case 4:
        goto switchD_00448b1d_caseD_5;
      case 5:
        goto switchD_00448cd4_caseD_6;
      case 6:
        goto switchD_00448cd4_caseD_7;
      default:
        return '\0';
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_3;
      case 4:
        goto switchD_00448cd4_caseD_4;
      case 5:
        goto switchD_00448cd4_caseD_5;
      case 6:
        goto switchD_00448cd4_caseD_6;
      case 7:
        goto switchD_00448cd4_caseD_7;
      }
      goto switchD_00448cd4_default;
    }
  case 4:
    switch(param_2) {
    case 0:
      break;
    case 1:
      goto switchD_00448c98_caseD_1;
    case 2:
      goto switchD_00448c98_caseD_2;
    case 3:
      if (param_3 == 0) {
        return '\x02';
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return '\x04';
      }
      goto LAB_00448a64;
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      }
      break;
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_4;
      case 4:
        goto switchD_00448cd4_caseD_5;
      }
      break;
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_4;
      case 4:
        goto switchD_00448cd4_caseD_5;
      case 5:
        goto switchD_00448cd4_caseD_3;
      }
      break;
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_6;
      case 4:
        goto switchD_00448cd4_caseD_7;
      case 5:
        goto switchD_00448b1d_caseD_5;
      case 6:
        goto switchD_00448cd4_caseD_3;
      }
      break;
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_6;
      case 4:
        goto switchD_00448cd4_caseD_7;
      case 5:
        goto switchD_00448cd4_caseD_4;
      case 6:
        goto switchD_00448cd4_caseD_5;
      case 7:
        goto switchD_00448cd4_caseD_3;
      }
      goto switchD_00448cd4_default;
    }
    break;
  case 5:
    switch(param_2) {
    case 0:
      return '\0';
    case 1:
      goto switchD_00448c98_caseD_1;
    case 2:
      goto switchD_00448c98_caseD_2;
    case 3:
      goto switchD_00448c98_caseD_3;
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_2;
      case 3:
        goto switchD_00448cd4_caseD_4;
      case 4:
        goto switchD_00448cd4_caseD_5;
      default:
        return '\0';
      }
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_4;
      case 4:
        goto switchD_00448cd4_caseD_5;
      case 5:
        goto switchD_00448cd4_caseD_3;
      default:
        return '\0';
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_6;
      case 4:
        goto switchD_00448cd4_caseD_7;
      case 5:
        goto switchD_00448b1d_caseD_5;
      case 6:
        goto switchD_00448cd4_caseD_3;
      default:
        return '\0';
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_2;
      case 2:
        goto switchD_00448cd4_caseD_1;
      case 3:
        goto switchD_00448cd4_caseD_6;
      case 4:
        goto switchD_00448cd4_caseD_7;
      case 5:
        goto switchD_00448cd4_caseD_4;
      case 6:
        goto switchD_00448cd4_caseD_5;
      case 7:
        goto switchD_00448cd4_caseD_3;
      }
      goto switchD_00448cd4_default;
    }
  case 6:
    switch(param_2) {
    case 0:
      break;
    case 1:
      goto switchD_00448c98_caseD_1;
    case 2:
      goto switchD_00448c98_caseD_2;
    case 3:
      goto switchD_00448c98_caseD_3;
    case 4:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      }
      break;
    case 5:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      case 4:
        goto switchD_00448cd4_caseD_2;
      }
      break;
    default:
      switch(param_3) {
      case 0:
        goto switchD_00448cd4_caseD_0;
      case 1:
        goto switchD_00448cd4_caseD_1;
      case 2:
        goto switchD_00448cd4_caseD_4;
      case 3:
        goto switchD_00448cd4_caseD_5;
      case 4:
        goto switchD_00448cd4_caseD_2;
      case 5:
        goto switchD_00448cd4_caseD_3;
      default:
        goto switchD_00448c7f_default;
      }
    }
  }
  return '\0';
}


