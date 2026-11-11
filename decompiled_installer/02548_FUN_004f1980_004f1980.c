// Function: FUN_004f1980
// Entry: 004f1980
// Size: 24 bytes
// Thunk: false
// External: false


int __cdecl FUN_004f1980(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x2c);
  if (iVar1 != 0) {
    return iVar1 - param_4;
  }
  return param_3;
}


