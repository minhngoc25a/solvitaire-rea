// Function: FUN_00416640
// Entry: 00416640
// Size: 293 bytes
// Thunk: false
// External: false


void __cdecl FUN_00416640(int param_1)

{
  undefined4 uVar1;
  errno_t eVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  undefined1 (*_Filename) [16];
  wchar_t *pwVar5;
  undefined1 (*local_18) [16];
  undefined *local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  _Filename = (undefined1 (*) [16])0x0;
  eVar2 = FID_conflict___dupenv_s((wchar_t **)&stack0xffffffe4,(size_t *)0x0,L"COMSPEC");
  if ((eVar2 != 0) && (eVar2 == 0x16)) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_1 == 0) {
    if (_Filename == (undefined1 (*) [16])0x0) {
      FUN_004247be((LPVOID)0x0);
    }
    else {
      __access_s((char *)_Filename,0);
      FUN_004247be(_Filename);
    }
    goto LAB_0041674d;
  }
  local_14 = &DAT_0050c068;
  local_10 = param_1;
  local_c = 0;
  if (_Filename != (undefined1 (*) [16])0x0) {
    local_18 = _Filename;
    p_Var3 = FUN_0042470e();
    uVar1 = *(undefined4 *)p_Var3;
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 0;
    iVar4 = FUN_00424bb1(0,local_18,(int *)&local_18,(int *)0x0);
    pwVar5 = 
    L"ﺃ瓿褄\xeb38茒ȸᡴ￨ß茀സ๴캃\xffff\xe875鿨à夀⣫\xe7e8ß褀匸䖍맬쁠P児襓\xec4d䣨ê＀\xe875\xf08b矨à茀ᓄ욋譟ﱍ㍞寍旨ð준參卓卓槨Ü찀卑赖⑄㌈僶ｖ⑴＜⑴栜က"
    ;
    p_Var3 = FUN_0042470e();
    if (iVar4 != -1) {
      *(undefined4 *)p_Var3 = uVar1;
LAB_00416717:
      FUN_004247be(pwVar5);
      goto LAB_0041674d;
    }
    if (*(int *)p_Var3 != 2) {
      pwVar5 = L"㢃琍茎ￎ痿\xe8e8\xe09f";
      p_Var3 = FUN_0042470e();
      if (*(int *)p_Var3 != 0xd) goto LAB_00416717;
    }
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = uVar1;
  }
  pwVar5 = (wchar_t *)0x0;
  local_18 = (undefined1 (*) [16])0x50c060;
  FUN_00425185(0,(undefined1 (*) [16])"cmd.exe",(undefined1 (*) [16])&local_18,
               (undefined1 (*) [16])0x0);
  FUN_004247be(pwVar5);
LAB_0041674d:
  local_10 = 0x416759;
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


