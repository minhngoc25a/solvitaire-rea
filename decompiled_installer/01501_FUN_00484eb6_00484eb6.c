// Function: FUN_00484eb6
// Entry: 00484eb6
// Size: 148 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00484eb6(int param_1,byte param_2,char *param_3,uint param_4,byte param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_4 < param_2 + 4) {
    *param_3 = '\0';
    return 0xc;
  }
  if (param_2 != 0) {
    *param_3 = '-';
    param_3 = param_3 + 1;
    *param_3 = '\0';
    if (param_4 != 0xffffffff) {
      param_4 = param_4 - 1;
    }
  }
  iVar3 = (param_5 ^ 1) * 2;
  pcVar4 = (&PTR_DAT_0050eff8)[param_1 * 4 + -4 + iVar3];
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar3 = FUN_0047faad(param_3,param_4,
                       (int)(&PTR_DAT_0050eff8)
                            [((param_1 * 4 + -3) -
                             (uint)((uint)((int)pcVar4 - (int)pcVar1) < param_4)) + iVar3]);
  if (iVar3 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


