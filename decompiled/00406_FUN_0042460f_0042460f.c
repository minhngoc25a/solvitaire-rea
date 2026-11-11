// Function: FUN_0042460f
// Entry: 0042460f
// Size: 60 bytes
// Thunk: false
// External: false


void __fastcall FUN_0042460f(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[5] == '\x02') {
    *(uint *)(*param_1 + 0x350) = *(uint *)(*param_1 + 0x350) & 0xfffffffd;
  }
  if ((char)param_1[7] != '\0') {
    iVar1 = param_1[6];
    iVar2 = FUN_0042464b(param_1);
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  if ((char)param_1[9] != '\0') {
    iVar1 = param_1[8];
    iVar2 = FUN_0042464b(param_1);
    *(int *)(iVar2 + 0x14) = iVar1;
  }
  return;
}


