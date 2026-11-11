// Function: FUN_0047f74d
// Entry: 0047f74d
// Size: 47 bytes
// Thunk: false
// External: false


void __fastcall FUN_0047f74d(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[3] == '\0') {
    iVar1 = FUN_004c2925((short *)(param_1[2] + 0x250),0x55,*param_1,param_1[1]);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}


