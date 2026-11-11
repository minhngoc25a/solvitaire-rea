// Function: FUN_004558d2
// Entry: 004558d2
// Size: 493 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_004558d2(__uint64 *param_1)

{
  WCHAR WVar1;
  int *piVar2;
  __uint64 _Var3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  __uint64 *p_Var8;
  undefined4 uVar9;
  WCHAR *pWVar10;
  uint uVar11;
  
  bVar4 = FUN_00455838(param_1 + 0x89,*(int **)(param_1 + 1));
  if (bVar4) {
    pWVar10 = *(WCHAR **)((int)param_1 + 0xc);
    if (pWVar10 != (WCHAR *)0x0) {
      iVar7 = (int)param_1[0x8a] + 1;
      *(int *)(param_1 + 0x8a) = iVar7;
      do {
        if (iVar7 == 2) {
          return *(undefined4 *)((int)param_1 + 0x14);
        }
        *(undefined4 *)((int)param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        WVar1 = *pWVar10;
        pWVar10 = pWVar10 + 1;
        *(WCHAR **)((int)param_1 + 0xc) = pWVar10;
        *(WCHAR *)((int)param_1 + 0x2e) = WVar1;
        while ((WVar1 != L'\0' && (uVar11 = (uint)(ushort)WVar1, -1 < *(int *)((int)param_1 + 0x14))
               )) {
          bVar5 = FUN_004563f2(uVar11,(byte)param_1[3]);
          *(byte *)(param_1 + 3) = bVar5;
          if (7 < bVar5) {
            _Var3 = param_1[1];
            *(undefined1 *)((int)_Var3 + 0x1c) = 1;
            *(undefined4 *)((int)_Var3 + 0x18) = 0x16;
            goto LAB_00455902;
          }
          switch(bVar5) {
          case 0:
            *(undefined1 *)(param_1 + 7) = 1;
            FUN_00455794(param_1 + 0x89,WVar1,(int *)((int)param_1 + 0x14),*(int **)(param_1 + 1));
            break;
          case 1:
            *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
            *(undefined4 *)(param_1 + 4) = 0;
            *(undefined1 *)((int)param_1 + 0x2c) = 0;
            *(undefined4 *)((int)param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 5) = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            break;
          case 2:
            if (uVar11 == 0x20) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 2;
            }
            else if (uVar11 == 0x23) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x20;
            }
            else if (uVar11 == 0x2b) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 1;
            }
            else if (uVar11 == 0x2d) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
            }
            else if (uVar11 == 0x30) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 8;
            }
            break;
          case 3:
            if (WVar1 != L'*') {
              p_Var8 = param_1 + 4;
              goto LAB_00455a08;
            }
            piVar2 = *(int **)(param_1 + 2);
            *(int **)(param_1 + 2) = piVar2 + 1;
            iVar7 = *piVar2;
            *(int *)(param_1 + 4) = iVar7;
            if (iVar7 < 0) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
              *(int *)(param_1 + 4) = -iVar7;
            }
LAB_00455a2d:
            cVar6 = '\x01';
            goto LAB_00455a6b;
          case 4:
            *(undefined4 *)((int)param_1 + 0x24) = 0;
            break;
          case 5:
            if (WVar1 == L'*') {
              piVar2 = *(int **)(param_1 + 2);
              *(int **)(param_1 + 2) = piVar2 + 1;
              iVar7 = *piVar2;
              *(int *)((int)param_1 + 0x24) = iVar7;
              if (iVar7 < 0) {
                *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
              }
              goto LAB_00455a2d;
            }
            p_Var8 = (__uint64 *)((int)param_1 + 0x24);
LAB_00455a08:
            uVar9 = FUN_00455ae2(param_1,(uint *)p_Var8);
            cVar6 = (char)uVar9;
            goto LAB_00455a6b;
          case 6:
            uVar11 = FUN_00455b5c(param_1);
            cVar6 = (char)uVar11;
            goto LAB_00455a6b;
          case 7:
            cVar6 = FUN_00455ce6(param_1);
LAB_00455a6b:
            if (cVar6 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_00455915;
          }
          WVar1 = **(WCHAR **)((int)param_1 + 0xc);
          pWVar10 = *(WCHAR **)((int)param_1 + 0xc) + 1;
          *(WCHAR **)((int)param_1 + 0xc) = pWVar10;
          *(WCHAR *)((int)param_1 + 0x2e) = WVar1;
        }
        *(int *)(param_1 + 0x8a) = (int)param_1[0x8a] + 1;
        iVar7 = (int)param_1[0x8a];
      } while( true );
    }
    _Var3 = param_1[1];
    *(undefined1 *)((int)_Var3 + 0x1c) = 1;
    *(undefined4 *)((int)_Var3 + 0x18) = 0x16;
LAB_00455902:
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1));
  }
LAB_00455915:
  return 0xffffffff;
}


