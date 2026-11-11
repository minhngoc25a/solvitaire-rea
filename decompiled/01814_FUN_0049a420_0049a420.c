// Function: FUN_0049a420
// Entry: 0049a420
// Size: 474 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049a420(uint *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  LPWSTR pWVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EDI;
  uint uVar7;
  uint local_30;
  ushort local_2c;
  uint local_2a;
  
  FUN_00487360((int)param_1);
  if (param_2[4] == 0) {
    uVar7 = 0;
    FUN_004e73ad(0,0x8000);
  }
  else if (param_2[4] == 1) {
    uVar7 = FUN_00497770((byte *)(param_2 + 5),0x8000,unaff_EDI);
    guard_check_icall();
    if ((int)uVar7 < 0) {
      p_Var3 = FUN_0042470e();
      pcVar6 = "Failed to open \'%s\'";
LAB_0049a4c6:
      FUN_00487380((int)param_1,*(undefined4 *)p_Var3,(int)pcVar6);
      return 0xffffffe2;
    }
  }
  else {
    uVar7 = FUN_004d28a6((wchar_t *)(param_2 + 5),0x8000,unaff_EDI);
    if ((int)uVar7 < 0) {
      p_Var3 = FUN_0042470e();
      if ((*(int *)p_Var3 == 2) &&
         (pWVar4 = FUN_00497ae0((LPCWSTR)(param_2 + 5)), pWVar4 != (LPWSTR)0x0)) {
        uVar7 = FUN_004d28a6(pWVar4,0x8000,unaff_EDI);
        FUN_0047d191(pWVar4);
        if (-1 < (int)uVar7) goto LAB_0049a457;
      }
      p_Var3 = FUN_0042470e();
      pcVar6 = "Failed to open \'%S\'";
      goto LAB_0049a4c6;
    }
  }
LAB_0049a457:
  iVar2 = FUN_00497700(uVar7,&local_30);
  if (iVar2 == 0) {
    if ((local_2a & 0xf000) == 0x8000) {
      FUN_00488520(param_1,local_30,0,(uint)local_2c,0);
      uVar5 = 0x10000;
      bVar1 = true;
      if (0x10000 < param_2[1]) {
        do {
          if (0x3ffffff < uVar5) break;
          uVar5 = uVar5 * 2;
        } while (uVar5 < param_2[1]);
      }
      param_2[1] = uVar5;
    }
    else {
      bVar1 = false;
    }
    uVar5 = FUN_00482949(param_2[1]);
    if (uVar5 != 0) {
      param_2[2] = uVar5;
      *param_2 = uVar7;
      *(undefined2 *)(param_2 + 3) = (undefined2)local_2a;
      if (bVar1) {
        *(undefined1 *)((int)param_2 + 0xe) = 1;
      }
      return 0;
    }
    FUN_00487380((int)param_1,0xc,0x5237ac);
  }
  else {
    uVar5 = param_2[4];
    p_Var3 = FUN_0042470e();
    pcVar6 = "Can\'t stat \'%s\'";
    if (uVar5 == 2) {
      pcVar6 = "Can\'t stat \'%S\'";
    }
    FUN_00487380((int)param_1,*(undefined4 *)p_Var3,(int)pcVar6);
  }
  if ((uVar7 != 0xffffffff) && (uVar7 != 0)) {
    FUN_0049d22f(uVar7);
    return 0xffffffe2;
  }
  return 0xffffffe2;
}


