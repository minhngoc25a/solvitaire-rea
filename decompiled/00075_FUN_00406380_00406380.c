// Function: FUN_00406380
// Entry: 00406380
// Size: 569 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_00406380(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 *_Memory;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  char acStack_23c [4];
  uint local_238 [65];
  undefined4 local_134;
  int local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  char local_120 [272];
  
  if (param_1 == (char *)0x0) {
    piVar5 = _errno();
    *piVar5 = 0x16;
    return (undefined4 *)0x0;
  }
  if (*param_1 == '\0') {
    piVar5 = _errno();
    *piVar5 = 2;
    return (undefined4 *)0x0;
  }
  _fullpath((char *)local_238,param_1,0x104);
  puVar8 = local_238;
  puVar9 = local_238;
  if ((char)local_238[0] == '\0') {
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar2 = uVar2 + 0xfefefeff & ~uVar2 & 0x80808080;
    } while (uVar2 == 0);
  }
  else {
    do {
      puVar7 = puVar8;
      uVar4 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar2 = uVar4 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar2 == 0);
    if ((uVar4 & 0x8080) == 0) {
      puVar8 = (uint *)((int)puVar7 + 6);
      uVar2 = uVar2 >> 0x10;
    }
    pcVar6 = (char *)((int)puVar8 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_238))
    ;
    if ((acStack_23c[(int)(pcVar6 + 3)] == '\\') || (acStack_23c[(int)(pcVar6 + 3)] == '/'))
    goto LAB_004063f7;
    pcVar6 = (char *)((int)local_238 + (int)pcVar6);
    pcVar6[0] = '\\';
    pcVar6[1] = '\0';
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar2 = uVar2 + 0xfefefeff & ~uVar2 & 0x80808080;
    } while (uVar2 == 0);
  }
  if ((uVar2 & 0x8080) == 0) {
    puVar9 = (uint *)((int)puVar9 + 2);
    uVar2 = uVar2 >> 0x10;
  }
  pcVar6 = (char *)((int)puVar9 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_238));
LAB_004063f7:
  pcVar1 = (char *)((int)local_238 + (int)pcVar6);
  pcVar1[0] = '*';
  pcVar1[1] = '\0';
  _Memory = malloc((size_t)(pcVar6 + 0x141));
  if (_Memory == (undefined4 *)0x0) {
    piVar5 = _errno();
    *piVar5 = 0xc;
    _Memory = (undefined4 *)0x0;
  }
  else {
    memcpy(_Memory + 0x4e,local_238,(size_t)(pcVar6 + 2));
    iVar3 = findfirst(_Memory + 0x4e,&local_134);
    if (iVar3 == -1) {
      puVar10 = _Memory + 2;
      for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      _Memory[0x4c] = 0xffffffff;
      piVar5 = _errno();
      if (*piVar5 == 0x16) {
        piVar5 = _errno();
        *piVar5 = 0x14;
      }
      free(_Memory);
      _Memory = (undefined4 *)0x0;
    }
    else {
      _Memory[2] = local_134;
      _Memory[4] = local_130;
      _Memory[5] = local_130 >> 0x1f;
      _Memory[6] = local_12c;
      _Memory[7] = local_12c >> 0x1f;
      _Memory[8] = local_128;
      _Memory[9] = local_128 >> 0x1f;
      _Memory[10] = local_124;
      strncpy((char *)(_Memory + 0xb),local_120,0x104);
      *(undefined2 *)(_Memory + 1) = 0;
      _Memory[0x4c] = iVar3;
      _Memory[0x4d] = 0;
      *_Memory = 0;
    }
  }
  return _Memory;
}


