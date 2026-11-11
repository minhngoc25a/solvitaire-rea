// Function: FUN_0046a3e0
// Entry: 0046a3e0
// Size: 262 bytes
// Thunk: false
// External: false


int * FUN_0046a3e0(undefined4 *param_1,wchar_t *param_2,int param_3)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int extraout_ECX;
  int extraout_EDX;
  
  if ((param_3 == 1) && (piVar2 = FUN_0046a300(param_1,param_2), piVar2 != (int *)0x0)) {
    if ((int *)param_1[4] != (int *)0x0) {
      FUN_004a3931(extraout_ECX,extraout_EDX,(int)piVar2,(int *)param_1[4]);
    }
  }
  else {
    if (param_2 == (wchar_t *)0x0) {
      param_2 = L"";
    }
    if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
      uVar3 = FUN_004a38c0((ushort *)param_2);
    }
    else {
      uVar3 = FUN_004a38f0((ushort *)param_2);
    }
    uVar3 = uVar3 % (uint)param_1[9];
    piVar2 = FUN_00478ad9((int *)param_1[0xe]);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    pwVar4 = param_2;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    pwVar4 = HeapAlloc(DAT_00542264,0,((int)pwVar4 - (int)(param_2 + 1) >> 1) * 2 + 2);
    piVar2[1] = (int)pwVar4;
    do {
      wVar1 = *param_2;
      param_2 = param_2 + 1;
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    *piVar2 = *(int *)(param_1[1] + uVar3 * 4);
    *(int **)(param_1[1] + uVar3 * 4) = piVar2;
    param_1[10] = param_1[10] + 1;
    *param_1 = piVar2;
    param_1[5] = uVar3;
    param_1[2] = 0;
    piVar2 = piVar2 + 2;
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  _memset(piVar2,0,param_1[7]);
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    FUN_0047a01e((int)piVar2,(int *)param_1[4]);
  }
  return piVar2;
}


