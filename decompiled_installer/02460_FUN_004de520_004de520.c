// Function: FUN_004de520
// Entry: 004de520
// Size: 130 bytes
// Thunk: false
// External: false


int __cdecl FUN_004de520(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  puVar7 = (undefined1 *)FUN_00507f00((uint *)&stack0x00000008);
  uVar8 = 0;
  cVar2 = puVar7[0x10];
  iVar1 = *(int *)(puVar7 + 0x20);
  uVar3 = *puVar7;
  uVar4 = puVar7[4];
  uVar5 = puVar7[8];
  uVar6 = puVar7[0xc];
  *param_1 = puVar7[0x14];
  param_1[1] = cVar2 + '\x01';
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  param_1[4] = uVar4;
  param_1[5] = uVar3;
  if (iVar1 != 0) {
    uVar8 = 0xe10;
  }
  param_1[6] = (char)(uVar8 / 900);
  return uVar8 * -0x6e5d4c3b;
}


