// Function: FUN_0047bc80
// Entry: 0047bc80
// Size: 244 bytes
// Thunk: false
// External: false


undefined4
FUN_0047bc80(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = (int)(param_9 + (param_9 >> 0x1f & 7U)) >> 3;
  if (param_3 * param_6 - param_2 * param_7 == 0 || param_3 * param_6 < param_2 * param_7) {
    pvVar2 = (LPVOID)FUN_00482949(param_3 * param_8);
    if (pvVar2 == (LPVOID)0x0) {
      return 0;
    }
    FUN_0047c120(param_1,param_2,param_3,param_4,(int)pvVar2,param_6,param_3,param_8,iVar1);
    FUN_0047c370((int)pvVar2,param_6,param_3,param_8,param_5,param_6,param_7,param_8,iVar1);
  }
  else {
    pvVar2 = (LPVOID)FUN_00482949(param_4 * param_7);
    if (pvVar2 == (LPVOID)0x0) {
      return 0;
    }
    FUN_0047c370(param_1,param_2,param_3,param_4,(int)pvVar2,param_2,param_7,param_4,iVar1);
    FUN_0047c120((int)pvVar2,param_2,param_7,param_4,param_5,param_6,param_7,param_8,iVar1);
  }
  FUN_0047d191(pvVar2);
  return 1;
}


