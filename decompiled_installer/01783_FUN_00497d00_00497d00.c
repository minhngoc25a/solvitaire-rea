// Function: FUN_00497d00
// Entry: 00497d00
// Size: 357 bytes
// Thunk: false
// External: false


int * __cdecl FUN_00497d00(int *param_1)

{
  ushort *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *local_c;
  undefined4 local_8;
  uint *local_4;
  
  puVar1 = (ushort *)FUN_0048c0b0(param_1);
  if (puVar1 != (ushort *)0x0) {
    puVar1 = FUN_004811eb(puVar1,0x5c);
    if (puVar1 != (ushort *)0x0) goto LAB_00497d64;
  }
  puVar1 = (ushort *)FUN_0048bf40(param_1);
  if (puVar1 != (ushort *)0x0) {
    puVar1 = FUN_004811eb(puVar1,0x5c);
    if (puVar1 != (ushort *)0x0) goto LAB_00497d64;
  }
  puVar1 = (ushort *)FUN_0048c200(param_1);
  if (puVar1 != (ushort *)0x0) {
    puVar1 = FUN_004811eb(puVar1,0x5c);
    if (puVar1 != (ushort *)0x0) {
LAB_00497d64:
      piVar2 = FUN_0048b800(param_1);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar5 = 0;
      local_c = (uint *)0x0;
      local_8 = 0;
      local_4 = (uint *)0x0;
      puVar3 = (uint *)FUN_0048c0b0(piVar2);
      iVar4 = FUN_00498220((int *)&local_c,puVar3);
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          FUN_0048c720((int)piVar2,local_c);
        }
        else {
          iVar5 = -0x19;
        }
      }
      puVar3 = (uint *)FUN_0048bf40(piVar2);
      iVar4 = FUN_00498220((int *)&local_4,puVar3);
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          FUN_0048c590((int)piVar2,local_4);
        }
        else {
          iVar5 = -0x19;
        }
      }
      puVar3 = (uint *)FUN_0048c200(piVar2);
      iVar4 = FUN_00498220((int *)&local_4,puVar3);
      if (iVar4 != 0) {
        if (iVar4 != 1) {
          FUN_0048d710(&local_4);
          FUN_0048ba90(piVar2);
          return (int *)0x0;
        }
        FUN_0048c870((int)piVar2,local_4);
      }
      FUN_0048d710(&local_4);
      if (iVar5 < -0x14) {
        FUN_0048ba90(piVar2);
        return (int *)0x0;
      }
      return piVar2;
    }
  }
  return param_1;
}


