// Function: FUN_00454adb
// Entry: 00454adb
// Size: 654 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_00454adb(__uint64 *param_1)

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
  int *local_c;
  
  bVar3 = FUN_00454a3d(param_1 + 0x89,*(int **)(param_1 + 1));
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
            goto LAB_00454b11;
          }
          switch(bVar4) {
          case 0:
            piVar1 = *(int **)(param_1 + 1);
            *(undefined1 *)(param_1 + 7) = 0;
            local_c = piVar1;
            if ((char)piVar1[5] == '\0') {
              FUN_0044ef90(piVar1);
              local_c = *(int **)(param_1 + 1);
            }
            bVar4 = *(byte *)((int)param_1 + 0x2d);
            uVar6 = ___acrt_locale_get_ctype_array_value(*(int *)piVar1[3],(int)(char)bVar4,0x8000);
            if (CONCAT22(extraout_var,uVar6) != 0) {
              FUN_0045499c(param_1 + 0x89,bVar4,(int *)((int)param_1 + 0x14),local_c);
              bVar4 = **(byte **)((int)param_1 + 0xc);
              *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
              *(byte *)((int)param_1 + 0x2d) = bVar4;
              if (bVar4 == 0) {
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
            FUN_0045499c(param_1 + 0x89,bVar4,(int *)((int)param_1 + 0x14),*(int **)(param_1 + 1));
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
              goto LAB_00454c7a;
            }
            piVar1 = *(int **)(param_1 + 2);
            *(int **)(param_1 + 2) = piVar1 + 1;
            iVar7 = *piVar1;
            *(int *)(param_1 + 4) = iVar7;
            if (iVar7 < 0) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
              *(int *)(param_1 + 4) = -iVar7;
            }
LAB_00454c9f:
            cVar5 = '\x01';
            goto LAB_00454cdb;
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
              goto LAB_00454c9f;
            }
            p_Var8 = (__uint64 *)((int)param_1 + 0x24);
LAB_00454c7a:
            uVar9 = FUN_00454d8b(param_1,(uint *)p_Var8);
            cVar5 = (char)uVar9;
            goto LAB_00454cdb;
          case 6:
            uVar10 = FUN_00454e03(param_1);
            cVar5 = (char)uVar10;
            goto LAB_00454cdb;
          case 7:
            cVar5 = FUN_00454f5c(param_1);
LAB_00454cdb:
            if (cVar5 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_00454b24;
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
LAB_00454b11:
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1));
  }
LAB_00454b24:
  return 0xffffffff;
}


