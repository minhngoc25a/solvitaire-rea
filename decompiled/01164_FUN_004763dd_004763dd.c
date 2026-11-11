// Function: FUN_004763dd
// Entry: 004763dd
// Size: 525 bytes
// Thunk: false
// External: false


int FUN_004763dd(HBITMAP param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  HBITMAP pHVar7;
  HBITMAP pHVar8;
  HIMAGELIST p_Var9;
  int iVar10;
  int i;
  int local_8;
  
  i = -1;
  piVar1 = param_2 + 2;
  if ((int)param_2[4] <= (int)param_2[3]) {
    iVar2 = param_2[4] + 0x19;
    param_2[4] = iVar2;
    pvVar3 = HeapReAlloc(DAT_00542264,8,(LPVOID)*piVar1,iVar2 * 0x10);
    *piVar1 = (int)pvVar3;
  }
  uVar4 = FUN_00476717(param_1);
  iVar2 = 0;
  if (0 < (int)param_2[3]) {
    iVar6 = *piVar1;
    iVar10 = 0;
    local_8 = iVar6;
    do {
      if ((*(int *)(iVar10 + iVar6) != 0) && (*(int *)(iVar10 + 8 + iVar6) == 0)) {
        *(undefined4 *)(iVar10 + iVar6) = 0;
        iVar6 = *piVar1;
        i = *(int *)(iVar10 + 4 + iVar6);
        local_8 = iVar6;
      }
      if ((*(HBITMAP *)(iVar10 + iVar6) == param_1) && (*(uint *)(iVar10 + 0xc + iVar6) == uVar4)) {
        iVar6 = *(int *)(local_8 + 4 + iVar2 * 0x10);
        piVar1 = (int *)(local_8 + 8 + iVar2 * 0x10);
        *piVar1 = *piVar1 + 1;
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar2 < (int)param_2[3]);
  }
  DVar5 = GetObjectType(param_1);
  iVar2 = i;
  if (DVar5 == 7) {
    iVar6 = GetSystemMetrics(0x32);
    iVar10 = GetSystemMetrics(0x31);
    pHVar7 = FUN_004766d4(param_1,iVar10,iVar6);
    pHVar8 = FUN_0042143b(pHVar7);
    if (i == -1) {
      iVar2 = ImageList_Add((HIMAGELIST)*param_2,pHVar7,pHVar8);
    }
    else {
      ImageList_Replace((HIMAGELIST)*param_2,i,pHVar7,pHVar8);
    }
    if (pHVar8 != (HBITMAP)0x0) {
      DeleteObject(pHVar8);
    }
    if (pHVar7 != param_1) {
      DeleteObject(pHVar7);
    }
    if (param_2[1] != 0) {
      iVar6 = GetSystemMetrics(0xc);
      iVar10 = GetSystemMetrics(0xb);
      pHVar7 = FUN_004766d4(param_1,iVar10,iVar6);
      pHVar8 = FUN_0042143b(pHVar7);
      if (i == -1) {
        ImageList_Add((HIMAGELIST)param_2[1],pHVar7,pHVar8);
      }
      else {
        ImageList_Replace((HIMAGELIST)param_2[1],i,pHVar7,pHVar8);
        iVar2 = i;
      }
      if (pHVar8 != (HBITMAP)0x0) {
        DeleteObject(pHVar8);
      }
      if (pHVar7 != param_1) {
        DeleteObject(pHVar7);
      }
    }
    if (i != -1) goto LAB_004765aa;
LAB_004765a1:
    i = param_2[3];
    param_2[3] = i + 1;
  }
  else {
    p_Var9 = (HIMAGELIST)param_2[1];
    if (p_Var9 == (HIMAGELIST)0x0) {
      p_Var9 = (HIMAGELIST)*param_2;
      if (i == -1) goto LAB_00476599;
    }
    else {
      if (i == -1) {
        ImageList_ReplaceIcon(p_Var9,-1,(HICON)param_1);
        p_Var9 = (HIMAGELIST)*param_2;
LAB_00476599:
        iVar2 = ImageList_ReplaceIcon(p_Var9,-1,(HICON)param_1);
        goto LAB_004765a1;
      }
      ImageList_ReplaceIcon(p_Var9,i,(HICON)param_1);
      p_Var9 = (HIMAGELIST)*param_2;
    }
    ImageList_ReplaceIcon(p_Var9,i,(HICON)param_1);
  }
LAB_004765aa:
  *(HBITMAP *)(param_2[2] + i * 0x10) = param_1;
  *(uint *)(param_2[2] + 0xc + i * 0x10) = uVar4;
  *(int *)(param_2[2] + 4 + i * 0x10) = iVar2;
  *(undefined4 *)(param_2[2] + 8 + i * 0x10) = 1;
  return iVar2;
}


