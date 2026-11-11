// Function: FUN_00424b0e
// Entry: 00424b0e
// Size: 162 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00424b0e(undefined4 *param_1,uint *param_2,char *param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (char *)0x0) {
      pcVar3 = common_getenv_nolock<char>(param_3);
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + (1 - (int)(pcVar3 + 1));
        pcVar4 = (char *)FUN_0047f911((uint)pcVar6,1);
        *param_1 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          p_Var2 = FUN_0042470e();
          *(undefined4 *)p_Var2 = 0xc;
          return 0xc;
        }
        iVar5 = FUN_0047faad(pcVar4,(int)pcVar6,(int)pcVar3);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = (uint)pcVar6;
        }
      }
      return 0;
    }
  }
  p_Var2 = FUN_0042470e();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_004243be();
  return 0x16;
}


