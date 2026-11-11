// Function: FUN_00502b30
// Entry: 00502b30
// Size: 69 bytes
// Thunk: false
// External: false


void __cdecl FUN_00502b30(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (int)param_3 <= param_4; param_3 = param_3 + 1) {
    iVar1 = 0;
    if (0 < param_5) {
      do {
        if (*(byte *)(iVar1 + param_2) == param_3) {
          *(int *)(param_1 + iVar1 * 4) = iVar2;
          iVar2 = iVar2 + 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
    iVar2 = iVar2 * 2;
  }
  return;
}


