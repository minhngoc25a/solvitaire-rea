// Function: FUN_0049a330
// Entry: 0049a330
// Size: 235 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0049a330(undefined4 param_1,short *param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  undefined1 *puVar6;
  
  psVar4 = param_2;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  puVar2 = (undefined4 *)FUN_0047f911(1,((int)psVar4 - (int)(param_2 + 1) >> 1) * 2 + 0x18);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00487380((int)param_3,0xc,0x5237ac);
  }
  else {
    *puVar2 = 0xffffffff;
    puVar2[1] = param_5;
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
      puVar2[4] = 0;
    }
    else {
      puVar2[4] = 2;
      psVar4 = param_2;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
        *(short *)((int)puVar2 + (0x12 - (int)param_2) + (int)psVar4) = sVar1;
      } while (sVar1 != 0);
    }
    iVar3 = FUN_00488020(param_3,puVar2);
    if (iVar3 == 0) {
      FUN_00487d30(param_3,0x49a420);
      FUN_00487d60(param_3,0x49a6c0);
      FUN_00487dc0(param_3,0x49a810);
      FUN_00487df0(param_3,0x49a600);
      FUN_00487e20(param_3,0x49a6a0);
      puVar6 = &LAB_0049a780;
      puVar5 = param_3;
      FUN_00487d90(param_3,0x49a780);
      iVar3 = FUN_00488040(param_3,puVar5,(uint)puVar6);
      return iVar3;
    }
  }
  return -0x1e;
}


