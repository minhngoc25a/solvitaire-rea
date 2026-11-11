// Function: FUN_0046be50
// Entry: 0046be50
// Size: 120 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046be50(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined3 extraout_var;
  
  if (param_3 - 0x10U < 0x2540be31) {
    if (((*(uint *)(param_1 + 0x74) & 0x8000) == 0) || ((*(byte *)((int)param_2 + 0x4a) & 8) == 0))
    {
      if (-1 < *(short *)((int)param_2 + 0x4a)) {
        bVar1 = FUN_0046d7a0(param_1,param_2,param_3,1);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) | 9;
          *param_2 = param_3;
        }
      }
      return;
    }
    pcVar2 = "duplicate";
  }
  else {
    pcVar2 = "gamma value out of range";
  }
  *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) | 0x8000;
  FUN_0046f6d0(param_1,pcVar2,1);
  return;
}


