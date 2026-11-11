// Function: FUN_0047e6e5
// Entry: 0047e6e5
// Size: 64 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047e6e5(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    piVar3 = &param_3;
    do {
      piVar3 = piVar3 + 1;
      iVar1 = FUN_00480748(param_1,param_2,*piVar3);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}


