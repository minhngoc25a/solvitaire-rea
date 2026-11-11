// Function: FUN_004d1030
// Entry: 004d1030
// Size: 199 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d1030(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x1450);
  iVar3 = *(int *)(param_1 + 0xb5c + param_3 * 4);
  iVar6 = param_3 * 2;
  if (iVar5 < iVar6) {
    *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar3;
    return;
  }
  do {
    iVar7 = iVar6;
    if (iVar6 < iVar5) {
      iVar5 = *(int *)(param_1 + 0xb60 + iVar6 * 4);
      iVar4 = *(int *)(param_1 + 0xb5c + iVar6 * 4);
      uVar1 = *(ushort *)(param_2 + iVar5 * 4);
      uVar2 = *(ushort *)(param_2 + iVar4 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1458 + param_1) <= *(byte *)(param_1 + 0x1458 + iVar4))))) {
        iVar7 = iVar6 + 1;
      }
    }
    iVar5 = *(int *)(param_1 + 0xb5c + iVar7 * 4);
    uVar1 = *(ushort *)(param_2 + iVar3 * 4);
    uVar2 = *(ushort *)(param_2 + iVar5 * 4);
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(param_1 + 0x1458 + iVar3) <= *(byte *)(iVar5 + 0x1458 + param_1))))) break;
    *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar5;
    iVar5 = *(int *)(param_1 + 0x1450);
    iVar6 = iVar7 * 2;
    param_3 = iVar7;
  } while (iVar6 <= iVar5);
  *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar3;
  return;
}


