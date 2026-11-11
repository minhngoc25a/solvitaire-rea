// Function: FUN_004202f0
// Entry: 004202f0
// Size: 160 bytes
// Thunk: false
// External: false


void FUN_004202f0(LPCWSTR param_1,uint param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  LPSTR pCVar4;
  LPSTR pCVar5;
  int unaff_EDI;
  uint unaff_retaddr;
  uint uVar6;
  
  puVar2 = FUN_004791f0(param_2);
  if (puVar2 != (uint *)0x0) {
    if (param_1 == (LPCWSTR)0x0) {
      param_1 = L"";
    }
    piVar3 = (int *)(*(code *)puVar2[1])(0);
    if (piVar3 != (int *)0x0) {
      uVar6 = 1;
      (*(code *)puVar2[2])(piVar3);
      FUN_00479e30((int)piVar3,(int)puVar2,unaff_retaddr,(LPCWSTR)0x0,0);
      pCVar4 = FUN_0044e6a0(param_1);
      pCVar5 = pCVar4;
      do {
        cVar1 = *pCVar5;
        pCVar5 = pCVar5 + 1;
      } while (cVar1 != '\0');
      (*(code *)puVar2[3])(piVar3,pCVar4,(int)pCVar5 - (int)(pCVar4 + 1));
      (*(code *)puVar2[4])(piVar3);
      FUN_00479fd0(piVar3,(int)puVar2,uVar6);
      FUN_0044e5a0(pCVar4);
      FUN_00479dc0(piVar3,unaff_EDI);
      (*(code *)puVar2[5])(piVar3);
      return;
    }
  }
  FUN_00479dc0((int *)0x0,param_3);
  return;
}


