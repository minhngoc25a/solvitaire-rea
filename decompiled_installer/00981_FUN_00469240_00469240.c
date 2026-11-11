// Function: FUN_00469240
// Entry: 00469240
// Size: 528 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_00469240(int param_1,int param_2,undefined4 param_3,SIZE_T *param_4,uint param_5,uint param_6,
            undefined4 param_7)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piStack_5c;
  int aiStack_58 [22];
  
  if (*(int *)(param_2 + 0x28) != 0) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    FUN_0047d191(*(LPVOID *)(param_2 + 0x24));
    *(undefined4 *)(param_2 + 0x24) = 0;
    (**(code **)(param_2 + 0x34))(param_1,param_2);
  }
  puVar4 = (undefined4 *)FUN_0047f911(1,0x78);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_00487380(param_1,0xc,0x525f40);
    return 0xffffffe2;
  }
  uVar7 = 9;
  if ((int)param_5 < 10) {
    uVar7 = param_5;
  }
  puVar1 = puVar4 + 0x16;
  uVar5 = FUN_0049d830(aiStack_58,uVar7);
  if ((char)uVar5 != '\0') {
    FUN_0047d191(puVar4);
    pcVar8 = "Internal error initializing compression library";
    uVar5 = 0xc;
    goto LAB_0046939a;
  }
  *puVar1 = param_6;
  puVar4[0x17] = param_7;
  puVar4[0x18] = aiStack_58;
  puVar4[0x1a] = 0xffffffff;
  puVar4[0x1b] = 0xffffffff;
  iVar6 = FUN_0049d730(param_4,(int *)puVar1);
  if (iVar6 == 0) {
    if (*param_4 != 0) {
      iVar6 = FUN_00482949(*param_4);
      *piStack_5c = iVar6;
      if (iVar6 == 0) {
        FUN_0047d191(puVar4);
        *(undefined4 *)(param_2 + 0x2c) = 0;
        FUN_00487380(param_1,0xc,0x5238b4);
        return 0xffffffe2;
      }
      iVar6 = FUN_0049d7b0((int *)puVar1,iVar6);
      if (iVar6 != 0) {
        FUN_0047d191(puVar4);
        pcVar8 = "lzma_properties_encode failed";
        goto LAB_00469398;
      }
    }
    uVar3 = _UNK_0050d09c;
    uVar2 = _UNK_0050d098;
    uVar5 = _UNK_0050d094;
    *puVar4 = _DAT_0050d090;
    puVar4[1] = uVar5;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    uVar3 = _UNK_0050d0ac;
    uVar2 = _UNK_0050d0a8;
    uVar5 = _UNK_0050d0a4;
    puVar4[4] = _DAT_0050d0a0;
    puVar4[5] = uVar5;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    uVar3 = _UNK_0050d0bc;
    uVar2 = _UNK_0050d0b8;
    uVar5 = _UNK_0050d0b4;
    puVar4[8] = _DAT_0050d0b0;
    puVar4[9] = uVar5;
    puVar4[10] = uVar2;
    puVar4[0xb] = uVar3;
    uVar3 = _UNK_0050d0cc;
    uVar2 = _UNK_0050d0c8;
    uVar5 = _UNK_0050d0c4;
    puVar4[0xc] = _DAT_0050d0c0;
    puVar4[0xd] = uVar5;
    puVar4[0xe] = uVar2;
    puVar4[0xf] = uVar3;
    uVar3 = _UNK_0050d0dc;
    uVar2 = _UNK_0050d0d8;
    uVar5 = _UNK_0050d0d4;
    puVar4[0x10] = _DAT_0050d0d0;
    puVar4[0x11] = uVar5;
    puVar4[0x12] = uVar2;
    puVar4[0x13] = uVar3;
    *(undefined8 *)(puVar4 + 0x14) = DAT_0050d0e0;
    iVar6 = FUN_0049d6d0((int)puVar4,puVar1);
    if (iVar6 == 0) {
      *(undefined4 **)(param_2 + 0x2c) = puVar4;
      *(undefined4 *)(param_2 + 0x28) = 1;
      *(undefined1 **)(param_2 + 0x30) = &LAB_00467df0;
      *(undefined1 **)(param_2 + 0x34) = &LAB_00467ee0;
      return 0;
    }
    if (iVar6 == 5) {
      FUN_0047d191(puVar4);
      pcVar8 = "Internal error initializing compression library: Cannot allocate memory";
      uVar5 = 0xc;
      goto LAB_0046939a;
    }
    FUN_0047d191(puVar4);
    pcVar8 = "Internal error initializing compression library: It\'s a bug in liblzma";
  }
  else {
    FUN_0047d191(puVar4);
    pcVar8 = "lzma_properties_size failed";
  }
LAB_00469398:
  uVar5 = 0xffffffff;
LAB_0046939a:
  *(undefined4 *)(param_2 + 0x2c) = 0;
  FUN_00487380(param_1,uVar5,(int)pcVar8);
  return 0xffffffe2;
}


