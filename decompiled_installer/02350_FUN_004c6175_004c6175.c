// Function: FUN_004c6175
// Entry: 004c6175
// Size: 137 bytes
// Thunk: false
// External: false


int __cdecl FUN_004c6175(LPCWSTR param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  long unaff_EBX;
  ulong unaff_ESI;
  wchar_t *pwVar4;
  
  BVar2 = IsDebuggerPresent();
  if (BVar2 != 0) {
    if (param_1 != (LPCWSTR)0x0) {
      OutputDebugStringW(param_1);
    }
    iVar3 = FUN_004c5535();
    if (iVar3 != 1) {
      return 4;
    }
  }
  iVar3 = FUN_004c54f7();
  if ((iVar3 == 2) && (cVar1 = ___acrt_can_show_message_box(), cVar1 != '\0')) {
    cVar1 = FUN_00481aa1();
    if (cVar1 == '\0') {
      param_3 = param_3 | 0x200000;
      pwVar4 = (wchar_t *)0x0;
    }
    else {
      pwVar4 = ___acrt_get_parent_window(unaff_ESI,unaff_EBX);
    }
    iVar3 = FUN_004818de(pwVar4,param_1,param_2,param_3);
    return iVar3;
  }
  return (BVar2 != 0) + 3;
}


