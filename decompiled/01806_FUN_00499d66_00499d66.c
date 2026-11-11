// Function: FUN_00499d66
// Entry: 00499d66
// Size: 184 bytes
// Thunk: false
// External: false


void __cdecl FUN_00499d66(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  pwVar2 = _wcspbrk(param_1,L"./\\");
  if (pwVar2 != (wchar_t *)0x0) {
    local_214 = (wchar_t *)0x0;
    pwVar2 = call_wfullpath(local_210,param_1,0x104,&local_214);
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar4 = pwVar2;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      if (((int)pwVar4 - (int)(pwVar2 + 1) >> 1 == 3) ||
         (uVar3 = FUN_00499cb8(pwVar2), (char)uVar3 != '\0')) {
        GetDriveTypeW(param_1);
        FUN_0047d191(local_214);
        goto LAB_00499e11;
      }
    }
    FUN_0047d191(local_214);
  }
LAB_00499e11:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


