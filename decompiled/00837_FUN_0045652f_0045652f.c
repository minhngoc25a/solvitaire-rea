// Function: FUN_0045652f
// Entry: 0045652f
// Size: 692 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_0045652f(__uint64 *param_1)

{
  int *piVar1;
  __uint64 _Var2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  undefined2 extraout_var;
  __uint64 *p_Var8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  
  bVar3 = FUN_00455838(param_1 + 0x89,*(int **)(param_1 + 1));
  if (bVar3) {
    pcVar11 = *(char **)((int)param_1 + 0xc);
    if (pcVar11 != (char *)0x0) {
      iVar7 = (int)param_1[0x8a] + 1;
      *(int *)(param_1 + 0x8a) = iVar7;
      do {
        if (iVar7 == 2) {
          return *(undefined4 *)((int)param_1 + 0x14);
        }
        *(undefined4 *)((int)param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        *(char **)((int)param_1 + 0xc) = pcVar11;
        *(char *)((int)param_1 + 0x2d) = cVar5;
        while ((cVar5 != '\0' && (-1 < *(int *)((int)param_1 + 0x14)))) {
          bVar4 = FUN_00455651(cVar5,(byte)param_1[3]);
          *(byte *)(param_1 + 3) = bVar4;
          if (7 < bVar4) {
            _Var2 = param_1[1];
            *(undefined1 *)((int)_Var2 + 0x1c) = 1;
            *(undefined4 *)((int)_Var2 + 0x18) = 0x16;
            goto LAB_00456564;
          }
          switch(bVar4) {
          case 0:
            piVar1 = *(int **)(param_1 + 1);
            *(undefined1 *)(param_1 + 7) = 0;
            if ((char)piVar1[5] == '\0') {
              FUN_0044ef90(piVar1);
            }
            cVar5 = *(char *)((int)param_1 + 0x2d);
            uVar6 = ___acrt_locale_get_ctype_array_value(*(int *)piVar1[3],(int)cVar5,0x8000);
            p_Var8 = param_1 + 0x89;
            if (CONCAT22(extraout_var,uVar6) != 0) {
              iVar7 = (int)*p_Var8;
              if (*(int *)(iVar7 + 8) == *(int *)(iVar7 + 4)) {
                if (*(char *)(iVar7 + 0xc) == '\0') {
                  *(undefined4 *)((int)param_1 + 0x14) = 0xffffffff;
                }
                else {
                  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
                }
              }
              else {
                *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
                *(char *)**(undefined4 **)p_Var8 = cVar5;
                **(int **)p_Var8 = **(int **)p_Var8 + 1;
              }
              cVar5 = **(char **)((int)param_1 + 0xc);
              *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
              *(char *)((int)param_1 + 0x2d) = cVar5;
              if (cVar5 == '\0') {
                _Var2 = param_1[1];
                *(undefined1 *)((int)_Var2 + 0x1c) = 1;
                *(undefined4 *)((int)_Var2 + 0x18) = 0x16;
                FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1)
                            );
                _Var2 = param_1[1];
                *(undefined1 *)((int)_Var2 + 0x1c) = 1;
                *(undefined4 *)((int)_Var2 + 0x18) = 0x16;
                FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1)
                            );
                return 0xffffffff;
              }
            }
            iVar7 = (int)*p_Var8;
            if (*(int *)(iVar7 + 8) == *(int *)(iVar7 + 4)) {
              if (*(char *)(iVar7 + 0xc) == '\0') {
                *(undefined4 *)((int)param_1 + 0x14) = 0xffffffff;
              }
              else {
                *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
              }
            }
            else {
              *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
              *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              *(char *)**(undefined4 **)p_Var8 = cVar5;
              **(int **)p_Var8 = **(int **)p_Var8 + 1;
            }
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
            if (cVar5 == ' ') {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 2;
            }
            else if (cVar5 == '#') {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x20;
            }
            else if (cVar5 == '+') {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 1;
            }
            else if (cVar5 == '-') {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
            }
            else if (cVar5 == '0') {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 8;
            }
            break;
          case 3:
            if (cVar5 != '*') {
              p_Var8 = param_1 + 4;
              goto LAB_00456730;
            }
            piVar1 = *(int **)(param_1 + 2);
            *(int **)(param_1 + 2) = piVar1 + 1;
            iVar7 = *piVar1;
            *(int *)(param_1 + 4) = iVar7;
            if (iVar7 < 0) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
              *(int *)(param_1 + 4) = -iVar7;
            }
LAB_00456755:
            cVar5 = '\x01';
            goto LAB_00456791;
          case 4:
            *(undefined4 *)((int)param_1 + 0x24) = 0;
            break;
          case 5:
            if (cVar5 == '*') {
              piVar1 = *(int **)(param_1 + 2);
              *(int **)(param_1 + 2) = piVar1 + 1;
              iVar7 = *piVar1;
              *(int *)((int)param_1 + 0x24) = iVar7;
              if (iVar7 < 0) {
                *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
              }
              goto LAB_00456755;
            }
            p_Var8 = (__uint64 *)((int)param_1 + 0x24);
LAB_00456730:
            uVar9 = FUN_00454d8b(param_1,(uint *)p_Var8);
            cVar5 = (char)uVar9;
            goto LAB_00456791;
          case 6:
            uVar10 = FUN_00456803(param_1);
            cVar5 = (char)uVar10;
            goto LAB_00456791;
          case 7:
            cVar5 = FUN_0045695c(param_1);
LAB_00456791:
            if (cVar5 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_00456577;
          }
          cVar5 = **(char **)((int)param_1 + 0xc);
          pcVar11 = *(char **)((int)param_1 + 0xc) + 1;
          *(char **)((int)param_1 + 0xc) = pcVar11;
          *(char *)((int)param_1 + 0x2d) = cVar5;
        }
        *(int *)(param_1 + 0x8a) = (int)param_1[0x8a] + 1;
        iVar7 = (int)param_1[0x8a];
      } while( true );
    }
    _Var2 = param_1[1];
    *(undefined1 *)((int)_Var2 + 0x1c) = 1;
    *(undefined4 *)((int)_Var2 + 0x18) = 0x16;
LAB_00456564:
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1));
  }
LAB_00456577:
  return 0xffffffff;
}


