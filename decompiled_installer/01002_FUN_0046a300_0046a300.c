// Function: FUN_0046a300
// Entry: 0046a300
// Size: 214 bytes
// Thunk: false
// External: false


int * FUN_0046a300(undefined4 *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  wchar_t *pwVar6;
  int *piVar7;
  bool bVar8;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = L"";
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    uVar2 = FUN_004a38c0((ushort *)param_2);
    uVar2 = uVar2 % (uint)param_1[9];
    for (piVar7 = *(int **)(param_1[1] + uVar2 * 4); piVar7 != (int *)0x0; piVar7 = (int *)*piVar7)
    {
      pwVar6 = (wchar_t *)piVar7[1];
      pwVar4 = param_2;
      do {
        wVar1 = *pwVar6;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar4;
        if (wVar1 != *pwVar4) {
LAB_0046a3bb:
          uVar5 = -(uint)bVar8 | 1;
          goto LAB_0046a3c0;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar6[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar4[1];
        if (wVar1 != pwVar4[1]) goto LAB_0046a3bb;
        pwVar6 = pwVar6 + 2;
        pwVar4 = pwVar4 + 2;
      } while (wVar1 != L'\0');
      uVar5 = 0;
LAB_0046a3c0:
      if (uVar5 == 0) goto LAB_0046a362;
      param_1[2] = piVar7;
    }
  }
  else {
    uVar2 = FUN_004a38f0((ushort *)param_2);
    uVar2 = uVar2 % (uint)param_1[9];
    piVar7 = *(int **)(param_1[1] + uVar2 * 4);
    if (piVar7 != (int *)0x0) {
      while (iVar3 = __wcsicmp((wchar_t *)piVar7[1],param_2), iVar3 != 0) {
        param_1[2] = piVar7;
        piVar7 = (int *)*piVar7;
        if (piVar7 == (int *)0x0) {
          return (int *)0x0;
        }
      }
LAB_0046a362:
      param_1[5] = uVar2;
      *param_1 = piVar7;
      return piVar7 + 2;
    }
  }
  return (int *)0x0;
}


