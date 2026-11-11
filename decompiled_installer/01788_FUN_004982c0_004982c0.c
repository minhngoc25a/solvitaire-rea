// Function: FUN_004982c0
// Entry: 004982c0
// Size: 1211 bytes
// Thunk: false
// External: false


void __cdecl FUN_004982c0(int *param_1,undefined4 param_2,int *param_3,char *param_4,int param_5)

{
  wchar_t wVar1;
  WCHAR WVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  __acrt_ptd *p_Var7;
  LPCWSTR pWVar8;
  char *pcVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  char cStack_1a;
  uint *puStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  
  piVar6 = FUN_0048d4d0(param_1,(LPVOID)0x40);
  if (piVar6 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
  }
  if (param_4 == (char *)0x0) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  cVar4 = *param_4;
  if (cVar4 != '\0') {
    iStack_14 = param_5 + -8;
    puStack_18 = (uint *)(param_5 + -4);
    do {
      if (cVar4 != '%') {
        cVar4 = *param_4;
        goto LAB_0049874f;
      }
      cVar4 = param_4[1];
      pcVar9 = param_4 + 1;
      cStack_1a = '\0';
      if (((cVar4 == 'j') || (cVar4 == 'l')) || (cVar5 = cVar4, cVar4 == 'z')) {
        pcVar9 = param_4 + 2;
        cVar5 = *pcVar9;
        cStack_1a = cVar4;
      }
      switch(cVar5) {
      case '%':
        cVar4 = '%';
        param_4 = pcVar9;
        break;
      default:
        cVar4 = *param_4;
        break;
      case 'S':
        pwVar10 = L"(null)";
        if ((LPCWSTR)puStack_18[1] != (LPCWSTR)0x0) {
          pwVar10 = (LPCWSTR)puStack_18[1];
        }
        pWVar8 = pwVar10;
        do {
          WVar2 = *pWVar8;
          pWVar8 = pWVar8 + 1;
        } while (WVar2 != L'\0');
        iVar12 = (int)pWVar8 - (int)(pwVar10 + 1);
LAB_00498570:
        iStack_14 = iStack_14 + 4;
        puStack_18 = puStack_18 + 1;
        iVar12 = FUN_0048d000(param_1,pwVar10,iVar12 >> 1);
        param_4 = pcVar9;
        if ((iVar12 != 0) && (p_Var7 = FUN_0042470e(), *(int *)p_Var7 == 0xc)) {
          FUN_004873c0(1,"Out of memory");
        }
        goto LAB_00498758;
      case 'X':
      case 'o':
      case 'u':
      case 'x':
        if (cStack_1a == 'j') {
          uVar13 = *(uint *)(iStack_14 + 8);
          puStack_18 = puStack_18 + 2;
          uVar14 = *(uint *)(iStack_14 + 0xc);
          iStack_14 = iStack_14 + 8;
        }
        else {
          uVar13 = puStack_18[1];
          puStack_18 = puStack_18 + 1;
          uVar14 = 0;
          iStack_14 = iStack_14 + 4;
        }
        if (*pcVar9 == 'o') {
          if ((uVar14 != 0) || (7 < uVar13)) {
            FUN_00498810(param_1,uVar13 >> 3 | uVar14 << 0x1d,uVar14 >> 3,8);
          }
          cVar4 = "0123456789abcdef"[uVar13 & 7];
          param_4 = pcVar9;
        }
        else if (*pcVar9 == 'u') {
          if ((uVar14 != 0) || (9 < uVar13)) {
            lVar3 = (ulonglong)uVar14 * 0xcccccccd + ((ulonglong)uVar13 * 0xcccccccd >> 0x20);
            uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
            uVar16 = (int)((ulonglong)uVar13 * 0xcccccccc >> 0x20) +
                     (uint)CARRY4((uint)((ulonglong)uVar13 * 0xcccccccc),(uint)lVar3);
            lVar3 = (ulonglong)uVar14 * 0xcccccccc +
                    (ulonglong)CONCAT14(CARRY4(uVar15,uVar16),uVar15 + uVar16);
            uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
            FUN_00498810(param_3,(uint)lVar3 >> 3 | uVar15 * 0x20000000,uVar15 >> 3,10);
          }
          lVar3 = (ulonglong)uVar14 * 0xcccccccd + ((ulonglong)uVar13 * 0xcccccccd >> 0x20);
          uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar16 = (int)((ulonglong)uVar13 * 0xcccccccc >> 0x20) +
                   (uint)CARRY4((uint)((ulonglong)uVar13 * 0xcccccccc),(uint)lVar3);
          lVar3 = (ulonglong)uVar14 * 0xcccccccc +
                  (ulonglong)CONCAT14(CARRY4(uVar15,uVar16),uVar15 + uVar16);
          cVar4 = "0123456789abcdef"
                  [uVar13 + ((uint)lVar3 >> 3 | (int)((ulonglong)lVar3 >> 0x20) * 0x20000000) * -10]
          ;
          param_1 = param_3;
          param_4 = pcVar9;
        }
        else {
          if ((uVar14 != 0) || (0xf < uVar13)) {
            FUN_00498810(param_1,uVar13 >> 4 | uVar14 << 0x1c,uVar14 >> 4,0x10);
          }
          cVar4 = "0123456789abcdef"[uVar13 & 0xf];
          param_4 = pcVar9;
        }
        break;
      case 'c':
        cVar4 = (char)puStack_18[1];
        puStack_18 = puStack_18 + 1;
        iStack_14 = iStack_14 + 4;
        param_4 = pcVar9;
        break;
      case 'd':
        if (cStack_1a == 'j') {
          uStack_10 = *(uint *)(iStack_14 + 8);
          puStack_18 = puStack_18 + 2;
          uStack_c = *(uint *)(iStack_14 + 0xc);
          iStack_14 = iStack_14 + 8;
        }
        else if (cStack_1a == 'l') {
          uStack_10 = puStack_18[1];
          puStack_18 = puStack_18 + 1;
          uStack_c = (int)uStack_10 >> 0x1f;
          iStack_14 = iStack_14 + 4;
        }
        else {
          puStack_18 = puStack_18 + 1;
          uStack_10 = *puStack_18;
          uStack_c = (int)uStack_10 >> 0x1f;
          iStack_14 = iStack_14 + 4;
        }
        if (((int)uStack_c < 1) && ((int)uStack_c < 0)) {
          FUN_0048cf00(param_1,0x2d);
          if ((uStack_10 != 0) || (uStack_c != 0x80000000)) {
            bVar17 = uStack_10 != 0;
            uStack_10 = -uStack_10;
            uStack_c = -(uStack_c + bVar17);
            goto LAB_00498434;
          }
LAB_00498445:
          lVar3 = (ulonglong)uStack_c * 0xcccccccd + ((ulonglong)uStack_10 * 0xcccccccd >> 0x20);
          uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar14 = (int)((ulonglong)uStack_10 * 0xcccccccc >> 0x20) +
                   (uint)CARRY4((uint)((ulonglong)uStack_10 * 0xcccccccc),(uint)lVar3);
          lVar3 = (ulonglong)uStack_c * 0xcccccccc +
                  (ulonglong)CONCAT14(CARRY4(uVar13,uVar14),uVar13 + uVar14);
          uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
          FUN_00498810(param_3,(uint)lVar3 >> 3 | uVar13 * 0x20000000,uVar13 >> 3,10);
        }
        else {
LAB_00498434:
          if ((uStack_c != 0) || (9 < uStack_10)) goto LAB_00498445;
        }
        lVar3 = (ulonglong)uStack_c * 0xcccccccd + ((ulonglong)uStack_10 * 0xcccccccd >> 0x20);
        uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar14 = (int)((ulonglong)uStack_10 * 0xcccccccc >> 0x20) +
                 (uint)CARRY4((uint)((ulonglong)uStack_10 * 0xcccccccc),(uint)lVar3);
        lVar3 = (ulonglong)uStack_c * 0xcccccccc +
                (ulonglong)CONCAT14(CARRY4(uVar13,uVar14),uVar13 + uVar14);
        cVar4 = "0123456789abcdef"
                [uStack_10 + ((uint)lVar3 >> 3 | (int)((ulonglong)lVar3 >> 0x20) * 0x20000000) * -10
                ];
        param_1 = param_3;
        param_4 = pcVar9;
        break;
      case 's':
        pwVar11 = (wchar_t *)puStack_18[1];
        if (cStack_1a == 'l') {
          pwVar10 = L"(null)";
          if (pwVar11 != (wchar_t *)0x0) {
            pwVar10 = pwVar11;
          }
          pwVar11 = pwVar10;
          do {
            wVar1 = *pwVar11;
            pwVar11 = pwVar11 + 1;
          } while (wVar1 != L'\0');
          iVar12 = (int)pwVar11 - (int)(pwVar10 + 1);
          goto LAB_00498570;
        }
        pwVar10 = (wchar_t *)"(null)";
        if (pwVar11 != (wchar_t *)0x0) {
          pwVar10 = pwVar11;
        }
        FUN_0048d660(param_1,(uint *)pwVar10);
        param_4 = pcVar9;
        puStack_18 = puStack_18 + 1;
        iStack_14 = iStack_14 + 4;
        goto LAB_00498758;
      }
LAB_0049874f:
      FUN_0048cf00(param_1,cVar4);
LAB_00498758:
      param_4 = param_4 + 1;
      cVar4 = *param_4;
    } while (cVar4 != '\0');
  }
  return;
}


