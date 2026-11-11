// Function: FUN_00486530
// Entry: 00486530
// Size: 387 bytes
// Thunk: false
// External: false


undefined1 __cdecl FUN_00486530(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte local_1;
  
  local_1 = 0;
  bVar5 = false;
  piVar2 = *(int **)(param_1 + 0x20);
  while (piVar2[2] != 1) {
    if (piVar2[2] == 2) {
LAB_0048662c:
      uVar7 = FUN_004863a0(piVar2);
      local_1 = local_1 | (byte)uVar7;
      if ((piVar2[1] == 2) || (piVar2[3] != 0)) {
        if (piVar2[0x12] <= piVar2[0x11]) {
          uVar7 = 0;
          goto LAB_0048667c;
        }
        if (*(int *)(*piVar2 + 4) == 0) {
LAB_0048669d:
          if ((local_1 == 0) && (!bVar5)) {
            return 0;
          }
          return 1;
        }
      }
      else {
        if ((uint)piVar2[0xd] < 0x100) {
          FUN_004862a0((int)piVar2);
        }
        piVar2[0xd] = 0x100;
        piVar2[0xe] = 0;
        uVar7 = (uint)(piVar2[1] == 4);
LAB_0048667c:
        FUN_004c95b0((int)piVar2,uVar7,(char)unaff_ESI);
        piVar2[2] = 1;
      }
    }
  }
  iVar3 = *piVar2;
  bVar6 = 0;
  iVar4 = *(int *)(iVar3 + 0x14);
  while ((iVar4 != 0 && (piVar2[0x14] < piVar2[0x13]))) {
    bVar6 = 1;
    **(undefined1 **)(iVar3 + 0x10) = *(undefined1 *)(piVar2[0x14] + piVar2[0xb]);
    piVar2[0x14] = piVar2[0x14] + 1;
    *(int *)(*piVar2 + 0x14) = *(int *)(*piVar2 + 0x14) + -1;
    *(int *)(*piVar2 + 0x10) = *(int *)(*piVar2 + 0x10) + 1;
    *(int *)(*piVar2 + 0x18) = *(int *)(*piVar2 + 0x18) + 1;
    if (*(int *)(*piVar2 + 0x18) == 0) {
      piVar1 = (int *)(*piVar2 + 0x1c);
      *piVar1 = *piVar1 + 1;
    }
    iVar3 = *piVar2;
    iVar4 = *(int *)(iVar3 + 0x14);
  }
  bVar5 = (bool)(bVar5 | bVar6);
  if ((piVar2[0x14] < piVar2[0x13]) ||
     (((piVar2[1] == 4 && (piVar2[3] == 0)) && ((0xff < (uint)piVar2[0xd] || (piVar2[0xe] < 1))))))
  goto LAB_0048669d;
  piVar2[0x11] = 0;
  piVar2[0x13] = 0;
  piVar2[0x14] = 0;
  piVar2[0x98] = -1;
  _memset(piVar2 + 0x16,0,0x100);
  piVar2[0x9b] = piVar2[0x9b] + 1;
  piVar2[2] = 2;
  if (((piVar2[1] == 3) && (piVar2[3] == 0)) && ((0xff < (uint)piVar2[0xd] || (piVar2[0xe] < 1))))
  goto LAB_0048669d;
  goto LAB_0048662c;
}


