// Function: FUN_004599c0
// Entry: 004599c0
// Size: 528 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004599c0(int param_1,undefined4 *param_2,uint param_3,uint param_4,uint *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  __acrt_ptd *p_Var6;
  uint uVar7;
  int unaff_EBX;
  int *unaff_EBP;
  undefined4 unaff_ESI;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 unaff_EDI;
  longlong lVar11;
  char *pcVar12;
  DWORD DVar13;
  uint local_8;
  
  lVar11 = FUN_0045cc30((byte *)(param_4 + 0x7c),0xc);
  iVar4 = (int)lVar11;
  uVar2 = FUN_0045cb40(param_1,param_2,param_2,param_4,param_5);
  if ((uVar2 == 0) &&
     ((uVar2 = FUN_0045cd30(param_1,(uint)param_2,param_3,param_5,unaff_EDI,unaff_ESI,unaff_EBP,
                            unaff_EBX), uVar2 == 0 || (uVar2 == 0xffffffec)))) {
    pcVar12 = (char *)*param_2;
    local_8 = 0;
    pcVar8 = pcVar12;
    if (*pcVar12 != '\0') {
      param_4 = 0;
      do {
        if (pcVar12 + iVar4 <= pcVar8) break;
        if (7 < (byte)(*pcVar8 - 0x30U)) {
          pcVar12 = "Malformed Solaris ACL attribute (invalid digit)";
          goto LAB_00459ac0;
        }
        uVar2 = local_8 >> 0x1d;
        uVar3 = (int)*pcVar8 - 0x30;
        uVar7 = local_8 * 8;
        local_8 = uVar7 + uVar3;
        param_4 = ((int)uVar3 >> 0x1f) + (param_4 << 3 | uVar2) + (uint)CARRY4(uVar7,uVar3);
        if ((0 < (int)param_4) || ((-1 < (int)param_4 && (0xffffff < local_8)))) {
          pcVar12 = "Malformed Solaris ACL attribute (count too large)";
          goto LAB_00459ac0;
        }
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
    }
    if ((local_8 & 0xfffc0000) == 0x40000) {
      param_4 = 0x100;
    }
    else {
      if ((local_8 & 0xfffc0000) != 0xc0000) {
        FUN_00487380(param_1,0xffffffff,0x52a760);
        return 0xffffffec;
      }
      param_4 = 0x3c00;
    }
    puVar9 = (uint *)(pcVar8 + 1);
    if (pcVar12 + iVar4 <= puVar9) {
      pcVar12 = "Malformed Solaris ACL attribute (body overflow)";
LAB_00459ac0:
      FUN_00487380(param_1,0xffffffff,(int)pcVar12);
      return 0xffffffec;
    }
    cVar1 = (char)*puVar9;
    puVar10 = puVar9;
    while ((cVar1 != '\0' && (puVar10 < pcVar12 + iVar4))) {
      puVar10 = (uint *)((int)puVar10 + 1);
      cVar1 = *(char *)puVar10;
    }
    if (param_2[0x3e] == 0) {
      iVar4 = FUN_0048d0a0(param_1,&DAT_005297a0,1);
      param_2[0x3e] = iVar4;
      if (iVar4 == 0) {
        return 0xffffffe2;
      }
    }
    param_2[0x3a] = 0;
    FUN_0048d570(param_2 + 0x39,puVar9,(int)puVar10 - (int)puVar9);
    DVar13 = param_2[0x3e];
    pcVar12 = (char *)param_2[0x39];
    puVar5 = (ushort *)FUN_0048c9f0(param_3);
    uVar2 = FUN_00492480(puVar5,pcVar12,param_4,DVar13);
    if (uVar2 != 0) {
      p_Var6 = FUN_0042470e();
      if (*(int *)p_Var6 == 0xc) {
        FUN_00487380(param_1,0xc,0x5290d4);
        return uVar2;
      }
      FUN_00487380(param_1,0xffffffff,0x52a7f8);
    }
  }
  return uVar2;
}


