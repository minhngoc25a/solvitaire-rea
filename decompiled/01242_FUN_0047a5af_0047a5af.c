// Function: FUN_0047a5af
// Entry: 0047a5af
// Size: 211 bytes
// Thunk: false
// External: false


HGLOBAL __cdecl FUN_0047a5af(short *param_1)

{
  ushort uVar1;
  HGLOBAL pvVar2;
  ushort *puVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  ushort uVar9;
  HGLOBAL pvVar10;
  
  pvVar10 = (HGLOBAL)0x0;
  if ((*param_1 == 0) && (iVar6 = 1, param_1[1] == 1)) {
    uVar1 = param_1[2];
    psVar8 = param_1 + 3;
    pvVar2 = GlobalAlloc(0,0x438);
    if (pvVar2 != (HGLOBAL)0x0) {
      iVar7 = 0;
      if (1 < uVar1) {
        uVar9 = param_1[6];
        puVar3 = (ushort *)(param_1 + 0xe);
        cVar5 = (char)*psVar8;
        do {
          if ((cVar5 == (char)puVar3[-3]) &&
             (*(char *)((int)param_1 + 7) == *(char *)((int)puVar3 + -5))) {
            if (uVar9 < *puVar3) {
              iVar7 = iVar6;
              uVar9 = *puVar3;
            }
            cVar5 = (char)*psVar8;
          }
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 8;
        } while (iVar6 < (int)(uint)uVar1);
      }
      puVar4 = GlobalAlloc(0,*(SIZE_T *)(param_1 + iVar7 * 8 + 7));
      *(uint **)((int)pvVar2 + 0x424) = puVar4;
      pvVar10 = (HGLOBAL)0x0;
      if (puVar4 != (uint *)0x0) {
        *(undefined4 *)((int)pvVar2 + 0x428) = *(undefined4 *)(param_1 + iVar7 * 8 + 7);
        FUN_0044c490(puVar4,(uint *)(*(int *)(param_1 + iVar7 * 8 + 9) + -6 + (int)psVar8),
                     *(uint *)(param_1 + iVar7 * 8 + 7));
        FUN_0047a520((int *)((int)pvVar2 + 0x418));
        pvVar10 = pvVar2;
      }
    }
  }
  return pvVar10;
}


