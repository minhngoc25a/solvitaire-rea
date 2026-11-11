// Function: FUN_004c43a0
// Entry: 004c43a0
// Size: 160 bytes
// Thunk: false
// External: false


LPSTR FUN_004c43a0(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  int iVar3;
  SIZE_T SVar4;
  LPSTR pCVar5;
  
  pWVar1 = GetEnvironmentStringsW();
  pCVar5 = (LPSTR)0x0;
  if (pWVar1 != (LPWCH)0x0) {
    pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
    iVar3 = (int)pwVar2 - (int)pWVar1 >> 1;
    SVar4 = FUN_004c42a4(0,0,pWVar1,iVar3,(LPSTR)0x0,0,0,(undefined4 *)0x0);
    if (SVar4 == 0) {
      FreeEnvironmentStringsW(pWVar1);
      pCVar5 = (LPSTR)0x0;
    }
    else {
      pCVar5 = __malloc_base(SVar4);
      if (pCVar5 == (LPSTR)0x0) {
        FUN_004247be((LPVOID)0x0);
        FreeEnvironmentStringsW(pWVar1);
        pCVar5 = (LPSTR)0x0;
      }
      else {
        iVar3 = FUN_004c42a4(0,0,pWVar1,iVar3,pCVar5,SVar4,0,(undefined4 *)0x0);
        if (iVar3 == 0) {
          FUN_004247be(pCVar5);
          pCVar5 = (LPSTR)0x0;
        }
        else {
          FUN_004247be((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar1);
      }
    }
  }
  return pCVar5;
}


