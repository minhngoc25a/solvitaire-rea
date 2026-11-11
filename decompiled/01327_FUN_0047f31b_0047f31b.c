// Function: FUN_0047f31b
// Entry: 0047f31b
// Size: 113 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0047f31b(short *param_1,int *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (param_2[2] == 0) {
    in_EAX = param_2[1] - 2;
    if ((in_EAX < 2) && (in_EAX = FUN_0047f2dc(*param_2,param_2[1]), (char)in_EAX != '\0')) {
      iVar1 = FUN_004c2925(param_1,0x40,*param_2,param_2[1]);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_004c2925(param_1 + 0x90,0x55,*param_2,param_2[1]), iVar1 == 0)) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return in_EAX & 0xffffff00;
}


