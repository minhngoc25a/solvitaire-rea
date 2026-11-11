// Function: FUN_0049da00
// Entry: 0049da00
// Size: 73 bytes
// Thunk: false
// External: false


int __cdecl FUN_0049da00(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  pcVar2 = *(code **)(param_1[1] + 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = (*pcVar2)(iVar1,param_2);
    if (iVar3 == 0) break;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = 4;
    }
    iVar1 = *(int *)(iVar4 + iVar1);
  }
  return iVar1;
}


