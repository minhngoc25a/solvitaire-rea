// Function: FUN_004281c0
// Entry: 004281c0
// Size: 210 bytes
// Thunk: false
// External: false


void __cdecl FUN_004281c0(int param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x14) + iVar4;
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x14) != 0)) &&
           (pvVar1 = *(LPVOID *)(iVar2 + 0x10), pvVar1 != (LPVOID)0x0)) {
          if (param_2 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar1);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            (*(code *)param_2[3])(pvVar1,*param_2);
          }
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x18) + iVar4;
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x28) != 0)) &&
           (pvVar1 = *(LPVOID *)(iVar2 + 0x24), pvVar1 != (LPVOID)0x0)) {
          if (param_2 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar1);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            (*(code *)param_2[3])(pvVar1,*param_2);
          }
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
    }
    if ((*(int *)(param_1 + 0x20) != 0) &&
       (pvVar1 = *(LPVOID *)(param_1 + 0x1c), pvVar1 != (LPVOID)0x0)) {
      if (param_2 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
        return;
      }
    }
  }
  return;
}


