// Function: FUN_00496e00
// Entry: 00496e00
// Size: 837 bytes
// Thunk: false
// External: false


char __cdecl FUN_00496e00(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  bool bVar11;
  
  do {
    uVar3 = param_1[0x1d];
    if (uVar3 < 0x103) {
      FUN_00496bd0(param_1);
      uVar3 = param_1[0x1d];
      if ((uVar3 < 0x103) && (param_2 == 0)) {
        return '\0';
      }
      piVar9 = param_1 + 0x1b;
      if (uVar3 == 0) {
        param_1[0x5ad] = 0;
        if (param_2 == 4) {
          iVar8 = param_1[0x17];
          if (iVar8 < 0) {
            puVar5 = (uint *)0x0;
          }
          else {
            puVar5 = (uint *)(param_1[0xe] + iVar8);
          }
          FUN_004d09b0(param_1,puVar5,*piVar9 - iVar8,1);
          iVar8 = *param_1;
          param_1[0x17] = *piVar9;
          iVar2 = *(int *)(iVar8 + 0x1c);
          thunk_FUN_004d2390(iVar2);
          uVar3 = *(uint *)(iVar8 + 0x10);
          if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar8 + 0x10)) {
            uVar3 = *(uint *)(iVar2 + 0x14);
          }
          if (uVar3 != 0) {
            FUN_0044c490(*(uint **)(iVar8 + 0xc),*(uint **)(iVar2 + 0x10),uVar3);
            *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + uVar3;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + uVar3;
            *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + uVar3;
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - uVar3;
            piVar9 = (int *)(iVar2 + 0x14);
            *piVar9 = *piVar9 - uVar3;
            if (*piVar9 == 0) {
              *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
            }
          }
          return (*(int *)(*param_1 + 0x10) != 0) + '\x02';
        }
        if (param_1[0x5a8] != 0) {
          iVar8 = param_1[0x17];
          if (iVar8 < 0) {
            puVar5 = (uint *)0x0;
          }
          else {
            puVar5 = (uint *)(param_1[0xe] + iVar8);
          }
          FUN_004d09b0(param_1,puVar5,*piVar9 - iVar8,0);
          iVar8 = *param_1;
          param_1[0x17] = *piVar9;
          iVar2 = *(int *)(iVar8 + 0x1c);
          thunk_FUN_004d2390(iVar2);
          uVar3 = *(uint *)(iVar8 + 0x10);
          if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar8 + 0x10)) {
            uVar3 = *(uint *)(iVar2 + 0x14);
          }
          if (uVar3 != 0) {
            FUN_0044c490(*(uint **)(iVar8 + 0xc),*(uint **)(iVar2 + 0x10),uVar3);
            *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + uVar3;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + uVar3;
            *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + uVar3;
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - uVar3;
            piVar9 = (int *)(iVar2 + 0x14);
            *piVar9 = *piVar9 - uVar3;
            if (*piVar9 == 0) {
              *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
            }
          }
          if (*(int *)(*param_1 + 0x10) == 0) {
            return '\0';
          }
        }
        return '\x01';
      }
    }
    pcVar7 = (char *)0x0;
    param_1[0x18] = 0;
    if ((2 < uVar3) && (param_1[0x1b] != 0)) {
      pcVar10 = (char *)(param_1[0xe] + param_1[0x1b]);
      cVar1 = pcVar10[-1];
      if ((cVar1 == *pcVar10) && ((cVar1 == pcVar10[1] && (cVar1 == pcVar10[2])))) {
        pcVar4 = pcVar10 + 2;
        do {
          pcVar7 = pcVar4 + 1;
          if (((((cVar1 != *pcVar7) || (pcVar7 = pcVar4 + 2, cVar1 != *pcVar7)) ||
               (pcVar7 = pcVar4 + 3, cVar1 != *pcVar7)) ||
              ((pcVar7 = pcVar4 + 4, cVar1 != *pcVar7 || (pcVar7 = pcVar4 + 5, cVar1 != *pcVar7))))
             || ((pcVar7 = pcVar4 + 6, cVar1 != *pcVar7 ||
                 ((pcVar7 = pcVar4 + 7, cVar1 != *pcVar7 || (pcVar7 = pcVar4 + 8, cVar1 != *pcVar7))
                 )))) break;
          pcVar4 = pcVar7;
        } while (pcVar7 < pcVar10 + 0x102);
        pcVar7 = pcVar7 + (0x102 - (int)(pcVar10 + 0x102));
        pcVar10 = (char *)param_1[0x1d];
        param_1[0x18] = (int)pcVar7;
        if (pcVar10 < pcVar7) {
          param_1[0x18] = (int)pcVar10;
          pcVar7 = pcVar10;
        }
      }
    }
    piVar9 = param_1 + 0x1b;
    if (pcVar7 < (char *)0x3) {
      bVar6 = *(byte *)(*piVar9 + param_1[0xe]);
      *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 0;
      iVar8 = param_1[0x5a8];
      param_1[0x5a8] = iVar8 + 1;
      *(undefined1 *)(iVar8 + 1 + param_1[0x5a6]) = 0;
      iVar8 = param_1[0x5a8];
      param_1[0x5a8] = iVar8 + 1;
      *(byte *)(iVar8 + 1 + param_1[0x5a6]) = bVar6;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar6 + 0x25) = (short)param_1[bVar6 + 0x25] + 1;
      bVar11 = param_1[0x5a8] == param_1[0x5a9];
      param_1[0x1d] = param_1[0x1d] + -1;
      *piVar9 = *piVar9 + 1;
      iVar8 = *piVar9;
    }
    else {
      bVar6 = (char)pcVar7 - 3;
      *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 1;
      iVar8 = param_1[0x5a8];
      param_1[0x5a8] = iVar8 + 1;
      *(undefined1 *)(iVar8 + 1 + param_1[0x5a6]) = 0;
      iVar8 = param_1[0x5a8];
      param_1[0x5a8] = iVar8 + 1;
      *(byte *)(iVar8 + 1 + param_1[0x5a6]) = bVar6;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&DAT_00520818)[bVar6] + 0x126) =
           (short)param_1[(byte)(&DAT_00520818)[bVar6] + 0x126] + 1;
      *(short *)(param_1 + DAT_00520918 + 0x262) = (short)param_1[DAT_00520918 + 0x262] + 1;
      bVar11 = param_1[0x5a8] == param_1[0x5a9];
      param_1[0x1d] = param_1[0x1d] - param_1[0x18];
      iVar8 = *piVar9 + param_1[0x18];
      *piVar9 = iVar8;
      param_1[0x18] = 0;
    }
    if (bVar11) {
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)(param_1[0xe] + iVar2);
      }
      FUN_004d09b0(param_1,puVar5,iVar8 - iVar2,0);
      iVar8 = *param_1;
      param_1[0x17] = *piVar9;
      iVar2 = *(int *)(iVar8 + 0x1c);
      thunk_FUN_004d2390(iVar2);
      uVar3 = *(uint *)(iVar8 + 0x10);
      if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar8 + 0x10)) {
        uVar3 = *(uint *)(iVar2 + 0x14);
      }
      if (uVar3 != 0) {
        FUN_0044c490(*(uint **)(iVar8 + 0xc),*(uint **)(iVar2 + 0x10),uVar3);
        *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + uVar3;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + uVar3;
        *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + uVar3;
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - uVar3;
        piVar9 = (int *)(iVar2 + 0x14);
        *piVar9 = *piVar9 - uVar3;
        if (*piVar9 == 0) {
          *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
        }
      }
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}


