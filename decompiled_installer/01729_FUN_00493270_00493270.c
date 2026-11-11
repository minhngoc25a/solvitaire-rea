// Function: FUN_00493270
// Entry: 00493270
// Size: 74 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00493270(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  undefined1 uVar1;
  
  if (param_2 <= param_1) {
switchD_00493297_caseD_2e:
    return 0;
  }
  *param_3 = 0;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    switch(uVar1) {
    case 0x2d:
      break;
    default:
      goto switchD_00493297_caseD_2e;
    case 0x52:
    case 0x72:
      *param_3 = *param_3 | 4;
      break;
    case 0x57:
    case 0x77:
      *param_3 = *param_3 | 2;
      break;
    case 0x58:
    case 0x78:
      *param_3 = *param_3 | 1;
    }
    if (param_2 <= param_1) {
      return 1;
    }
  } while( true );
}


