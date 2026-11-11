// Function: FUN_00506170
// Entry: 00506170
// Size: 95 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00506170(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_3 < param_4) {
    piVar3 = (int *)(param_2 + param_3);
    while (uVar4 = *(int *)((param_1 - param_2) + (int)piVar3) - *piVar3, uVar4 == 0) {
      param_3 = param_3 + 4;
      piVar3 = piVar3 + 1;
      if (param_4 <= param_3) {
        return param_4;
      }
    }
    cVar2 = (char)(uVar4 >> 0x10);
    uVar1 = param_3 + 2;
    if ((uVar4 & 0xffff) != 0) {
      cVar2 = (char)uVar4;
      uVar1 = param_3;
    }
    uVar4 = uVar1 + 1;
    if (cVar2 != '\0') {
      uVar4 = uVar1;
    }
    if (uVar4 < param_4) {
      param_4 = uVar4;
    }
  }
  return param_4;
}


