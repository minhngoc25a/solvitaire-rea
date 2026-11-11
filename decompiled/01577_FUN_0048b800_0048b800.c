// Function: FUN_0048b800
// Entry: 0048b800
// Size: 655 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0048b800(undefined4 *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  SIZE_T unaff_EBX;
  undefined4 *puVar9;
  uint *unaff_EDI;
  undefined4 *puVar10;
  
  uVar1 = *param_1;
  puVar6 = (undefined4 *)FUN_0047f911(1,0x328);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar6 = uVar1;
  puVar6[200] = 0;
  puVar9 = param_1 + 4;
  puVar10 = puVar6 + 4;
  for (iVar8 = 0x22; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar6[0x34] = param_1[0x34];
  puVar6[0x35] = param_1[0x35];
  FUN_0048d7f0(puVar6 + 0x27,param_1 + 0x27);
  FUN_0048d7f0(puVar6 + 0x36,param_1 + 0x36);
  FUN_0048d7f0(puVar6 + 0x43,param_1 + 0x43);
  FUN_0048d7f0(puVar6 + 0x50,param_1 + 0x50);
  FUN_0048d7f0(puVar6 + 0x77,param_1 + 0x77);
  FUN_0048d7f0(puVar6 + 0x5d,param_1 + 0x5d);
  puVar6[0x26] = param_1[0x26];
  FUN_0048d7f0(puVar6 + 0x6a,param_1 + 0x6a);
  puVar6[200] = param_1[200];
  *(undefined1 *)(puVar6 + 0x84) = *(undefined1 *)(param_1 + 0x84);
  uVar1 = param_1[0x88];
  uVar4 = param_1[0x89];
  uVar5 = param_1[0x8a];
  puVar6[0x87] = param_1[0x87];
  puVar6[0x88] = uVar1;
  puVar6[0x89] = uVar4;
  puVar6[0x8a] = uVar5;
  uVar1 = param_1[0x8c];
  uVar4 = param_1[0x8d];
  uVar5 = param_1[0x8e];
  puVar6[0x8b] = param_1[0x8b];
  puVar6[0x8c] = uVar1;
  puVar6[0x8d] = uVar4;
  puVar6[0x8e] = uVar5;
  puVar6[0x8f] = param_1[0x8f];
  uVar1 = param_1[0x91];
  uVar4 = param_1[0x92];
  uVar5 = param_1[0x93];
  puVar6[0x90] = param_1[0x90];
  puVar6[0x91] = uVar1;
  puVar6[0x92] = uVar4;
  puVar6[0x93] = uVar5;
  puVar6[0x94] = param_1[0x94];
  uVar1 = param_1[0x96];
  uVar4 = param_1[0x97];
  uVar5 = param_1[0x98];
  puVar6[0x95] = param_1[0x95];
  puVar6[0x96] = uVar1;
  puVar6[0x97] = uVar4;
  puVar6[0x98] = uVar5;
  uVar1 = param_1[0x9a];
  uVar4 = param_1[0x9b];
  uVar5 = param_1[0x9c];
  puVar6[0x99] = param_1[0x99];
  puVar6[0x9a] = uVar1;
  puVar6[0x9b] = uVar4;
  puVar6[0x9c] = uVar5;
  uVar1 = param_1[0x9e];
  uVar4 = param_1[0x9f];
  uVar5 = param_1[0xa0];
  puVar6[0x9d] = param_1[0x9d];
  puVar6[0x9e] = uVar1;
  puVar6[0x9f] = uVar4;
  puVar6[0xa0] = uVar5;
  uVar1 = param_1[0xa2];
  uVar4 = param_1[0xa3];
  uVar5 = param_1[0xa4];
  puVar6[0xa1] = param_1[0xa1];
  puVar6[0xa2] = uVar1;
  puVar6[0xa3] = uVar4;
  puVar6[0xa4] = uVar5;
  uVar1 = param_1[0xa6];
  uVar4 = param_1[0xa7];
  uVar5 = param_1[0xa8];
  puVar6[0xa5] = param_1[0xa5];
  puVar6[0xa6] = uVar1;
  puVar6[0xa7] = uVar4;
  puVar6[0xa8] = uVar5;
  uVar1 = param_1[0xaa];
  uVar4 = param_1[0xab];
  uVar5 = param_1[0xac];
  puVar6[0xa9] = param_1[0xa9];
  puVar6[0xaa] = uVar1;
  puVar6[0xab] = uVar4;
  puVar6[0xac] = uVar5;
  uVar1 = param_1[0xae];
  uVar4 = param_1[0xaf];
  uVar5 = param_1[0xb0];
  puVar6[0xad] = param_1[0xad];
  puVar6[0xae] = uVar1;
  puVar6[0xaf] = uVar4;
  puVar6[0xb0] = uVar5;
  uVar1 = param_1[0xb2];
  uVar4 = param_1[0xb3];
  uVar5 = param_1[0xb4];
  puVar6[0xb1] = param_1[0xb1];
  puVar6[0xb2] = uVar1;
  puVar6[0xb3] = uVar4;
  puVar6[0xb4] = uVar5;
  uVar1 = param_1[0xb6];
  uVar4 = param_1[0xb7];
  uVar5 = param_1[0xb8];
  puVar6[0xb5] = param_1[0xb5];
  puVar6[0xb6] = uVar1;
  puVar6[0xb7] = uVar4;
  puVar6[0xb8] = uVar5;
  FUN_00491fb0((undefined2 *)(puVar6 + 0xb9),(undefined2 *)(param_1 + 0xb9));
  puVar2 = (uint *)param_1[0x85];
  SVar3 = param_1[0x86];
  FUN_0047d191((LPVOID)puVar6[0x85]);
  if ((puVar2 == (uint *)0x0) || (SVar3 == 0)) {
    puVar6[0x85] = 0;
    puVar6[0x86] = 0;
  }
  else {
    puVar6[0x86] = SVar3;
    puVar7 = (uint *)FUN_00482949(SVar3);
    puVar6[0x85] = puVar7;
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0047d96c();
    }
    FUN_0044c490(puVar7,puVar2,SVar3);
  }
  for (puVar9 = (undefined4 *)param_1[0xc0]; puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)*puVar9) {
    FUN_00493970(puVar6,puVar9[1],puVar9[2],(char *)puVar9[3],unaff_EDI,unaff_EBX);
  }
  for (puVar9 = (undefined4 *)param_1[0xc2]; puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)*puVar9) {
    FUN_00493af0((int)puVar6,puVar9[2],puVar9[3],puVar9[4],puVar9[5]);
  }
  return puVar6;
}


