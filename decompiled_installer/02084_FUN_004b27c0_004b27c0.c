// Function: FUN_004b27c0
// Entry: 004b27c0
// Size: 325 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b27c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar4 = param_1;
  iVar1 = param_1[0x6c];
  cVar5 = (**(code **)(param_1[0x6b] + 8))(param_1);
  if (cVar5 == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  param_1 = (int *)0x0;
  if (0 < piVar4[0x4c]) {
    puVar6 = (undefined4 *)(iVar1 + 0x28);
    piVar7 = piVar4 + 0x4d;
    do {
      iVar2 = *piVar7;
      if ((*(char *)((int)piVar4 + 0xc9) == '\0') || ((piVar4[0x5e] == 0 && (piVar4[0x60] == 0)))) {
        _memset(*(void **)(iVar1 + 0x3c + *(int *)(iVar2 + 0x14) * 4),0,0x40);
        puVar6[-4] = 0;
        *puVar6 = 0;
      }
      if (*(char *)((int)piVar4 + 0xc9) == '\0') {
        iVar3 = piVar4[100];
      }
      else {
        iVar3 = piVar4[0x5e];
      }
      if (iVar3 != 0) {
        _memset(*(void **)(iVar1 + 0x7c + *(int *)(iVar2 + 0x18) * 4),0,0x100);
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar7 = piVar7 + 1;
      puVar6 = puVar6 + 1;
    } while ((int)param_1 < piVar4[0x4c]);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0xfffffff0;
  *(int *)(iVar1 + 0x38) = piVar4[0x3f];
  return;
}


