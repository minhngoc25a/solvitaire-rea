// Function: FUN_004f0dbc
// Entry: 004f0dbc
// Size: 147 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_004f0dbc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  undefined4 uVar5;
  void *local_14;
  
  uVar5 = 0;
  ___acrt_lowio_lock_fh(*param_1);
  uVar1 = *(uint *)*param_2;
  if ((*(byte *)((&DAT_00544378)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) != 0) {
    hFile = (HANDLE)FUN_004c58b7(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 != 0) goto LAB_004f0e2c;
    DVar3 = GetLastError();
    p_Var4 = FUN_00424721();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_0042470e();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_004f0e2c:
  FUN_004f0e52();
  ExceptionList = local_14;
  return uVar5;
}


