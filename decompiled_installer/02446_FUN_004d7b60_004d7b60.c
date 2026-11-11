// Function: FUN_004d7b60
// Entry: 004d7b60
// Size: 322 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004d7b60(int param_1,uint *param_2,uint *param_3,uint param_4,undefined4 param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = (uint *)&DAT_005236fc;
  if (param_3 != (uint *)0x0) {
    puVar5 = param_3;
  }
  uVar7 = param_4 & 0xfffffffe;
  if ((param_4 & 1) == 0) {
    uVar7 = param_4;
  }
  if (param_6 == 2) {
    iVar6 = *(int *)(param_1 + 0xa4);
    puVar4 = puVar5;
    do {
      uVar8 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar8 != '\0');
    iVar2 = FUN_0048d320((int *)(iVar6 + 0x2c),puVar5,(int)puVar4 - ((int)puVar5 + 1),
                         *(int *)(iVar6 + 0x44));
    if ((iVar2 != 0) && (p_Var3 = FUN_0042470e(), *(int *)p_Var3 == 0xc)) {
      FUN_00487380(param_1,0xc,0x529398);
      return 0xffffffe2;
    }
    uVar8 = *(uint *)(iVar6 + 0x30);
    if (uVar7 < *(uint *)(iVar6 + 0x30)) {
      uVar8 = uVar7;
    }
    FUN_0044c490(param_2,*(uint **)(iVar6 + 0x2c),uVar8);
  }
  else {
    uVar8 = 0;
    puVar4 = puVar5;
    if ((short)*puVar5 != 0) {
      do {
        puVar4 = (uint *)((int)puVar4 + 2);
        uVar8 = uVar8 + 2;
      } while (*(short *)puVar4 != 0);
      if (uVar7 < uVar8) {
        uVar8 = uVar7;
      }
    }
    FUN_0044c490(param_2,puVar5,uVar8);
  }
  if (uVar8 != 0) {
    iVar6 = (uVar8 - 1 >> 1) + 1;
    do {
      uVar1 = CONCAT11((char)*param_2,*(undefined1 *)((int)param_2 + 1));
      if (uVar1 < 0x20) {
switchD_004d7c60_caseD_2a:
        *(undefined2 *)param_2 = 0x5f00;
      }
      else {
        switch(uVar1) {
        case 0x2a:
        case 0x2f:
        case 0x3a:
        case 0x3b:
        case 0x3f:
        case 0x5c:
          goto switchD_004d7c60_caseD_2a;
        }
      }
      param_2 = (uint *)((int)param_2 + 2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar7 - uVar8 != 0) {
    iVar6 = ((uVar7 - uVar8) - 1 >> 1) + 1;
    do {
      *(char *)param_2 = (char)((uint)param_5 >> 8);
      *(char *)((int)param_2 + 1) = (char)param_5;
      param_2 = (uint *)((int)param_2 + 2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((param_4 & 1) != 0) {
    *(undefined1 *)param_2 = 0;
  }
  return 0;
}


