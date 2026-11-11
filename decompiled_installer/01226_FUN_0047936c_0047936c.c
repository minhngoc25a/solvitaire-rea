// Function: FUN_0047936c
// Entry: 0047936c
// Size: 100 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047936c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_c [8];
  
  FUN_00479aec((int)local_c,(int)(param_2 + 4),8);
  uVar2 = (uint)param_2[4] >> 3 & 0x3f;
  iVar1 = 0x38;
  if (0x37 < uVar2) {
    iVar1 = 0x78;
  }
  FUN_004792d2(param_2,0x540640,iVar1 - uVar2);
  FUN_004792d2(param_2,(int)local_c,8);
  FUN_00479aec(param_1,(int)param_2,0x10);
  _memset(param_2,0,0x58);
  return;
}


