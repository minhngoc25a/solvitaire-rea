// Function: FUN_004c4440
// Entry: 004c4440
// Size: 78 bytes
// Thunk: false
// External: false


uint * FUN_004c4440(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  uint *puVar3;
  uint uVar4;
  
  pWVar1 = GetEnvironmentStringsW();
  if (pWVar1 == (LPWCH)0x0) {
    return (uint *)0x0;
  }
  pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
  uVar4 = (int)pwVar2 - (int)pWVar1 & 0xfffffffe;
  puVar3 = __malloc_base(uVar4);
  if (puVar3 != (uint *)0x0) {
    FUN_0044c490(puVar3,(uint *)pWVar1,uVar4);
  }
  FUN_004247be((LPVOID)0x0);
  FreeEnvironmentStringsW(pWVar1);
  return puVar3;
}


