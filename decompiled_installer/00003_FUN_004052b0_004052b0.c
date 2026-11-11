// Function: FUN_004052b0
// Entry: 004052b0
// Size: 1087 bytes
// Thunk: false
// External: false


void FUN_004052b0(undefined4 param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  int iVar3;
  LPSYSTEM_INFO p_Var4;
  uint *puVar5;
  _SYSTEM_INFO local_15c;
  uint local_138 [70];
  char local_1e;
  
  FUN_004242b0(param_1);
  FUN_00423f50();
  p_Var4 = &local_15c;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    (p_Var4->u).dwOemId = 0;
    p_Var4 = (LPSYSTEM_INFO)&p_Var4->dwPageSize;
  }
  puVar5 = local_138;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_138[0] = 0x11c;
  pHVar1 = FUN_00423c5d((HMODULE)0xffffffff,u_ntdll_dll_00538064);
  if (pHVar1 != (HMODULE)0x0) {
    pFVar2 = FUN_00423c03(&pHVar1->unused,u_RtlGetVersion_00537554);
    if (pFVar2 == (FARPROC)0x0) {
      FUN_00423b8f(&pHVar1->unused);
    }
    else {
      iVar3 = FUN_00423b31(pFVar2,local_138);
      FUN_00423b8f(&pHVar1->unused);
      if (iVar3 == 0) {
        FUN_00423f50();
        pHVar1 = GetModuleHandleW(u_kernel32_dll_005363cc);
        if ((pHVar1 == (HMODULE)0x0) ||
           (pFVar2 = GetProcAddress(pHVar1,(LPCSTR)u_GetNativeSystemInfo_00535560),
           pFVar2 == (FARPROC)0x0)) {
          GetSystemInfo(&local_15c);
        }
        else {
          FUN_00423b31(pFVar2,&local_15c);
        }
        if (local_1e == '\x01') {
          if (local_138[1] == 5) {
            if (local_138[2] == 0) {
              FUN_004241c0();
              FUN_00423ff0(u_Windows_2000_005375a4);
              FUN_00424280();
              return;
            }
            if (local_138[2] - 1 < 2) {
              FUN_004241c0();
              FUN_00423ff0(u_Windows_XP_00535328);
              FUN_00424280();
              return;
            }
          }
          else if (local_138[1] == 6) {
            if (local_138[2] == 0) {
              FUN_004241c0();
              FUN_00423ff0(u_Windows_Vista_00537958);
              FUN_00424280();
              return;
            }
            if (local_138[2] == 1) {
              FUN_004241c0();
              FUN_00423ff0(u_Windows_7_00535bc0);
              FUN_00424280();
              return;
            }
            if (local_138[2] - 2 < 2) {
              FUN_004241c0();
              FUN_00423ff0(u_Windows_8_00535bac);
              FUN_00424280();
              return;
            }
          }
          else if (local_138[1] == 10) {
            if ((int)local_138[3] < 22000) {
              FUN_004241c0();
              FUN_00423ff0(u_Windows_10_005366cc);
              FUN_00424280();
              return;
            }
            FUN_004241c0();
            FUN_00423ff0(u_Windows_11_005366b4);
            FUN_00424280();
            return;
          }
        }
        else if (local_138[1] == 5) {
          if (local_138[2] == 2) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2003_00536540);
            FUN_00424280();
            return;
          }
        }
        else if (local_138[1] == 6) {
          if (local_138[2] == 0) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2008_005364a0);
            FUN_00424280();
            return;
          }
          if (local_138[2] == 1) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2008_00535840);
            FUN_00424280();
            return;
          }
          if (local_138[2] - 2 < 2) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2012_00536360);
            FUN_00424280();
            return;
          }
        }
        else if (local_138[1] == 10) {
          if (0x65f3 < (int)local_138[3]) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2025_00536080);
            FUN_00424280();
            return;
          }
          if (0x4f7b < (int)local_138[3]) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2022_005360c0);
            FUN_00424280();
            return;
          }
          if (0x4562 < (int)local_138[3]) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2019_00536280);
            FUN_00424280();
            return;
          }
          if (0x3838 < (int)local_138[3]) {
            FUN_004241c0();
            FUN_00423ff0(u_Windows_Server_2016_005362e0);
            FUN_00424280();
            return;
          }
        }
        FUN_004241c0();
        FUN_00423ff0(u_Unknown___00535a80);
        FUN_004241c0();
        FUN_004241c0();
        iVar3 = FUN_004241e0();
        FUN_00422f10(local_138[1],(int)local_138[1] >> 0x1f,iVar3);
        FUN_004241e0();
        FUN_00423ff0((short *)&DAT_00537eac);
        FUN_004241c0();
        FUN_004241c0();
        iVar3 = FUN_004241e0();
        FUN_00422f10(local_138[2],(int)local_138[2] >> 0x1f,iVar3);
        FUN_004241e0();
        FUN_00423ff0(u___build_00538100);
        FUN_004241c0();
        FUN_004241c0();
        iVar3 = FUN_004241e0();
        FUN_00422f10(local_138[3],(int)local_138[3] >> 0x1f,iVar3);
        FUN_004241e0();
        FUN_00423ff0((short *)&DAT_00537f08);
        FUN_00424280();
        return;
      }
    }
  }
  FUN_004241c0();
  FUN_00423ff0(u_ERROR_00535588);
  FUN_00424280();
  return;
}


