// Function: FUN_00423d36
// Entry: 00423d36
// Size: 184 bytes
// Thunk: false
// External: false


int FUN_00423d36(SIZE_T param_1,undefined *param_2,int param_3)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  SIZE_T dwBytes;
  
  if ((param_1 & 3) != 0) {
    param_1 = param_1 + (4 - (param_1 & 3));
  }
  iVar3 = DAT_00543584;
  if (DAT_00543584 == 0) {
    DAT_00543588 = TlsAlloc();
    pvVar1 = HeapAlloc(DAT_00542264,8,param_1);
    TlsSetValue(DAT_00543588,pvVar1);
    iVar3 = DAT_00543584;
  }
  DAT_00543584 = param_1 + iVar3;
  dwBytes = DAT_00543584;
  pvVar1 = TlsGetValue(DAT_00543588);
  pvVar1 = HeapReAlloc(DAT_00542264,8,pvVar1,dwBytes);
  TlsSetValue(DAT_00543588,pvVar1);
  if ((param_2 != (undefined *)0x0) || (param_3 != 0)) {
    piVar2 = FUN_004257cc(&DAT_00543580,0x14);
    *piVar2 = iVar3;
    piVar2[1] = (int)param_2;
    piVar2[2] = param_3;
    if (param_2 != (undefined *)0x0) {
      (*(code *)param_2)(iVar3 + (int)pvVar1);
    }
  }
  return iVar3;
}


