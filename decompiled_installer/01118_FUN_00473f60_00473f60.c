// Function: FUN_00473f60
// Entry: 00473f60
// Size: 213 bytes
// Thunk: false
// External: false


void __cdecl FUN_00473f60(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar3 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (bVar1 == 2) {
        if (iVar3 != 0) {
          do {
            uVar2 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar2;
            iVar3 = iVar3 + -1;
            param_2 = param_2 + 3;
          } while (iVar3 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (iVar3 != 0)) {
        do {
          uVar2 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar2;
          iVar3 = iVar3 + -1;
          param_2 = param_2 + 4;
        } while (iVar3 != 0);
        return;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if (bVar1 == 2) {
        if (iVar3 != 0) {
          puVar4 = param_2 + 1;
          do {
            uVar2 = puVar4[-1];
            puVar4[-1] = puVar4[3];
            puVar4[3] = uVar2;
            uVar2 = *puVar4;
            *puVar4 = puVar4[4];
            puVar4[4] = uVar2;
            iVar3 = iVar3 + -1;
            puVar4 = puVar4 + 6;
          } while (iVar3 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (iVar3 != 0)) {
        puVar4 = param_2 + 1;
        do {
          uVar2 = puVar4[-1];
          puVar4[-1] = puVar4[3];
          puVar4[3] = uVar2;
          uVar2 = *puVar4;
          *puVar4 = puVar4[4];
          puVar4[4] = uVar2;
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 8;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}


