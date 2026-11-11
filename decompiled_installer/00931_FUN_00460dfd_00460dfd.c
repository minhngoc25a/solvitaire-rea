// Function: FUN_00460dfd
// Entry: 00460dfd
// Size: 135 bytes
// Thunk: false
// External: false


void FUN_00460dfd(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
LAB_00460e77:
    FUN_00469d30(param_2);
  }
  else {
    if ((*(int *)(*(int *)(param_1 + 0x28) + 8) == 1) ||
       (*(int *)(*(int *)(param_1 + 0x28) + 8) == 3)) {
      pbVar3 = (byte *)FUN_0048c000(piVar1);
      if (pbVar3 == (byte *)0x0) goto LAB_00460e77;
      iVar4 = FUN_0049a1e0(pbVar3);
      if (iVar4 == 0) goto LAB_00460e70;
    }
    else {
      psVar2 = (short *)FUN_0048c0b0(piVar1);
      if (psVar2 != (short *)0x0) {
        FUN_0044e7a0(psVar2,param_2);
        return;
      }
      pbVar3 = (byte *)FUN_0048c070(*(int **)(param_1 + 0x14));
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)FUN_0048c000(*(int **)(param_1 + 0x14));
LAB_00460e70:
        FUN_0044e5b0((LPCSTR)pbVar3,param_2);
        return;
      }
    }
    FUN_0044e730((LPCSTR)pbVar3,param_2);
  }
  return;
}


