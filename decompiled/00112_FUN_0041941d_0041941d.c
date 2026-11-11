// Function: FUN_0041941d
// Entry: 0041941d
// Size: 82 bytes
// Thunk: false
// External: false


short * __fastcall FUN_0041941d(int param_1,int param_2,short *param_3,short *param_4)

{
  uint uVar1;
  short *psVar2;
  
  FUN_00418c6b(param_1,param_2,param_3);
  *param_3 = 1;
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    uVar1 = FUN_0044be0a(param_4);
    psVar2 = HeapAlloc(DAT_00542264,0,uVar1 * 2 + 2);
    *(short **)(param_3 + 4) = psVar2;
    FUN_0044ca75(psVar2,param_4);
  }
  return param_3;
}


