// Function: FUN_0042e870
// Entry: 0042e870
// Size: 662 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042e870(int param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    while( true ) {
      if (param_1 == 0) {
        cVar1 = FUN_00448a20(0,param_2,uVar3);
      }
      else if (uVar3 < param_2) {
        cVar1 = *(char *)(param_1 + uVar3);
      }
      else {
        cVar1 = '\0';
      }
      switch(cVar1) {
      case '\0':
        pcVar2 = "CHANNEL_NONE";
        break;
      case '\x01':
        pcVar2 = "CHANNEL_MONO";
        break;
      case '\x02':
        pcVar2 = "CHANNEL_FRONT_LEFT";
        break;
      case '\x03':
        pcVar2 = "CHANNEL_FRONT_RIGHT";
        break;
      case '\x04':
        pcVar2 = "CHANNEL_FRONT_CENTER";
        break;
      case '\x05':
        pcVar2 = "CHANNEL_LFE";
        break;
      case '\x06':
        pcVar2 = "CHANNEL_BACK_LEFT";
        break;
      case '\a':
        pcVar2 = "CHANNEL_BACK_RIGHT";
        break;
      case '\b':
        pcVar2 = "CHANNEL_FRONT_LEFT_CENTER ";
        break;
      case '\t':
        pcVar2 = "CHANNEL_FRONT_RIGHT_CENTER";
        break;
      case '\n':
        pcVar2 = "CHANNEL_BACK_CENTER";
        break;
      case '\v':
        pcVar2 = "CHANNEL_SIDE_LEFT";
        break;
      case '\f':
        pcVar2 = "CHANNEL_SIDE_RIGHT";
        break;
      case '\r':
        pcVar2 = "CHANNEL_TOP_CENTER";
        break;
      case '\x0e':
        pcVar2 = "CHANNEL_TOP_FRONT_LEFT";
        break;
      case '\x0f':
        pcVar2 = "CHANNEL_TOP_FRONT_CENTER";
        break;
      case '\x10':
        pcVar2 = "CHANNEL_TOP_FRONT_RIGHT";
        break;
      case '\x11':
        pcVar2 = "CHANNEL_TOP_BACK_LEFT";
        break;
      case '\x12':
        pcVar2 = "CHANNEL_TOP_BACK_CENTER";
        break;
      case '\x13':
        pcVar2 = "CHANNEL_TOP_BACK_RIGHT";
        break;
      case '\x14':
        pcVar2 = "CHANNEL_AUX_0";
        break;
      case '\x15':
        pcVar2 = "CHANNEL_AUX_1";
        break;
      case '\x16':
        pcVar2 = "CHANNEL_AUX_2";
        break;
      case '\x17':
        pcVar2 = "CHANNEL_AUX_3";
        break;
      case '\x18':
        pcVar2 = "CHANNEL_AUX_4";
        break;
      case '\x19':
        pcVar2 = "CHANNEL_AUX_5";
        break;
      case '\x1a':
        pcVar2 = "CHANNEL_AUX_6";
        break;
      case '\x1b':
        pcVar2 = "CHANNEL_AUX_7";
        break;
      case '\x1c':
        pcVar2 = "CHANNEL_AUX_8";
        break;
      case '\x1d':
        pcVar2 = "CHANNEL_AUX_9";
        break;
      case '\x1e':
        pcVar2 = "CHANNEL_AUX_10";
        break;
      case '\x1f':
        pcVar2 = "CHANNEL_AUX_11";
        break;
      case ' ':
        pcVar2 = "CHANNEL_AUX_12";
        break;
      case '!':
        pcVar2 = "CHANNEL_AUX_13";
        break;
      case '\"':
        pcVar2 = "CHANNEL_AUX_14";
        break;
      case '#':
        pcVar2 = "CHANNEL_AUX_15";
        break;
      case '$':
        pcVar2 = "CHANNEL_AUX_16";
        break;
      case '%':
        pcVar2 = "CHANNEL_AUX_17";
        break;
      case '&':
        pcVar2 = "CHANNEL_AUX_18";
        break;
      case '\'':
        pcVar2 = "CHANNEL_AUX_19";
        break;
      case '(':
        pcVar2 = "CHANNEL_AUX_20";
        break;
      case ')':
        pcVar2 = "CHANNEL_AUX_21";
        break;
      case '*':
        pcVar2 = "CHANNEL_AUX_22";
        break;
      case '+':
        pcVar2 = "CHANNEL_AUX_23";
        break;
      case ',':
        pcVar2 = "CHANNEL_AUX_24";
        break;
      case '-':
        pcVar2 = "CHANNEL_AUX_25";
        break;
      case '.':
        pcVar2 = "CHANNEL_AUX_26";
        break;
      case '/':
        pcVar2 = "CHANNEL_AUX_27";
        break;
      case '0':
        pcVar2 = "CHANNEL_AUX_28";
        break;
      case '1':
        pcVar2 = "CHANNEL_AUX_29";
        break;
      case '2':
        pcVar2 = "CHANNEL_AUX_30";
        break;
      case '3':
        pcVar2 = "CHANNEL_AUX_31";
        break;
      default:
        pcVar2 = "UNKNOWN";
      }
      puVar4 = (uint *)pcVar2;
      do {
        uVar5 = *puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
      } while ((char)uVar5 != '\0');
      uVar5 = (int)puVar4 - ((int)pcVar2 + 1);
      if ((param_3 != 0) && (uVar5 + iVar6 < param_4)) {
        FUN_0044c490((uint *)(iVar6 + param_3),(uint *)pcVar2,uVar5);
      }
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + uVar5;
      if (param_2 <= uVar3) break;
      if ((param_3 != 0) && (iVar6 + 1U < param_4)) {
        *(undefined1 *)(iVar6 + param_3) = 0x20;
      }
      iVar6 = iVar6 + 1;
    }
  }
  if ((param_3 != 0) && (iVar6 + 1U < param_4)) {
    *(undefined1 *)(iVar6 + param_3) = 0;
  }
  return iVar6;
}


