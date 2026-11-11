// Function: FUN_0047a6f7
// Entry: 0047a6f7
// Size: 112 bytes
// Thunk: false
// External: false


int FUN_0047a6f7(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    param_1 = (int)(param_1 + 0x1f + (param_1 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  }
  else if (param_2 == 4) {
    param_1 = (int)(param_1 + 7 + (param_1 + 7 >> 0x1f & 7U)) >> 3;
  }
  else {
    if (param_2 == 8) {
      iVar1 = param_1 + 3;
    }
    else {
      if ((param_2 == 0xf) || (param_2 == 0x10)) {
        param_1 = (param_1 + 1) / 2;
        goto LAB_0047a760;
      }
      if (param_2 != 0x18) goto LAB_0047a760;
      iVar1 = (param_1 + 1) * 3;
    }
    param_1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  }
LAB_0047a760:
  return param_1 << 2;
}


