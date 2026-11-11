// Function: FUN_0041f720
// Entry: 0041f720
// Size: 110 bytes
// Thunk: false
// External: false


undefined8 FUN_0041f720(int *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffffffffffff;
  }
  param_1 = (int *)0x0;
  DVar2 = SetFilePointer((HANDLE)*puVar1,0,(PLONG)&param_1,1);
  if (puVar1[1] != 0) {
    if (puVar1[5] != 1) {
      uVar3 = puVar1[2] - puVar1[3];
      return CONCAT44((int)param_1 + (uint)CARRY4(uVar3,DVar2) + ((int)uVar3 >> 0x1f),uVar3 + DVar2)
      ;
    }
    uVar3 = puVar1[3];
    bVar4 = DVar2 < uVar3;
    DVar2 = DVar2 - uVar3;
    param_1 = (int *)((int)param_1 + (-(uint)bVar4 - ((int)uVar3 >> 0x1f)));
  }
  return CONCAT44(param_1,DVar2);
}


