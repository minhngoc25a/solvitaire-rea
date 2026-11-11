// Function: FUN_0048cab0
// Entry: 0048cab0
// Size: 66 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048cab0(int *param_1,int *param_2,int *param_3,UINT param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x26) & 2) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return 0;
  }
  iVar1 = FUN_0048dba0(*param_1,param_1 + 0x5d,param_2,param_3,param_4);
  return iVar1;
}


