// Function: FUN_0040b050
// Entry: 0040b050
// Size: 230 bytes
// Thunk: false
// External: false


float10 __cdecl FUN_0040b050(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_18;
  
  uVar1 = param_1 + 0x14;
  iVar2 = uVar1 + *(int *)(param_1 + 0x10) * 4;
  uVar3 = *(uint *)(iVar2 + -4);
  uVar6 = iVar2 - 4;
  uVar5 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  uVar5 = uVar5 ^ 0x1f;
  *param_2 = 0x20 - uVar5;
  cVar4 = (char)uVar5;
  if ((int)uVar5 < 0xb) {
    uVar5 = 0;
    if (uVar1 < uVar6) {
      uVar5 = *(uint *)(iVar2 + -8) >> (0xbU - cVar4 & 0x1f);
    }
    return (float10)(double)(CONCAT44(uVar3 >> (0xbU - cVar4 & 0x1f),
                                      uVar5 | uVar3 << (cVar4 + 0x15U & 0x1f)) | 0x3ff0000000000000)
    ;
  }
  uVar7 = 0;
  if (uVar1 < uVar6) {
    uVar7 = *(uint *)(iVar2 + -8);
    uVar6 = iVar2 - 8;
  }
  if (uVar5 - 0xb != 0) {
    local_18 = (byte)(uVar5 - 0xb);
    uVar5 = 0;
    if (uVar1 < uVar6) {
      uVar5 = *(uint *)(uVar6 - 4) >> (0x2bU - cVar4 & 0x1f);
    }
    return (float10)(double)CONCAT44(uVar3 << (local_18 & 0x1f) | 0x3ff00000 |
                                     uVar7 >> (0x2bU - cVar4 & 0x1f),
                                     uVar5 | uVar7 << (local_18 & 0x1f));
  }
  return (float10)(double)(CONCAT44(uVar3,uVar7) | 0x3ff0000000000000);
}


