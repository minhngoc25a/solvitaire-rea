// Function: FUN_0047f4bb
// Entry: 0047f4bb
// Size: 62 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0047f4bb(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[2] != 2) {
    return (uint)param_2 & 0xffffff00;
  }
  iVar1 = FUN_004c2925((short *)(param_1 + 0x100),0x10,*param_2,param_2[1]);
  if (iVar1 == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


