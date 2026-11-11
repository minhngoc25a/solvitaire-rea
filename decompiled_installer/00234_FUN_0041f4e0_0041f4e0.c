// Function: FUN_0041f4e0
// Entry: 0041f4e0
// Size: 148 bytes
// Thunk: false
// External: false


undefined4 FUN_0041f4e0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  BOOL BVar3;
  uint local_8;
  DWORD local_4;
  
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      uVar2 = FUN_004781f0(puVar1,&local_8,1);
      if (uVar2 != 0) {
        puVar1[3] = puVar1[3] + 1;
        return 0;
      }
      return 1;
    }
    BVar3 = ReadFile((HANDLE)*puVar1,&param_1,1,&local_4,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (local_4 == 0)) {
      return 0xffffffff;
    }
    SetFilePointer((HANDLE)*puVar1,-1,(PLONG)0x0,1);
  }
  return local_8;
}


