// Function: FUN_0047f38d
// Entry: 0047f38d
// Size: 111 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0047f38d(int param_1,int *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((param_2[2] == 0) && (param_2[1] == 4)) &&
     (in_EAX = FUN_0047f2dc(*param_2,4), (char)in_EAX != '\0')) {
    iVar1 = FUN_004c2832((short *)(param_1 + 0x120),0x55,L"-",1);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_004c2832((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]),
       iVar1 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}


