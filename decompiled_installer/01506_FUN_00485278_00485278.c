// Function: FUN_00485278
// Entry: 00485278
// Size: 813 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0048556e) */

int __cdecl
FUN_00485278(double *param_1,undefined1 (*param_2) [16],uint param_3,uint *******param_4,int param_5
            ,size_t param_6,byte param_7,int param_8,int param_9,int *param_10)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  char *pcVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  char *_Dst;
  char *pcVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  char local_2c;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if ((int)param_6 < 0) {
    param_6 = 0;
  }
  (*param_2)[0] = 0;
  if (param_3 <= param_6 + 0xb) {
    *(undefined1 *)(param_10 + 7) = 1;
    param_10[6] = 0x22;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
    return 0x22;
  }
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    iVar5 = FUN_0048509e((undefined4 *)param_1,(char *)param_2,param_3,param_4,param_5,param_6,'\0',
                         param_8,param_9,param_10);
    if (iVar5 != 0) {
      (*param_2)[0] = 0;
      return iVar5;
    }
    pauVar6 = FUN_00480570(param_2,0x65);
    if (pauVar6 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    (*pauVar6)[0] = (param_7 ^ 1) * ' ' + 'P';
    (*pauVar6)[3] = 0;
    return 0;
  }
  if ((*(int *)((int)param_1 + 4) < 1) && (*(int *)((int)param_1 + 4) < 0)) {
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  pcVar1 = *param_2 + 1;
  sVar3 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  local_14 = 0x3ff;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    (*param_2)[0] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0x3fe;
    }
  }
  else {
    (*param_2)[0] = 0x31;
  }
  _Dst = *param_2 + 2;
  if (param_6 == 0) {
    cVar2 = '\0';
  }
  else {
    if ((char)param_10[5] == '\0') {
      FUN_0044ef90(param_10);
    }
    cVar2 = *(char *)**(undefined4 **)(param_10[3] + 0x88);
  }
  *pcVar1 = cVar2;
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (*(int *)param_1 != 0)) {
    uVar8 = 0x30;
    local_1c = 0xf0000;
    local_18 = 0;
    do {
      if ((int)param_6 < 1) {
        cVar2 = FUN_004851e5(param_1,local_18,local_1c,(uint)uVar8,param_9);
        pcVar11 = _Dst;
        if (cVar2 != '\0') goto LAB_00485462;
        goto LAB_004854a0;
      }
      uVar13 = __aullshr((byte)uVar8,*(uint *)((int)param_1 + 4) & local_1c);
      uVar4 = (short)uVar13 + 0x30;
      if (0x39 < uVar4) {
        uVar4 = uVar4 + sVar3;
      }
      *_Dst = (char)uVar4;
      uVar8 = uVar8 - 4;
      _Dst = _Dst + 1;
      local_18 = local_18 >> 4 | local_1c << 0x1c;
      local_1c = local_1c >> 4;
      param_6 = param_6 - 1;
    } while (-1 < (short)uVar8);
  }
LAB_0048548c:
  if (0 < (int)param_6) {
    _memset(_Dst,0x30,param_6);
    _Dst = _Dst + param_6;
  }
LAB_004854a0:
  if (*pcVar1 == '\0') {
    _Dst = pcVar1;
  }
  *_Dst = (param_7 ^ 1) * ' ' + 'P';
  uVar13 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar9 = (uint)uVar13 & 0x7ff;
  pcVar1 = _Dst + 2;
  uVar10 = uVar9 - local_14;
  uVar9 = -(uint)(uVar9 < local_14);
  if ((int)uVar9 < 0) {
    bVar12 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar9 = -(uVar9 + bVar12);
    cVar2 = '-';
  }
  else {
    cVar2 = '+';
  }
  lVar15 = CONCAT44(uVar9,uVar10);
  _Dst[1] = cVar2;
  *pcVar1 = '0';
  pcVar11 = pcVar1;
  if ((int)uVar9 < 0) goto LAB_00485593;
  if (((int)uVar9 < 1) && (uVar10 < 1000)) {
LAB_00485536:
    uVar10 = (uint)lVar15;
    if (lVar15 < 0) goto LAB_00485593;
    if (((int)((ulonglong)lVar15 >> 0x20) != 0) || (99 < uVar10)) goto LAB_00485541;
LAB_00485568:
    uVar10 = (uint)lVar15;
    if (lVar15 < 10) goto LAB_00485593;
  }
  else {
    uVar14 = __alldiv(uVar10,uVar9,1000,0);
    *pcVar1 = (char)uVar14 + '0';
    pcVar11 = _Dst + 3;
    lVar15 = __allrem(uVar10,uVar9,1000,0);
    if (pcVar11 == pcVar1) goto LAB_00485536;
LAB_00485541:
    uVar9 = (uint)((ulonglong)lVar15 >> 0x20);
    uVar14 = __alldiv((uint)lVar15,uVar9,100,0);
    *pcVar11 = (char)uVar14 + '0';
    pcVar11 = pcVar11 + 1;
    lVar15 = __allrem((uint)lVar15,uVar9,100,0);
    if (pcVar11 == pcVar1) goto LAB_00485568;
  }
  uVar9 = (uint)((ulonglong)lVar15 >> 0x20);
  uVar14 = __alldiv((uint)lVar15,uVar9,10,0);
  *pcVar11 = (char)uVar14 + '0';
  pcVar11 = pcVar11 + 1;
  uVar14 = __allrem((uint)lVar15,uVar9,10,0);
  uVar10 = (uint)uVar14;
LAB_00485593:
  *pcVar11 = (char)uVar10 + '0';
  pcVar11[1] = '\0';
  return 0;
LAB_00485462:
  while( true ) {
    pcVar7 = pcVar11 + -1;
    local_2c = *pcVar7;
    if ((local_2c != 'f') && (local_2c != 'F')) break;
    *pcVar7 = '0';
    pcVar11 = pcVar7;
  }
  if (pcVar7 == pcVar1) {
    pcVar11[-2] = pcVar11[-2] + '\x01';
  }
  else {
    if (local_2c == '9') {
      local_2c = (char)sVar3;
      local_2c = local_2c + '9';
    }
    *pcVar7 = local_2c + '\x01';
  }
  goto LAB_0048548c;
}


