// Function: FUN_0044c3e0
// Entry: 0044c3e0
// Size: 129 bytes
// Thunk: false
// External: false


int FUN_0044c3e0(int param_1,int param_2)

{
  int *piVar1;
  SIZE_T dwBytes;
  LPVOID pvVar2;
  int iVar3;
  
  piVar1 = TlsGetValue(DAT_0053fba8);
  if (param_2 == -1) {
    param_2 = piVar1[2];
  }
  iVar3 = piVar1[2] + param_1 * 2;
  if (iVar3 < piVar1[1] + -4) {
    if (piVar1[1] < 0x100001) goto LAB_0044c450;
    if (iVar3 < 0x100000) {
      iVar3 = 0x100000;
    }
    piVar1[1] = iVar3;
    dwBytes = iVar3 + 10;
  }
  else {
    piVar1[1] = iVar3 + 0x4000;
    dwBytes = iVar3 + 0x400a;
  }
  pvVar2 = HeapReAlloc(DAT_0054358c,0,(LPVOID)*piVar1,dwBytes);
  *piVar1 = (int)pvVar2;
LAB_0044c450:
  piVar1[2] = param_2 + param_1 * 2;
  return *piVar1 + param_2;
}


