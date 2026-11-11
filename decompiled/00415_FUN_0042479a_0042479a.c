// Function: FUN_0042479a
// Entry: 0042479a
// Size: 36 bytes
// Thunk: false
// External: false


void __cdecl FUN_0042479a(ulong param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(ulong *)(param_2 + 0x20) = param_1;
  iVar1 = FID_conflict____acrt_errno_from_os_error(param_1);
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(int *)(param_2 + 0x18) = iVar1;
  return;
}


