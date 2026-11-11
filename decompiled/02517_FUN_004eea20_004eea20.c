// Function: FUN_004eea20
// Entry: 004eea20
// Size: 149 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eea20(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = param_1;
  if (((char)param_1[7] == '\0') && (param_1[0x17] == 0)) {
    iVar4 = param_1[3];
    if (*(char *)((int)param_1 + 0x1f) == '\0') {
      iVar4 = (iVar4 - param_1[1]) + *param_1;
      param_1 = (int *)(param_1[0xf] + (param_1[0xd] - iVar4));
      if (param_1 != (int *)0x0) {
        while( true ) {
          iVar4 = (**(code **)piVar2[0xe])((undefined4 *)piVar2[0xe],iVar4,&param_1);
          piVar2[0x17] = iVar4;
          if (iVar4 != 0) break;
          if (param_1 == (int *)0x0) goto LAB_004eea56;
          piVar2[3] = piVar2[3] + (int)param_1;
          if ((uint)piVar2[0x11] < (uint)(piVar2[3] - piVar2[1])) {
            return;
          }
          iVar4 = *piVar2 + (piVar2[3] - piVar2[1]);
          param_1 = (int *)(piVar2[0xf] + (piVar2[0xd] - iVar4));
          if (param_1 == (int *)0x0) {
            return;
          }
        }
      }
    }
    else {
      uVar1 = param_1[0x13];
      uVar3 = (param_1[1] - iVar4) - 1;
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
      param_1[0x13] = uVar1 - uVar3;
      param_1[3] = iVar4 + uVar3;
      if (uVar1 - uVar3 == 0) {
LAB_004eea56:
        *(undefined1 *)(piVar2 + 7) = 1;
      }
    }
  }
  return;
}


