// Function: FUN_0047681c
// Entry: 0047681c
// Size: 1878 bytes
// Thunk: false
// External: false


int FUN_0047681c(HWND param_1,uint param_2,int *param_3,HWND param_4)

{
  HANDLE pvVar1;
  HWND pHVar2;
  int iVar3;
  HINSTANCE pHVar4;
  int *piVar5;
  undefined4 *puVar6;
  DWORD dwExStyle;
  DWORD dwStyle;
  LONG LVar7;
  LPCWSTR lpString;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  HWND pHVar11;
  UINT Msg;
  BOOL bMenu;
  uint uVar12;
  tagRECT tStack_220;
  int *local_210;
  int local_20c;
  tagPOINT tStack_208;
  wchar_t awStack_200 [256];
  
  piVar8 = (int *)0x0;
  local_20c = FUN_00423ccb(DAT_00543990);
  for (pHVar2 = param_1; pHVar2 != (HWND)0x0; pHVar2 = GetParent(pHVar2)) {
    pvVar1 = GetPropW(pHVar2,L"PB_WindowID");
    if (pvVar1 != (HANDLE)0x0) {
      pHVar4 = (HINSTANCE)GetWindowLongW(pHVar2,-6);
      if (pHVar4 == DAT_00542260) {
        piVar10 = (int *)((int)pvVar1 + -1);
        piVar8 = (int *)FUN_004258d0((int)DAT_0054398c,piVar10);
        local_210 = piVar8;
        if (((piVar8 == (int *)0x0) || ((code *)piVar8[3] == (code *)0x0)) ||
           ((pHVar2 != param_1 && (piVar8[0x10] != 1)))) goto LAB_0047687a;
        iVar3 = (*(code *)piVar8[3])(param_1,param_2,param_3,param_4);
        piVar8 = local_210;
        goto joined_r0x004769c8;
      }
      break;
    }
  }
  piVar10 = (int *)0xffffffff;
LAB_0047687a:
  if ((*(code **)(local_20c + 0x10) != (code *)0x0) &&
     ((pHVar2 == param_1 || (*(int *)(local_20c + 0x14) == 1)))) {
    iVar3 = (**(code **)(local_20c + 0x10))(param_1,param_2,param_3,param_4);
joined_r0x004769c8:
    if (iVar3 != -0x1f1f1f1f) {
      return iVar3;
    }
  }
  iVar3 = -0x2f2f2f2f;
  pHVar11 = param_4;
  if (param_2 < 0x115) {
    if (param_2 == 0x114) {
LAB_00476e91:
      iVar3 = FUN_00477007(pHVar11,param_1,param_2,param_3,param_4);
      return iVar3;
    }
    if (0x15 < param_2) {
      if (param_2 == 0x24) {
        if (piVar8 != (int *)0x0) {
          SetRect(&tStack_220,0,0,0,0);
          dwExStyle = GetWindowLongW(param_1,-0x14);
          bMenu = 0;
          dwStyle = GetWindowLongW(param_1,-0x10);
          AdjustWindowRectEx(&tStack_220,dwStyle,bMenu,dwExStyle);
          if (*(ushort *)(piVar8 + 9) == 0) {
            LVar7 = GetWindowLongW(param_1,-0x14);
            if ((char)LVar7 < '\0') {
              param_4[6].unused = 1;
            }
          }
          else {
            param_4[6].unused = ((uint)*(ushort *)(piVar8 + 9) - tStack_220.left) + tStack_220.right
            ;
          }
          if (*(ushort *)((int)piVar8 + 0x26) != 0) {
            param_4[7].unused =
                 ((uint)*(ushort *)((int)piVar8 + 0x26) - tStack_220.top) + tStack_220.bottom;
          }
          if (*(ushort *)(piVar8 + 10) != 0) {
            param_4[8].unused =
                 ((uint)*(ushort *)(piVar8 + 10) - tStack_220.left) + tStack_220.right;
          }
          if (*(ushort *)((int)piVar8 + 0x2a) != 0) {
            param_4[9].unused =
                 ((uint)*(ushort *)((int)piVar8 + 0x2a) - tStack_220.top) + tStack_220.bottom;
          }
          return 0;
        }
        return -0x2f2f2f2f;
      }
      if (param_2 == 0x4e) {
        pHVar11 = (HWND)param_4->unused;
        goto LAB_00476e91;
      }
      if (param_2 == 0x82) {
        pvVar1 = GetPropW(param_1,L"PB_WindowID");
        if (pvVar1 == (HANDLE)0x0) {
          return 1;
        }
        piVar8 = (int *)((int)pvVar1 + -1);
        puVar6 = (undefined4 *)FUN_004258d0((int)DAT_0054398c,piVar8);
        FUN_004775f1((int)piVar8);
        RemovePropW(param_1,L"PB_Focus");
        RemovePropW(param_1,L"PB_WindowID");
        pvVar1 = RemovePropW(param_1,L"PB_DropAccept");
        if (pvVar1 != (HANDLE)0x0) {
          RevokeDragDrop(param_1);
        }
        for (puVar9 = (undefined4 *)puVar6[0x11]; puVar9 != (undefined4 *)0x0;
            puVar9 = (undefined4 *)*puVar9) {
          KillTimer((HWND)*puVar6,puVar9[2]);
        }
        FUN_004b781e(puVar6 + 0x11);
        if (puVar6[1] != 0) {
          HeapFree(DAT_00542264,0,(LPVOID)puVar6[1]);
          DestroyAcceleratorTable((HACCEL)puVar6[2]);
        }
        if (puVar6[6] != 0) {
          DeleteObject((HGDIOBJ)puVar6[6]);
        }
        if (puVar6[7] == 0) {
          FUN_0041e2d9(awStack_200,L"WindowClass_%d");
          UnregisterClassW(awStack_200,DAT_00542260);
        }
        FUN_00425965(DAT_0054398c,(int)piVar8);
        FUN_004775a7((int)piVar8);
        return 1;
      }
      piVar5 = param_3;
      if (param_2 == 0x111) {
        iVar3 = FUN_00477007(param_4,param_1,0x111,param_3,param_4);
        if (iVar3 != -0x2f2f2f2f) {
          return 0;
        }
        if (param_4 == (HWND)0x0) {
          if ((short)((uint)param_3 >> 0x10) != 0) {
            if ((short)param_3 == -0x5ff) {
              iVar3 = 0;
LAB_00476c68:
              FUN_00477ec2(iVar3);
              return 0;
            }
            if ((short)param_3 == -0x5fe) {
              iVar3 = 1;
              goto LAB_00476c68;
            }
            goto LAB_00476c00;
          }
        }
        else {
          piVar5 = (int *)GetWindowLongW(param_4,-0xc);
          if (piVar5 != (int *)0xffffd8f0) {
            iVar3 = FUN_004773b8(param_4);
            if (iVar3 == -1) {
              return 0;
            }
            uVar12 = (uint)param_3 >> 0x10;
            iVar3 = 0x332c;
            goto LAB_00476f5c;
          }
LAB_00476c00:
          piVar5 = (int *)((uint)param_3 & 0xffff);
        }
        uVar12 = 0;
        iVar3 = 0x332d;
      }
      else {
        if (param_2 != 0x113) {
          return -0x2f2f2f2f;
        }
        if (piVar8 == (int *)0x0) {
          return -0x2f2f2f2f;
        }
        iVar3 = 0x3336;
        uVar12 = 0;
      }
      goto LAB_00476f5c;
    }
    if (param_2 == 0x15) {
      if (piVar8 == (int *)0x0) {
        return -0x2f2f2f2f;
      }
      if (piVar8[7] == 0) {
        EnumChildWindows(param_1,(WNDENUMPROC)&LAB_00477053,0);
        return -0x2f2f2f2f;
      }
      return -0x2f2f2f2f;
    }
    if (param_2 == 3) {
      if (piVar8 == (int *)0x0) {
        return 0;
      }
      if (param_1 != (HWND)*piVar8) {
        return 0;
      }
      if (piVar8[0xc] == 0) {
        return 0;
      }
      uVar12 = 0;
      iVar3 = 0x333d;
      piVar5 = piVar10;
      goto LAB_00476f5c;
    }
    if (param_2 == 5) {
      if (pHVar2 != param_1) {
        return 1;
      }
      if (piVar8 == (int *)0x0) {
        return -0x2f2f2f2f;
      }
      if (piVar8[0xc] == 0) {
        return -0x2f2f2f2f;
      }
      if (param_3 == (int *)0x0) {
        if (piVar8[0xb] != 0) {
          piVar8[0xb] = 0;
          FUN_00477989(0x3335,0,(int)piVar10,0);
        }
      }
      else {
        if (param_3 == (int *)0x1) {
          piVar8[0xb] = 1;
          iVar3 = 0x3333;
          goto LAB_00476b17;
        }
        if (param_3 == (int *)0x2) {
          piVar8[0xb] = 1;
          FUN_00477989(0x3334,0,(int)piVar10,0);
          iVar3 = 0x333e;
          goto LAB_00476b17;
        }
      }
      iVar3 = 0x333e;
      FUN_0047790e(0x333e,0,(int)piVar10,0);
LAB_00476b17:
      FUN_00477989(iVar3,0,(int)piVar10,0);
      return 0;
    }
    if (param_2 == 6) {
      if ((short)param_3 == 0) {
        pHVar2 = GetFocus();
        SetPropW(param_1,L"PB_Focus",pHVar2);
        FUN_00477fda(param_1,0);
        iVar3 = 0x333a;
      }
      else {
        pHVar2 = GetPropW(param_1,L"PB_Focus");
        if (pHVar2 != (HWND)0x0) {
          SetFocus(pHVar2);
        }
        iVar3 = 0x3330;
      }
      FUN_00477989(iVar3,0,(int)piVar10,0);
      return 1;
    }
    if (param_2 != 0x10) {
      if (param_2 == 0x14) {
        if (piVar8 != (int *)0x0) {
          if (piVar8[6] == 0) {
            if (((HWND)*piVar8 == param_1) && (piVar8[0xe] != 0)) {
              iVar3 = (*(code *)piVar8[8])(param_3,param_1,0x10);
            }
          }
          else {
            (*(code *)piVar8[8])(param_3,param_1,piVar8[6]);
            iVar3 = 1;
          }
        }
        FUN_00477989(0x333b,0,(int)piVar10,0);
        return iVar3;
      }
      return -0x2f2f2f2f;
    }
    if (piVar8 == (int *)0x0) {
      return 0;
    }
    if (param_1 != (HWND)*piVar8) {
      return 0;
    }
    FUN_00477989(0x333c,(int)piVar10,(int)piVar10,0);
    param_1 = DAT_00543a20;
    Msg = DAT_00543a1c;
LAB_00476a38:
    PostMessageW(param_1,Msg,0,0);
  }
  else {
    if (param_2 < 0x203) {
      if (param_2 != 0x202) {
        if ((((param_2 != 0x115) && (param_2 != 0x133)) && (param_2 != 0x134)) &&
           ((param_2 != 0x135 && (param_2 != 0x138)))) {
          return -0x2f2f2f2f;
        }
        goto LAB_00476e91;
      }
      uVar12 = 0;
      piVar5 = (int *)0x0;
      iVar3 = 0x3338;
    }
    else if (param_2 == 0x203) {
      uVar12 = 0;
      piVar5 = (int *)0x0;
      iVar3 = 0x3339;
    }
    else {
      if (param_2 != 0x205) {
        if (param_2 != 0x30d5) {
          if (param_2 != 0x3340) {
            return -0x2f2f2f2f;
          }
          goto LAB_00476e91;
        }
        lpString = (LPCWSTR)FUN_0041eab5();
        pvVar1 = GetPropW(param_1,lpString);
        if (pvVar1 == (HANDLE)0x0) {
          return 0;
        }
        if (param_4 == (HWND)0x202) {
          iVar3 = 0;
LAB_00476f2f:
          FUN_00477989(0x332e,(int)pvVar1 + -1,(int)piVar10,iVar3);
        }
        else {
          if (param_4 == (HWND)0x203) {
            iVar3 = 2;
            goto LAB_00476f2f;
          }
          if (param_4 == (HWND)0x205) {
            uVar12 = FUN_004258d0(DAT_00543470,(int *)((int)pvVar1 + -1));
            if (uVar12 != 0) {
              if (*(int *)(uVar12 + 8) == 0) {
                iVar3 = 1;
                goto LAB_00476f2f;
              }
              GetCursorPos(&tStack_208);
              SetForegroundWindow(param_1);
              TrackPopupMenu(*(HMENU *)(uVar12 + 8),0x22,tStack_208.x,tStack_208.y,0,param_1,
                             (RECT *)0x0);
            }
          }
          else if (param_4 == (HWND)0x206) {
            iVar3 = 3;
            goto LAB_00476f2f;
          }
        }
        Msg = 0;
        goto LAB_00476a38;
      }
      uVar12 = 0;
      piVar5 = (int *)0x0;
      iVar3 = 0x3337;
    }
LAB_00476f5c:
    FUN_00477989(iVar3,(int)piVar5,(int)piVar10,uVar12);
  }
  return 0;
}


