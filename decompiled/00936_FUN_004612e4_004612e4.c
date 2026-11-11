// Function: FUN_004612e4
// Entry: 004612e4
// Size: 82 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_004612e4(int *param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == 0) {
    FUN_0049ad9b(param_1);
    puVar2 = FUN_0049aeac(param_1[10],param_1[2],(uint *)param_1[3],(undefined *)param_1[9]);
  }
  else {
    psVar1 = FUN_0047d0f8((short *)param_1[1]);
    FUN_0049ad9b(param_1);
    puVar2 = FUN_00460d1b(param_1[10],psVar1,(undefined *)param_1[9]);
    FUN_0047d191(psVar1);
  }
  return puVar2;
}


