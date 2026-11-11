// Function: FUN_0042f450
// Entry: 0042f450
// Size: 527 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_0042f450(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            undefined4 *param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  size_t _Size;
  int local_18 [6];
  
  if (param_8 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  _memset(param_8,0,0x70);
  local_18[0] = 0;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 4;
  local_18[5] = 4;
  iVar6 = local_18[param_1] * param_2;
  if (iVar6 == 0) {
    return 0xfffffffe;
  }
  piVar1 = param_8 + 0xe;
  uVar7 = iVar6 * param_3;
  if (piVar1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (uVar7 == 0) {
    return 0xfffffffe;
  }
  if (param_4 == 0) {
    return 0xfffffffe;
  }
  if (0x7fffffe0 < uVar7) {
    return 0xfffffffe;
  }
  piVar2 = param_8 + 0x15;
  if (piVar2 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_7 == (int *)0x0) {
LAB_0042f533:
    *piVar2 = 0;
    param_8[0x16] = FUN_00435570;
    param_8[0x17] = &LAB_00435580;
    param_8[0x18] = FUN_004355a0;
    goto LAB_0042f54e;
  }
  if (*param_7 == 0) {
    if (param_7[3] == 0) {
      if ((param_7[1] == 0) && (param_7[2] == 0)) goto LAB_0042f533;
      goto LAB_0042f511;
    }
  }
  else {
LAB_0042f511:
    if (param_7[3] == 0) {
      return 0xfffffffe;
    }
  }
  if ((param_7[1] == 0) && (param_7[2] == 0)) {
    return 0xfffffffe;
  }
  iVar3 = param_7[1];
  iVar4 = param_7[2];
  iVar5 = param_7[3];
  *piVar2 = *param_7;
  param_8[0x16] = iVar3;
  param_8[0x17] = iVar4;
  param_8[0x18] = iVar5;
LAB_0042f54e:
  param_8[0xf] = uVar7;
  param_8[0x10] = param_4;
  if (param_6 == 0) {
    uVar7 = uVar7 + 0x1f & 0xffffffdf;
    param_8[0x11] = uVar7;
    _Size = uVar7 * param_4;
    if (((code *)param_8[0x16] == (code *)0x0) ||
       (iVar6 = (*(code *)param_8[0x16])(_Size + 0x23,*piVar2), iVar6 == 0)) {
      *piVar1 = 0;
      return 0xfffffffc;
    }
    _Dst = (void *)(iVar6 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst + -4) = iVar6;
    *piVar1 = (int)_Dst;
    if (_Dst == (void *)0x0) {
      return 0xfffffffc;
    }
    if (_Size != 0) {
      _memset(_Dst,0,_Size);
    }
    *(undefined1 *)(param_8 + 0x14) = 1;
  }
  else {
    *piVar1 = param_6;
    param_8[0x11] = iVar6 * param_5;
  }
  param_8[0x19] = param_1;
  param_8[0x1a] = param_2;
  param_8[0x1b] = 0;
  param_8[1] = 0;
  param_8[0xd] = 0;
  *param_8 = &PTR_LAB_005404b8;
  param_8[2] = 0;
  param_8[3] = 0;
  param_8[4] = 0xffffffff;
  param_8[5] = 0xffffffff;
  param_8[6] = 0;
  param_8[7] = 0;
  param_8[8] = 0xffffffff;
  param_8[9] = 0xffffffff;
  param_8[10] = param_8;
  param_8[0xb] = 0;
  param_8[0xc] = 0;
  return 0;
}


