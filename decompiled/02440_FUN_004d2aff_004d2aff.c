// Function: FUN_004d2aff
// Entry: 004d2aff
// Size: 377 bytes
// Thunk: false
// External: false


byte * __cdecl FUN_004d2aff(byte *param_1,uint param_2,int param_3,byte param_4)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  ulong uVar4;
  int local_8;
  
  uVar1 = param_2 & 3;
  *param_1 = 0;
  if (uVar1 == 0) {
    iVar3 = -0x80000000;
  }
  else if (uVar1 == 1) {
    iVar3 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar1 == 2) {
    iVar3 = -0x40000000;
  }
  else {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar3 = -1;
  }
  *(int *)(param_1 + 4) = iVar3;
  uVar4 = decode_open_create_flags(param_2);
  *(ulong *)(param_1 + 8) = uVar4;
  if (param_3 == 0x10) {
    uVar1 = 0;
  }
  else if (param_3 == 0x20) {
    uVar1 = 1;
  }
  else if (param_3 == 0x30) {
    uVar1 = 2;
  }
  else if (param_3 == 0x40) {
    uVar1 = 3;
  }
  else if (param_3 == 0x80) {
    uVar1 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    uVar1 = 0xffffffff;
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar1;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x74000) == 0) {
      iVar3 = FUN_004e750a(&local_8);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_8 == 0x8000) goto LAB_004d2bfc;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_004d2bfc:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_00544b24 & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 & 0x1000) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 & 0x2000) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}


