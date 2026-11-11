// Function: FUN_00461336
// Entry: 00461336
// Size: 173 bytes
// Thunk: false
// External: false


int * __cdecl FUN_00461336(int *param_1,LPCWSTR param_2)

{
  bool bVar1;
  LPCWSTR pWVar2;
  undefined3 extraout_var;
  LPSTR pCVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  LPSTR unaff_retaddr;
  LPSTR pCVar7;
  LPSTR _Str2;
  
  pWVar2 = FUN_0047d0f8(param_2);
  bVar1 = FUN_00460cf3(param_1);
  piVar5 = (int *)0x0;
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pCVar3 = FUN_0044e6a0(param_2);
    piVar4 = (int *)FUN_0044e510(pWVar2);
    do {
      iVar6 = FUN_0049a900(*param_1);
      piVar5 = (int *)0x0;
      if (iVar6 != 0) break;
      pCVar7 = pCVar3;
      if (((*(int *)(param_1[10] + 8) == 1) || (*(int *)(param_1[10] + 8) == 3)) ||
         (piVar5 = (int *)FUN_0048c070(piVar4), pCVar7 = unaff_retaddr, _Str2 = pCVar3,
         piVar5 == (int *)0x0)) {
        piVar5 = FUN_0048c000(piVar4);
        _Str2 = pCVar7;
      }
      iVar6 = _strcmp((char *)piVar5,_Str2);
      piVar5 = piVar4;
    } while (iVar6 != 0);
    FUN_0044e5a0(pCVar3);
    FUN_0044e5a0(unaff_retaddr);
  }
  FUN_0047d191(pWVar2);
  return piVar5;
}


