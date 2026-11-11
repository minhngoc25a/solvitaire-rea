// Function: FUN_00460fe1
// Entry: 00460fe1
// Size: 515 bytes
// Thunk: false
// External: false


undefined4 FUN_00460fe1(int param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  LPCWSTR pWVar1;
  uint uVar2;
  HANDLE hFile;
  LPCWSTR pWVar3;
  LPVOID lpMem;
  void *pvVar4;
  uint *puVar5;
  LPCWSTR pWVar6;
  undefined4 uVar7;
  HANDLE in_stack_0000001c;
  HANDLE hFile_00;
  LPCWSTR pWVar8;
  undefined4 local_38;
  undefined4 local_30 [2];
  LPVOID apvStack_28 [10];
  
  pWVar8 = param_3;
  uVar7 = 0;
  local_38 = 0;
  if ((((((*(int *)(param_1 + 0x10) == 1) && (param_2 != (LPCWSTR)0x0)) && (*param_2 != L'\0')) &&
       ((param_3 != (LPCWSTR)0x0 && (*param_3 != L'\0')))) &&
      ((uVar2 = FUN_0044be0a(param_3), uVar2 < 3 || ((*pWVar8 != L'\\' && (pWVar8[1] != L':'))))))
     && (hFile = CreateFileW(param_2,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0),
        hFile != (HANDLE)0xffffffff)) {
    pWVar3 = (LPCWSTR)GetFileSize(hFile,(LPDWORD)&param_3);
    pWVar1 = param_3;
    param_3 = pWVar3;
    lpMem = HeapAlloc(DAT_00542264,0,0x200000);
    if (lpMem != (LPVOID)0x0) {
      pvVar4 = (void *)FUN_0048bb50();
      if (pvVar4 != (void *)0x0) {
        FUN_00499a9c(param_2,(_stat64i32 *)local_30);
        FUN_0048c730((int)pvVar4,0x1a4);
        hFile_00 = (HANDLE)0x4610de;
        FUN_0049ace0((int)pvVar4,apvStack_28);
        pWVar3 = param_3;
        if ((*(int *)(*(int *)(param_3 + 0x14) + 8) == 1) ||
           (*(int *)(*(int *)(param_3 + 0x14) + 8) == 3)) {
          puVar5 = (uint *)FUN_0044e6a0(pWVar8);
          FUN_0048c710((int)pvVar4,puVar5);
          FUN_0044e5a0(puVar5);
        }
        else {
          FUN_0048c720((int)pvVar4,(uint *)pWVar8);
        }
        FUN_0048c7c0((int)pvVar4,in_stack_0000001c,local_30[0]);
        FUN_0048c4b0((int)pvVar4,0x8000);
        FUN_0049a950(*(int *)pWVar3);
        pWVar8 = (LPCWSTR)0x0;
        ReadFile(hFile,apvStack_28[0],0x200000,(LPDWORD)&stack0x0000001c,(LPOVERLAPPED)0x0);
        while ((0 < (int)param_2 &&
               (pWVar6 = (LPCWSTR)FUN_0049a970(*(int *)pWVar3), pWVar6 == param_3))) {
          pWVar8 = (LPCWSTR)((int)pWVar8 + (int)param_3);
          ReadFile(hFile_00,hFile,(DWORD)apvStack_28[0],(LPDWORD)0x200000,(LPOVERLAPPED)&param_3);
        }
        if ((pWVar8 == param_3) && ((LPCWSTR)((int)pWVar8 >> 0x1f) == pWVar1)) {
          local_38 = 1;
        }
        FUN_0048ba90(pvVar4);
        lpMem = apvStack_28[0];
      }
      HeapFree(DAT_00542264,0,lpMem);
      uVar7 = local_38;
    }
    CloseHandle(hFile);
  }
  return uVar7;
}


