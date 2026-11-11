// Function: FUN_0047e726
// Entry: 0047e726
// Size: 111 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047e726(short *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0047f91c(param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_0047e6e5(param_1,param_2,2);
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_0047e6e5(param_1,param_2,2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


