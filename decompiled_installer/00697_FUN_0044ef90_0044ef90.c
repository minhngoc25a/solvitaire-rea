// Function: FUN_0044ef90
// Entry: 0044ef90
// Size: 91 bytes
// Thunk: false
// External: false


void __fastcall FUN_0044ef90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042464b(param_1);
  param_1[3] = *(int *)(iVar1 + 0x4c);
  param_1[4] = *(int *)(iVar1 + 0x48);
  FUN_00481ef9(iVar1,param_1 + 3,param_1[1]);
  FUN_00481f2a(iVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(iVar1 + 0x350) & 2) == 0) {
    *(uint *)(iVar1 + 0x350) = *(uint *)(iVar1 + 0x350) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}


