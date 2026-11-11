// Function: FUN_00491e90
// Entry: 00491e90
// Size: 168 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00491e90(int *param_1,char *param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + param_3 * 2 + 2));
  if (piVar1 != (int *)0x0) {
    puVar3 = (undefined1 *)(*param_1 + param_1[1]);
    if (param_3 != 0) {
      if (param_5 == 0) {
        do {
          uVar2 = (uint)*param_2;
          param_2 = param_2 + 1;
          if (0x7f < uVar2) {
            uVar2 = 0xfffd;
            uVar4 = 0xffffffff;
          }
          *puVar3 = (char)uVar2;
          puVar3[1] = (char)(uVar2 >> 8);
          puVar3 = puVar3 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      else {
        do {
          uVar2 = (uint)*param_2;
          param_2 = param_2 + 1;
          if (0x7f < uVar2) {
            uVar2 = 0xfffd;
            uVar4 = 0xffffffff;
          }
          puVar3[1] = (char)uVar2;
          *puVar3 = (char)(uVar2 >> 8);
          puVar3 = puVar3 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    param_1[1] = (int)puVar3 - *param_1;
    *puVar3 = 0;
    *(undefined1 *)(*param_1 + 1 + param_1[1]) = 0;
    return uVar4;
  }
  return 0xffffffff;
}


