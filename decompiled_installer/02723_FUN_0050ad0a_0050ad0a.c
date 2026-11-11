// Function: FUN_0050ad0a
// Entry: 0050ad0a
// Size: 317 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0050ad0a(int param_1)

{
  int *piVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  int *piVar4;
  char *pcVar5;
  uint local_10;
  int *local_c;
  uint local_8;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else if ((param_1 == 2) || (param_1 == 1)) {
    ___acrt_initialize_multibyte();
    FUN_004c5f96((HMODULE)0x0,&DAT_005450e0,0x104);
    _DAT_00545200 = &DAT_005450e0;
    if ((DAT_00545210 == (char *)0x0) || (pcVar5 = DAT_00545210, *DAT_00545210 == '\0')) {
      pcVar5 = &DAT_005450e0;
    }
    local_8 = 0;
    local_10 = 0;
    FUN_0050ae47(pcVar5,(undefined4 *)0x0,(char *)0x0,(int *)&local_8,(int *)&local_10);
    piVar4 = FUN_0050acbb(local_8,local_10,1);
    if (piVar4 == (int *)0x0) {
      p_Var3 = FUN_0042470e();
      iVar2 = 0xc;
      *(undefined4 *)p_Var3 = 0xc;
    }
    else {
      FUN_0050ae47(pcVar5,piVar4,(char *)(piVar4 + local_8),(int *)&local_8,(int *)&local_10);
      if (param_1 != 1) {
        local_c = (int *)0x0;
        iVar2 = FUN_0050b22f(piVar4,&local_c);
        piVar1 = local_c;
        if (iVar2 == 0) {
          _DAT_00545204 = 0;
          iVar2 = *local_c;
          while (iVar2 != 0) {
            local_c = local_c + 1;
            _DAT_00545204 = _DAT_00545204 + 1;
            iVar2 = *local_c;
          }
          local_c = (int *)0x0;
          _DAT_00545208 = piVar1;
          FUN_004247be((LPVOID)0x0);
          iVar2 = 0;
        }
        else {
          FUN_004247be(local_c);
        }
        local_c = (int *)0x0;
        FUN_004247be(piVar4);
        return iVar2;
      }
      _DAT_00545204 = local_8 - 1;
      iVar2 = 0;
      _DAT_00545208 = piVar4;
    }
    FUN_004247be((LPVOID)0x0);
  }
  else {
    p_Var3 = FUN_0042470e();
    iVar2 = 0x16;
    *(undefined4 *)p_Var3 = 0x16;
    FUN_004243be();
  }
  return iVar2;
}


