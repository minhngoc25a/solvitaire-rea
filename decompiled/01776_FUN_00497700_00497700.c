// Function: FUN_00497700
// Entry: 00497700
// Size: 104 bytes
// Thunk: false
// External: false


int __cdecl FUN_00497700(uint param_1,uint *param_2)

{
  __acrt_ptd *p_Var1;
  HANDLE pvVar2;
  int iVar3;
  uint *puVar4;
  uint local_58 [14];
  uint local_20;
  
  if (-1 < (int)param_1) {
    puVar4 = local_58;
    pvVar2 = (HANDLE)FUN_004c58b7(param_1);
    iVar3 = FUN_00497f50(pvVar2,puVar4);
    if ((-1 < iVar3) && (FUN_004981a0(param_2,local_58), (local_20 & 0x3000) != 0)) {
      *param_2 = param_1;
      param_2[4] = param_1;
    }
    return iVar3;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 9;
  return -1;
}


