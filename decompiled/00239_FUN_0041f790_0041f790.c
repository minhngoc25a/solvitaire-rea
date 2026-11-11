// Function: FUN_0041f790
// Entry: 0041f790
// Size: 74 bytes
// Thunk: false
// External: false


undefined8 FUN_0041f790(int *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if ((puVar1[1] != 0) && (puVar1[5] == 0)) {
      FUN_0041f150(puVar1);
    }
    DVar2 = GetFileSize((HANDLE)*puVar1,(LPDWORD)&param_1);
    return CONCAT44(param_1,DVar2);
  }
  return 0xffffffffffffffff;
}


