// Function: FUN_00504bd0
// Entry: 00504bd0
// Size: 202 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00504bd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int *param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  while( true ) {
    while( true ) {
      iVar5 = param_1[1];
      if (iVar5 == param_1[4]) {
        param_1[1] = 0;
        iVar5 = 0;
      }
      uVar4 = param_1[4] - iVar5;
      uVar2 = param_7 - *param_6;
      if (uVar4 <= (uint)(param_7 - *param_6)) {
        uVar2 = uVar4;
      }
      param_1[3] = uVar2 + iVar5;
      iVar3 = (*(code *)param_1[7])(param_1[6],param_1,param_2,param_3,param_4);
      iVar1 = param_1[1];
      FUN_0044c490((uint *)(*param_6 + param_5),(uint *)(*param_1 + iVar5),iVar1 - iVar5);
      iVar5 = *param_6 + (iVar1 - iVar5);
      *param_6 = iVar5;
      if ((char)param_1[5] == '\0') break;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(*param_1 + -1 + param_1[4]) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
      if (*param_6 == param_7) {
        return 0;
      }
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    if (iVar5 == param_7) break;
    if ((uint)param_1[1] < (uint)param_1[4]) {
      return 0;
    }
  }
  return 0;
}


