// Function: FUN_00423eb0
// Entry: 00423eb0
// Size: 49 bytes
// Thunk: false
// External: false


void FUN_00423eb0(short *param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = TlsGetValue(DAT_0053fba8);
  FUN_0044c204(param_1,*piVar1 + param_3,param_2);
  piVar1[2] = param_3;
  return;
}


