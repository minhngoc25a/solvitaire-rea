// Function: FUN_00423e40
// Entry: 00423e40
// Size: 101 bytes
// Thunk: false
// External: false


void FUN_00423e40(undefined4 *param_1,int param_2)

{
  SIZE_T dwBytes;
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  
  piVar2 = TlsGetValue(DAT_0053fba8);
  iVar1 = piVar2[2];
  dwBytes = (iVar1 - param_2) + 10;
  if ((LPVOID)*param_1 == (LPVOID)0x0) {
    pvVar3 = HeapAlloc(DAT_0054358c,0,dwBytes);
  }
  else {
    pvVar3 = HeapReAlloc(DAT_0054358c,0,(LPVOID)*param_1,dwBytes);
  }
  *param_1 = pvVar3;
  FUN_0047d0c0((int)pvVar3,(undefined4 *)(*piVar2 + param_2),(uint)(iVar1 - param_2) >> 1);
  piVar2[2] = param_2;
  return;
}


