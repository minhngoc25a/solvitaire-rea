// Function: FUN_004557b6
// Entry: 004557b6
// Size: 130 bytes
// Thunk: false
// External: false


void __thiscall FUN_004557b6(void *this,WCHAR *param_1,int param_2,int *param_3,int *param_4)

{
  WCHAR *pWVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = param_4[6];
  iVar3 = param_4[7];
  pWVar1 = param_1 + param_2;
  do {
    if (param_1 == pWVar1) {
LAB_00455826:
      param_4[6] = iVar2;
      param_4[7] = iVar3;
      return;
    }
    bVar4 = FUN_00455869(this,*param_1,param_4);
    if (bVar4) {
LAB_0045580e:
      *param_3 = *param_3 + 1;
    }
    else {
      if (((char)param_4[7] == '\0') || (param_4[6] != 0x2a)) {
        *param_3 = -1;
        goto LAB_00455826;
      }
      bVar4 = FUN_00455869(this,L'?',param_4);
      if (bVar4) goto LAB_0045580e;
      *param_3 = -1;
    }
    param_1 = param_1 + 1;
  } while( true );
}


