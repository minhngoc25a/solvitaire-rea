// Function: FUN_004ae590
// Entry: 004ae590
// Size: 134 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ae590(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar1 = param_2[2];
  iVar5 = param_2[6] * iVar1;
  iVar2 = param_2[4];
  if (0 < iVar2) {
    do {
      iVar6 = param_2[5];
      if (iVar2 - iVar4 <= param_2[5]) {
        iVar6 = iVar2 - iVar4;
      }
      iVar2 = param_2[7] - (param_2[6] + iVar4);
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
      iVar2 = param_2[1] - (param_2[6] + iVar4);
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
      if (iVar6 < 1) {
        return;
      }
      iVar6 = iVar6 * iVar1;
      if (param_3 == '\0') {
        pcVar3 = (code *)param_2[10];
      }
      else {
        pcVar3 = (code *)param_2[0xb];
      }
      (*pcVar3)(param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar4 * 4),iVar5,iVar6);
      iVar4 = iVar4 + param_2[5];
      iVar2 = param_2[4];
      iVar5 = iVar5 + iVar6;
    } while (iVar4 < iVar2);
  }
  return;
}


