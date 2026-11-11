// Function: FUN_004201c0
// Entry: 004201c0
// Size: 302 bytes
// Thunk: false
// External: false


void FUN_004201c0(LPCWSTR param_1,uint param_2,int param_3)

{
  uint *puVar1;
  HANDLE hFile;
  LPVOID lpBuffer;
  int unaff_ESI;
  int *piVar2;
  int unaff_EDI;
  uint unaff_retaddr;
  int aiStack_c [3];
  
  aiStack_c[1] = 0;
  piVar2 = (int *)0x0;
  aiStack_c[2] = 0;
  puVar1 = FUN_004791f0(param_2);
  if (((puVar1 != (uint *)0x0) && (param_1 != (LPCWSTR)0x0)) &&
     (hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0),
     hFile != (HANDLE)0xffffffff)) {
    lpBuffer = HeapAlloc(DAT_00542264,0,0x100000);
    if (lpBuffer != (LPVOID)0x0) {
      piVar2 = (int *)(*(code *)puVar1[1])(0);
      if (piVar2 != (int *)0x0) {
        (*(code *)puVar1[2])(piVar2,0);
        FUN_00479e30((int)piVar2,(int)puVar1,unaff_retaddr,(LPCWSTR)0x0,0);
        if ((-1 < aiStack_c[0]) && ((0 < aiStack_c[0] || (unaff_ESI != 0)))) {
          SetFilePointer(hFile,unaff_ESI,aiStack_c,0);
        }
        do {
          ReadFile(hFile,lpBuffer,0x100000,(LPDWORD)&stack0xffffffec,(LPOVERLAPPED)0x0);
          (*(code *)puVar1[3])(piVar2,lpBuffer,unaff_EDI);
        } while (unaff_EDI == 0x100000);
        (*(code *)puVar1[4])(piVar2);
        FUN_00479fd0(piVar2,(int)puVar1,param_2);
      }
      HeapFree(DAT_00542264,0,lpBuffer);
    }
    CloseHandle(hFile);
  }
  FUN_00479dc0(piVar2,param_3);
  if (piVar2 != (int *)0x0) {
    (*(code *)puVar1[5])(piVar2);
  }
  return;
}


