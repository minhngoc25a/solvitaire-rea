// Function: FUN_00468e10
// Entry: 00468e10
// Size: 165 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00468e10(int param_1,LPCVOID param_2,DWORD param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  __acrt_ptd *p_Var5;
  
  puVar3 = *(uint **)(param_1 + 0xa4);
  if (*puVar3 == 0xffffffff) {
    puVar3[2] = 0;
    puVar3[3] = 0;
    uVar4 = FUN_00487410((uint *)0x0);
    *puVar3 = uVar4;
    if ((int)uVar4 < 0) {
      p_Var5 = FUN_0042470e();
      FUN_00487380(param_1,*(undefined4 *)p_Var5,0x5272c4);
      return 0xffffffe2;
    }
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar4 = FUN_00497a00(*puVar3,param_2,param_3);
    if ((int)uVar4 < 0) break;
    param_3 = param_3 - uVar4;
    param_2 = (LPCVOID)((int)param_2 + uVar4);
    puVar1 = puVar3 + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    puVar3[3] = puVar3[3] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  }
  p_Var5 = FUN_0042470e();
  FUN_00487380(param_1,*(undefined4 *)p_Var5,0x527e70);
  return 0xffffffe2;
}


