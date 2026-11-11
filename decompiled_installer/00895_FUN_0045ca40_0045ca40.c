// Function: FUN_0045ca40
// Entry: 0045ca40
// Size: 256 bytes
// Thunk: false
// External: false


longlong * __cdecl FUN_0045ca40(char *param_1,longlong *param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  uint local_8;
  int iStack_4;
  
  cVar8 = *param_1;
  uVar9 = 1;
  cVar7 = cVar8;
  if (cVar8 == '-') {
    cVar7 = param_1[1];
    uVar9 = 0xffffffff;
  }
  iStack_4 = 0;
  local_8 = 0;
  pcVar10 = param_1 + 1;
  if (cVar8 != '-') {
    pcVar10 = param_1;
  }
  if ('/' < cVar7) {
    cVar8 = *pcVar10;
    do {
      if ('9' < cVar8) break;
      if (((0xccccccc < iStack_4) || ((0xccccccb < iStack_4 && (0xcccccccc < local_8)))) ||
         ((local_8 == 0xcccccccc && ((iStack_4 == 0xccccccc && ('\a' < (char)(cVar8 + -0x30))))))) {
        local_8 = 0xffffffff;
        iStack_4 = 0x7fffffff;
        break;
      }
      uVar2 = local_8 >> 0x1e;
      bVar12 = CARRY4(local_8,local_8 * 4);
      uVar4 = local_8 * 5;
      uVar5 = (uint)(char)(cVar8 + -0x30);
      cVar8 = pcVar10[1];
      uVar3 = local_8 * 10;
      local_8 = uVar3 + uVar5;
      iStack_4 = ((iStack_4 + (iStack_4 << 2 | uVar2) + (uint)bVar12) * 2 | uVar4 >> 0x1f) +
                 ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
      pcVar10 = pcVar10 + 1;
    } while ('/' < cVar8);
  }
  lVar13 = __allmul(uVar9,(int)uVar9 >> 0x1f,local_8,iStack_4);
  plVar6 = (longlong *)lVar13;
  *param_2 = lVar13;
  *param_3 = 0;
  if (*pcVar10 == '.') {
    uVar9 = 100000000;
    iVar11 = 0;
    do {
      pcVar1 = pcVar10 + 1;
      param_2 = (longlong *)CONCAT31((int3)((uint)param_2 >> 8),*pcVar1);
      pcVar10 = pcVar10 + 1;
      if (9 < (byte)(param_2 + -6)) {
        return param_2 + -6;
      }
      iVar11 = iVar11 + (*pcVar1 + -0x30) * uVar9;
      plVar6 = (longlong *)(uVar9 * -0x33333333);
      *param_3 = iVar11;
      uVar9 = uVar9 / 10;
    } while (uVar9 != 0);
  }
  return plVar6;
}


