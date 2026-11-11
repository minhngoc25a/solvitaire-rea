// Function: FUN_0042c110
// Entry: 0042c110
// Size: 184 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042c110(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  LPVOID pvVar2;
  SIZE_T local_c [3];
  
  iVar1 = FUN_004472b0(param_1,local_c);
  if (iVar1 == 0) {
    if (local_c[0] == 0) {
      pvVar2 = (LPVOID)0x0;
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        pvVar2 = (LPVOID)FUN_00482949(local_c[0]);
      }
      else {
        if ((code *)param_2[1] == (code *)0x0) {
          return -4;
        }
        pvVar2 = (LPVOID)(*(code *)param_2[1])(local_c[0],*param_2);
      }
      if (pvVar2 == (LPVOID)0x0) {
        return -4;
      }
    }
    iVar1 = FUN_0042be60(param_1,pvVar2,param_3);
    if (iVar1 != 0) {
      if (pvVar2 != (LPVOID)0x0) {
        if (param_2 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar2);
        }
        else if ((code *)param_2[3] != (code *)0x0) {
          (*(code *)param_2[3])(pvVar2,*param_2);
          return iVar1;
        }
      }
      return iVar1;
    }
    *(undefined1 *)((int)param_3 + 0xe5) = 1;
    iVar1 = 0;
  }
  return iVar1;
}


