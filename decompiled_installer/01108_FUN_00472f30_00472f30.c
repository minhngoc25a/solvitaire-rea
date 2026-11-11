// Function: FUN_00472f30
// Entry: 00472f30
// Size: 1025 bytes
// Thunk: false
// External: false


void __cdecl FUN_00472f30(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_3 + 400);
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar4 = *(int *)(param_3 + 0x18c);
  iVar5 = *param_1;
  if (bVar1 < 9) {
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    if (bVar1 != 0x10) {
      return;
    }
    if (iVar13 == 0) {
      return;
    }
  }
  bVar8 = (byte)*(undefined4 *)(param_3 + 0x184);
  switch((char)param_1[2]) {
  case '\0':
    if ((bVar1 == 2) && (iVar5 != 0)) {
      iVar6 = (iVar5 - 1U >> 2) + 1;
      pbVar12 = param_2;
      do {
        uVar10 = (uint)*pbVar12;
        uVar7 = uVar10 & 0xc0;
        uVar9 = uVar10 & 0xc;
        uVar11 = uVar10 & 3;
        uVar10 = uVar10 & 0x30;
        *pbVar12 = (byte)((byte)(*(byte *)(((uVar9 * 4 | uVar9) << 2 | uVar9 >> 2 | uVar9) + iVar4)
                                 & 0xcf | *(byte *)((((uVar11 * 4 | uVar11) << 2 | uVar11) << 2 |
                                                    uVar11) + iVar4) >> 2) >> 2 |
                         *(byte *)(((uVar10 >> 2 | uVar10) >> 2 | uVar10 * 4 | uVar10) + iVar4) &
                         0xc3) >> 2 |
                   *(byte *)((((uVar7 >> 2 | uVar7) >> 2 | uVar7) >> 2 | uVar7) + iVar4) & 0xc0;
        pbVar12 = pbVar12 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    cVar2 = *(char *)((int)param_1 + 9);
    if (cVar2 == '\x04') {
      if (iVar5 != 0) {
        iVar13 = (iVar5 - 1U >> 1) + 1;
        do {
          bVar1 = *param_2;
          uVar7 = bVar1 & 0xf;
          *param_2 = *(byte *)(((uint)(bVar1 >> 4) | bVar1 & 0xf0) + iVar4) & 0xf0 |
                     *(byte *)((uVar7 << 4 | uVar7) + iVar4) >> 4;
          iVar13 = iVar13 + -1;
          param_2 = param_2 + 1;
        } while (iVar13 != 0);
        return;
      }
    }
    else if (cVar2 == '\b') {
      if (iVar5 != 0) {
        do {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 1;
        } while (iVar5 != 0);
        return;
      }
    }
    else if (cVar2 == '\x10') {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[1] >> (bVar8 & 0x1f)) * 4) + (uint)*param_2 * 2);
        param_2[1] = (byte)uVar3;
        *param_2 = (byte)((ushort)uVar3 >> 8);
        param_2 = param_2 + 2;
      }
    }
    break;
  case '\x02':
    if (bVar1 == 8) {
      if (iVar5 != 0) {
        do {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2[1] = *(byte *)((uint)param_2[1] + iVar4);
          param_2[2] = *(byte *)((uint)param_2[2] + iVar4);
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 3;
        } while (iVar5 != 0);
        return;
      }
    }
    else if (iVar5 != 0) {
      do {
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[1] >> (bVar8 & 0x1f)) * 4) + (uint)*param_2 * 2);
        param_2[1] = (byte)uVar3;
        *param_2 = (byte)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[3] >> (bVar8 & 0x1f)) * 4) + (uint)param_2[2] * 2
                 );
        param_2[3] = (byte)uVar3;
        param_2[2] = (byte)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[5] >> (bVar8 & 0x1f)) * 4) + (uint)param_2[4] * 2
                 );
        param_2[5] = (byte)uVar3;
        param_2[4] = (byte)((ushort)uVar3 >> 8);
        iVar5 = iVar5 + -1;
        param_2 = param_2 + 6;
      } while (iVar5 != 0);
      return;
    }
    break;
  case '\x04':
    if (bVar1 == 8) {
      if (iVar5 != 0) {
        do {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 2;
        } while (iVar5 != 0);
        return;
      }
    }
    else if (iVar5 != 0) {
      do {
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[1] >> (bVar8 & 0x1f)) * 4) + (uint)*param_2 * 2);
        param_2[1] = (byte)uVar3;
        *param_2 = (byte)((ushort)uVar3 >> 8);
        iVar5 = iVar5 + -1;
        param_2 = param_2 + 4;
      } while (iVar5 != 0);
      return;
    }
    break;
  case '\x06':
    if (bVar1 == 8) {
      if (iVar5 != 0) {
        do {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2[1] = *(byte *)((uint)param_2[1] + iVar4);
          param_2[2] = *(byte *)((uint)param_2[2] + iVar4);
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 4;
        } while (iVar5 != 0);
        return;
      }
    }
    else if (iVar5 != 0) {
      do {
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[1] >> (bVar8 & 0x1f)) * 4) + (uint)*param_2 * 2);
        param_2[1] = (byte)uVar3;
        *param_2 = (byte)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[3] >> (bVar8 & 0x1f)) * 4) + (uint)param_2[2] * 2
                 );
        param_2[3] = (byte)uVar3;
        param_2[2] = (byte)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)
                 (*(int *)(iVar13 + (uint)(param_2[5] >> (bVar8 & 0x1f)) * 4) + (uint)param_2[4] * 2
                 );
        param_2[5] = (byte)uVar3;
        param_2[4] = (byte)((ushort)uVar3 >> 8);
        iVar5 = iVar5 + -1;
        param_2 = param_2 + 8;
      } while (iVar5 != 0);
      return;
    }
  }
  return;
}


