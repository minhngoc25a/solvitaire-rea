// Function: FUN_00425185
// Entry: 00425185
// Size: 768 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00425185(uint param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
            undefined1 (*param_4) [16])

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  __acrt_ptd *p_Var5;
  int iVar6;
  __acrt_ptd *p_Var7;
  uint *puVar8;
  errno_t eVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  wchar_t *pwVar13;
  char *pcVar14;
  undefined1 (*pauVar15) [16];
  char *pcVar16;
  undefined1 (*local_2c) [16];
  undefined1 (*in_stack_ffffffdc) [16];
  char local_1c [4];
  undefined4 uStack_18;
  wchar_t *local_14;
  wchar_t local_10 [2];
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_2c = param_3;
  if ((((param_2 == (undefined1 (*) [16])0x0) || ((*param_2)[0] == '\0')) ||
      (param_3 == (undefined1 (*) [16])0x0)) ||
     ((*(char **)*param_3 == (char *)0x0 || (**(char **)*param_3 == '\0')))) {
    p_Var5 = FUN_0042470e();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_004243be();
    goto LAB_00425448;
  }
  p_Var5 = FUN_0042470e();
  iVar2 = *(int *)p_Var5;
  *(undefined4 *)p_Var5 = 0;
  iVar6 = FUN_00424bb1(param_1,param_2,(int *)param_3,(int *)param_4);
  if (iVar6 != -1) {
    if ((*(int *)p_Var5 == 0) && (iVar2 != 0)) {
      *(int *)p_Var5 = iVar2;
    }
    goto LAB_00425448;
  }
  p_Var7 = FUN_0042470e();
  if (((*(int *)p_Var7 == 2) && (puVar8 = FUN_004810c0((uint *)param_2,'\\'), puVar8 == (uint *)0x0)
      ) && ((puVar8 = FUN_004810c0((uint *)param_2,'/'), puVar8 == (uint *)0x0 &&
            ((*param_2)[1] != ':')))) {
    local_10[0] = L'䅐';
    local_10[1] = L'䡔';
    local_c = 0;
    local_14 = (wchar_t *)0x0;
    eVar9 = FID_conflict___dupenv_s(&local_14,(size_t *)0x0,local_10);
    if (eVar9 == 0) {
      if (local_14 == (wchar_t *)0x0) {
        pwVar13 = (wchar_t *)0x0;
        goto LAB_0042528e;
      }
      pauVar10 = __calloc_base(0x104,1);
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        pauVar15 = (undefined1 (*) [16])0x103;
        pwVar13 = local_14;
        pauVar11 = pauVar10;
        do {
          do {
            pwVar13 = (wchar_t *)FUN_0048129b((char *)pwVar13,(char *)pauVar11,(uint)pauVar15);
            in_stack_ffffffdc = pauVar10;
            if ((pwVar13 == (wchar_t *)0x0) || (pauVar11 = pauVar10, (*pauVar10)[0] == '\0'))
            goto LAB_00425425;
            do {
              pauVar12 = pauVar11;
              pauVar11 = (undefined1 (*) [16])(*pauVar12 + 1);
            } while ((*pauVar12)[0] != '\0');
            pcVar16 = (char *)0x5c;
            pauVar11 = FUN_00480570(pauVar10,0x5c);
            pauVar15 = param_4;
            if ((undefined1 (*) [16])(pauVar12[-1] + 0xf) != pauVar11) {
              pcVar16 = (char *)0x2f;
              pauVar11 = FUN_00480570(pauVar10,0x2f);
              pauVar15 = param_4;
              if ((undefined1 (*) [16])(pauVar12[-1] + 0xf) != pauVar11) {
                pcVar16 = local_1c;
                local_1c[0] = '\\';
                local_1c[1] = '\0';
                iVar6 = FUN_004807b7((char *)pauVar10,0x104,(int)pcVar16);
                pauVar15 = param_4;
                if (iVar6 != 0) goto LAB_00425479;
              }
            }
            pauVar11 = pauVar10;
            do {
              puVar4 = *pauVar11;
              pauVar11 = (undefined1 (*) [16])(*pauVar11 + 1);
            } while (*puVar4 != '\0');
            pcVar14 = pcVar16;
            do {
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar1 != '\0');
            if ((char *)0x103 <
                pcVar14 + (-(int)(pcVar16 + 1) - (int)(*pauVar10 + 1)) + (int)*pauVar11)
            goto LAB_00425425;
            iVar6 = FUN_004807b7((char *)pauVar10,0x104,(int)pcVar16);
            if (iVar6 != 0) goto LAB_00425479;
            p_Var7 = FUN_0042470e();
            *(undefined4 *)p_Var7 = 0;
            pauVar11 = local_2c;
            iVar6 = FUN_00424bb1(param_1,pauVar10,(int *)local_2c,(int *)pauVar15);
            if (iVar6 != -1) {
              FUN_004247be(pauVar10);
              FUN_004247be(local_14);
              local_14 = (wchar_t *)0x0;
              if ((*(int *)p_Var5 == 0) && (iVar2 != 0)) {
                *(int *)p_Var5 = iVar2;
              }
              goto LAB_00425448;
            }
            p_Var7 = FUN_0042470e();
            param_4 = pauVar10;
          } while ((*(int *)p_Var7 == 2) || (p_Var7 = FUN_00424721(), *(int *)p_Var7 == 0x15));
          pauVar12 = (undefined1 (*) [16])FUN_004810c0((uint *)pauVar10,'/');
          if (pauVar12 == pauVar10) {
            puVar8 = FUN_004810c0((uint *)(*pauVar10 + 1),'/');
            uStack_18 = CONCAT13(1,(undefined3)uStack_18);
            if (puVar8 != (uint *)(*pauVar10 + 1)) goto LAB_004253d2;
          }
          else {
LAB_004253d2:
            uStack_18 = uStack_18 & 0xffffff;
          }
          local_2c = (undefined1 (*) [16])0x4253de;
          pauVar12 = (undefined1 (*) [16])FUN_004810c0((uint *)pauVar10,'\\');
          if (pauVar12 == pauVar10) {
            local_2c = (undefined1 (*) [16])0x4253ef;
            puVar8 = FUN_004810c0((uint *)(*pauVar10 + 1),'\\');
            if (puVar8 != (uint *)(*pauVar10 + 1)) goto LAB_004253fc;
            bVar3 = true;
          }
          else {
LAB_004253fc:
            bVar3 = false;
          }
        } while ((uStack_18._3_1_ != '\0') || (bVar3));
      }
LAB_00425425:
      FUN_004247be(in_stack_ffffffdc);
      FUN_004247be(local_14);
    }
    else {
      pwVar13 = local_14;
      if (eVar9 == 0x16) {
LAB_00425479:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
LAB_0042528e:
      FUN_004247be(pwVar13);
    }
    local_14 = (wchar_t *)0x0;
  }
  if ((*(int *)p_Var5 == 0) && (iVar2 != 0)) {
    *(int *)p_Var5 = iVar2;
  }
LAB_00425448:
  uStack_18 = 0x425453;
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


