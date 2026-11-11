// Function: FUN_00480291
// Entry: 00480291
// Size: 125 bytes
// Thunk: false
// External: false


void __cdecl FUN_00480291(undefined4 param_1)

{
  uint uVar1;
  BOOL BVar2;
  FARPROC pFVar3;
  HMODULE local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0050baee;
  local_10 = ExceptionList;
  uVar1 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (HMODULE)0x0;
  BVar2 = GetModuleHandleExW(0,L"mscoree.dll",&local_14);
  if (BVar2 != 0) {
    pFVar3 = GetProcAddress(local_14,"CorExitProcess");
    if (pFVar3 != (FARPROC)0x0) {
      (*(code *)PTR_guard_check_icall_00532084)(param_1,uVar1);
      (*pFVar3)();
    }
  }
  if (local_14 != (HMODULE)0x0) {
    FreeLibrary(local_14);
  }
  ExceptionList = local_10;
  return;
}


