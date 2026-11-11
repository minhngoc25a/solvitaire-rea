// Function: FUN_0046ad42
// Entry: 0046ad42
// Size: 193 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0046ad42(int param_1,undefined4 param_2,undefined *param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)param_3)(param_2,0x5b);
  if (iVar1 != 0) {
    piVar2 = (int *)**(int **)(param_1 + 8);
    if (piVar2 == (int *)0x0) {
LAB_0046adc6:
      iVar1 = (*(code *)param_3)(param_2,0x5d);
      if (iVar1 != 0) {
        return 1;
      }
    }
    else if ((param_5 & 1) == 0) {
      do {
        iVar1 = FUN_0046a960((short *)(piVar2 + 2),param_2,param_3,param_4,param_5);
        if (iVar1 == 0) {
          return 0;
        }
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) goto LAB_0046adc6;
        iVar1 = (*(code *)param_3)(param_2,0x2c);
      } while (iVar1 != 0);
    }
    else {
      do {
        iVar1 = FUN_0046aa60(param_4 + 2,param_2,param_3);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_0046a960((short *)(piVar2 + 2),param_2,param_3,param_4 + 2,param_5);
        if (iVar1 == 0) {
          return 0;
        }
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) {
          iVar1 = FUN_0046aa60(param_4,param_2,param_3);
          if (iVar1 == 0) {
            return 0;
          }
          goto LAB_0046adc6;
        }
        iVar1 = (*(code *)param_3)(param_2,0x2c);
      } while (iVar1 != 0);
    }
  }
  return 0;
}


