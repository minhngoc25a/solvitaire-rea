// Function: FUN_00416f7d
// Entry: 00416f7d
// Size: 391 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

void FUN_00416f7d(undefined4 param_1,undefined2 *param_2,uint param_3,int param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  uint uVar3;
  LPVOID pv;
  short *psVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_228 [3];
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 *local_214;
  int local_210;
  short asStack_20a [260];
  undefined2 local_2;
  
  uVar6 = 0;
  if (DAT_005428e0 == 0) {
    DAT_005428e0 = 1;
    CoInitialize((LPVOID)0x0);
  }
  _memset(local_228,0,0x20);
  hModule = LoadLibraryW(L"SHELL32.DLL");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"SHBrowseForFolderW");
    pFVar2 = GetProcAddress(hModule,"SHGetPathFromIDListW");
    if (param_2 == (undefined2 *)0x0) {
      param_2 = &DAT_0052ef5c;
    }
    FUN_0044c204(asStack_20a + 1,(int)param_2,0x103);
    local_2 = 0;
    uVar3 = FUN_0044be0a(asStack_20a + 1);
    if ((3 < (int)uVar3) && (asStack_20a[uVar3] == 0x5c)) {
      asStack_20a[uVar3] = 0;
    }
    local_21c = param_1;
    if (param_3 == 0) {
      param_3 = FUN_0044c244();
    }
    local_210 = (int)(asStack_20a + 1);
    local_218 = 0x50;
    local_214 = &LAB_00416f38;
    local_228[0] = param_3;
    FUN_0044c278(1);
    pv = (LPVOID)(*pFVar1)(local_228);
    FUN_0044c278(0);
    if (pv != (LPVOID)0x0) {
      psVar4 = (short *)FUN_0044c3e0(0x104,param_4);
      *psVar4 = 0;
      (*pFVar2)(pv,psVar4);
      CoTaskMemFree(pv);
      uVar6 = FUN_0044be0a(psVar4);
      if (psVar4[uVar6 - 1] != 0x5c) {
        psVar4[uVar6] = 0x5c;
        psVar4[uVar6 + 1] = 0;
        uVar6 = uVar6 + 1;
      }
    }
    FreeLibrary(hModule);
    if (uVar6 != 0) goto LAB_004170f0;
  }
  puVar5 = (undefined2 *)FUN_0044c3e0(0x104,param_4);
  *puVar5 = 0;
LAB_004170f0:
  FUN_0044c470(0x104 - uVar6);
  return;
}


