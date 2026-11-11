// Function: FUN_00433150
// Entry: 00433150
// Size: 195 bytes
// Thunk: false
// External: false


int __cdecl FUN_00433150(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  LPVOID pvVar2;
  SIZE_T local_18 [6];
  
  iVar1 = FUN_0044a330(param_1,param_2,local_18);
  if (iVar1 == 0) {
    if (local_18[0] == 0) {
      pvVar2 = (LPVOID)0x0;
    }
    else {
      if (param_3 == (undefined4 *)0x0) {
        pvVar2 = (LPVOID)FUN_00482949(local_18[0]);
      }
      else {
        if ((code *)param_3[1] == (code *)0x0) {
          return -4;
        }
        pvVar2 = (LPVOID)(*(code *)param_3[1])(local_18[0],*param_3);
      }
      if (pvVar2 == (LPVOID)0x0) {
        return -4;
      }
    }
    iVar1 = FUN_00432e20(param_1,param_2,pvVar2,param_4);
    if (iVar1 != 0) {
      if (pvVar2 != (LPVOID)0x0) {
        if (param_3 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar2);
        }
        else if ((code *)param_3[3] != (code *)0x0) {
          (*(code *)param_3[3])(pvVar2,*param_3);
          return iVar1;
        }
      }
      return iVar1;
    }
    param_4[0x3f] = 1;
    iVar1 = 0;
  }
  return iVar1;
}


