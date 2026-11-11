// Function: FUN_00497a70
// Entry: 00497a70
// Size: 107 bytes
// Thunk: false
// External: false


LPWSTR __cdecl FUN_00497a70(byte *param_1)

{
  byte bVar1;
  LPWSTR pWVar2;
  LPWSTR pWVar3;
  byte *pbVar4;
  
  pbVar4 = param_1;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  pWVar2 = (LPWSTR)FUN_00482949((int)(pbVar4 + -(int)(param_1 + 1)) * 2 + 2);
  if (pWVar2 != (LPWSTR)0x0) {
    pbVar4 = FUN_004c0053(pWVar2,param_1,pbVar4 + -(int)(param_1 + 1));
    if (pbVar4 != (byte *)0xffffffff) {
      pWVar2[(int)pbVar4] = L'\0';
      pWVar3 = FUN_00497ae0(pWVar2);
      FUN_0047d191(pWVar2);
      return pWVar3;
    }
    FUN_0047d191(pWVar2);
  }
  return (LPWSTR)0x0;
}


