// Function: FUN_004c79ee
// Entry: 004c79ee
// Size: 142 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004c79ee(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int extraout_EDX;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar2 = fegetround();
  if (iVar2 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      bVar1 = FUN_004c79cb(param_2 + 1,param_4);
      if (bVar1) {
        return true;
      }
      if (extraout_EDX != param_1) {
        return (bool)(*(byte *)(extraout_EDX + -1) & 1);
      }
    }
  }
  else if (iVar2 == 0x200) {
    bVar1 = FUN_004c79cb(param_2,param_4);
    if ((bVar1) && (param_3 != 0x2d)) {
      return true;
    }
  }
  else if (((iVar2 == 0x100) && (bVar1 = FUN_004c79cb(param_2,param_4), bVar1)) && (param_3 == 0x2d)
          ) {
    return true;
  }
  return false;
}


