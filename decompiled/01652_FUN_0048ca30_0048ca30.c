// Function: FUN_0048ca30
// Entry: 0048ca30
// Size: 66 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048ca30(int *param_1,int *param_2,int *param_3,UINT param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return 0;
  }
  iVar1 = FUN_0048dba0(*param_1,param_1 + 0x43,param_2,param_3,param_4);
  return iVar1;
}


