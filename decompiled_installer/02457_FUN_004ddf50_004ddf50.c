// Function: FUN_004ddf50
// Entry: 004ddf50
// Size: 93 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ddf50(int param_1,LPCVOID param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = FUN_00497a00(*(uint *)(iVar1 + 8),param_2,param_3);
    if ((int)uVar2 < 0) break;
    param_2 = (LPCVOID)((int)param_2 + uVar2);
    param_3 = param_3 - uVar2;
  }
  p_Var3 = FUN_0042470e();
  FUN_00487380(param_1,*(undefined4 *)p_Var3,0x527264);
  return 0xffffffe2;
}


