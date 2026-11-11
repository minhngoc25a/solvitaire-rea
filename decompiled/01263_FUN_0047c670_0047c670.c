// Function: FUN_0047c670
// Entry: 0047c670
// Size: 1469 bytes
// Thunk: false
// External: false


LPVOID __cdecl
FUN_0047c670(LPCWSTR param_1,uint *param_2,SIZE_T param_3,int param_4,SIZE_T param_5,uint param_6,
            uint param_7,uint param_8,int param_9)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint *puVar2;
  BOOL BVar3;
  int *piVar4;
  undefined3 extraout_var_02;
  LPVOID pvVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *lpBuffer;
  LPVOID pvVar10;
  SIZE_T SVar11;
  SIZE_T SVar12;
  SIZE_T local_460;
  HANDLE local_45c;
  LPVOID local_458;
  int local_454;
  LPVOID local_450;
  LPVOID local_44c;
  uint *local_448;
  uint *local_444;
  LPVOID local_440;
  uint local_43c;
  undefined2 local_438;
  SIZE_T local_436;
  undefined4 local_432;
  int local_42e;
  uint local_428;
  SIZE_T local_424;
  int local_420;
  undefined2 local_41c;
  undefined2 local_41a;
  undefined4 local_418;
  undefined4 *local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  
  switch(param_8) {
  case 1:
  case 4:
  case 8:
  case 0x18:
  case 0x20:
    goto switchD_0047c693_caseD_1;
  default:
    return (LPVOID)0x0;
  }
LAB_0047cb24:
  FUN_004bed0d(piVar4);
  pvVar10 = (LPVOID)0x0;
  goto LAB_0047cbc3;
switchD_0047c693_caseD_1:
  if ((int)param_8 < 9) {
    SVar12 = 1 << ((byte)param_8 & 0x1f);
    local_42e = SVar12 * 4 + 0x36;
    if (param_8 == 1) {
      SVar11 = (int)(param_3 + 7 + ((int)(param_3 + 7) >> 0x1f & 7U)) >> 3;
    }
    else if (param_8 == 4) {
      SVar11 = (int)(param_3 + 1) / 2;
    }
    else {
      SVar11 = local_460;
      if (param_8 == 8) {
        SVar11 = param_3;
      }
    }
    SVar11 = SVar11 + 3 & 0xfffffffc;
    if (SVar11 == 0) {
      SVar11 = 4;
    }
  }
  else {
    local_42e = 0x36;
    SVar11 = (param_8 >> 3) * param_3 + 3 & 0xfffffffc;
    SVar12 = local_460;
  }
  puVar9 = (undefined4 *)(SVar11 * param_4);
  local_438 = 0x4d42;
  local_432 = 0;
  local_428 = 0x28;
  local_424 = param_3;
  local_41a = (undefined2)param_8;
  local_418 = 0;
  local_436 = (int)puVar9 + local_42e;
  local_420 = param_4;
  local_41c = 1;
  local_45c = (HANDLE)0x0;
  local_458 = (LPVOID)0x0;
  local_454 = 0;
  local_410 = 0;
  local_40c = 0;
  local_408 = 0;
  local_404 = 0;
  local_414 = puVar9;
  if (param_1 == (LPCWSTR)0x0) {
    local_458 = FUN_004235e0(local_436,1);
    if (local_458 == (LPVOID)0x0) {
      return (LPVOID)0x0;
    }
  }
  else {
    local_45c = CreateFileW(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (local_45c == (HANDLE)0xffffffff) {
      return (LPVOID)0x0;
    }
  }
  local_450 = (LPVOID)0x0;
  bVar1 = FUN_0047c610(&local_45c,(uint *)&local_438,(undefined4 *)0xe);
  pvVar10 = local_450;
  if ((CONCAT31(extraout_var,bVar1) == 0) ||
     (bVar1 = FUN_0047c610(&local_45c,&local_428,(undefined4 *)0x28), pvVar10 = local_450,
     CONCAT31(extraout_var_00,bVar1) == 0)) goto LAB_0047cbc3;
  if ((param_8 == 1) || ((param_8 == 4 || (param_8 == 8)))) {
    piVar4 = FUN_004beb49(param_2,param_3,param_4,param_9,param_5,param_8,param_7);
    iVar8 = 0;
    if (0 < (int)SVar12) {
      puVar6 = (undefined1 *)((int)piVar4 + 0x51);
      do {
        *(undefined1 *)((int)&local_400 + iVar8 * 4 + 2) = puVar6[1];
        *(undefined1 *)((int)&local_400 + iVar8 * 4 + 1) = *puVar6;
        *(undefined1 *)(&local_400 + iVar8) = puVar6[-1];
        *(undefined1 *)((int)&local_400 + iVar8 * 4 + 3) = 0;
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar8 < (int)SVar12);
    }
    bVar1 = FUN_0047c610(&local_45c,&local_400,(undefined4 *)(SVar12 * 4));
    local_44c = (LPVOID)(uint)(CONCAT31(extraout_var_02,bVar1) != 0);
    if ((param_6 & 2) == 0) {
      iVar8 = param_4 + -1;
      if (-1 < iVar8) {
        puVar2 = (uint *)(local_454 + (int)local_458);
        do {
          puVar7 = (uint *)FUN_004bed59(piVar4,iVar8);
          if (local_45c == (HANDLE)0x0) {
            FUN_0044c490(puVar2,puVar7,SVar11);
            puVar2 = (uint *)((int)puVar2 + SVar11);
          }
          else {
            BVar3 = WriteFile(local_45c,puVar7,SVar11,&local_460,(LPOVERLAPPED)0x0);
            if ((BVar3 == 0) || (local_460 != SVar11)) goto LAB_0047cb24;
          }
          pvVar10 = local_44c;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
        FUN_004bed0d(piVar4);
        goto LAB_0047cbc3;
      }
    }
    else {
      iVar8 = 0;
      if (0 < param_4) {
        puVar2 = (uint *)(local_454 + (int)local_458);
        do {
          puVar7 = (uint *)FUN_004bed59(piVar4,iVar8);
          if (local_45c == (HANDLE)0x0) {
            FUN_0044c490(puVar2,puVar7,SVar11);
            puVar2 = (uint *)((int)puVar2 + SVar11);
          }
          else {
            BVar3 = WriteFile(local_45c,puVar7,SVar11,&local_460,(LPOVERLAPPED)0x0);
            if ((BVar3 == 0) || (local_460 != SVar11)) goto LAB_0047cb24;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_4);
      }
    }
    pvVar10 = local_44c;
    FUN_004bed0d(piVar4);
    goto LAB_0047cbc3;
  }
  if (param_9 == 0x18) {
    if (param_8 == 0x18) {
LAB_0047c959:
      if (((param_6 & 2) != 0) && (param_5 == SVar11)) {
        bVar1 = FUN_0047c610(&local_45c,param_2,puVar9);
        pvVar10 = (LPVOID)(uint)(CONCAT31(extraout_var_01,bVar1) != 0);
        goto LAB_0047cbc3;
      }
    }
  }
  else if ((param_9 == 0x20) && (param_8 == 0x20)) goto LAB_0047c959;
  local_448 = HeapAlloc(DAT_00542264,8,SVar11);
  pvVar10 = local_450;
  if (local_448 != (uint *)0x0) {
    local_440 = (LPVOID)0x0;
    local_450 = (LPVOID)0x1;
    pvVar10 = (LPVOID)0x1;
    if (0 < param_4) {
      local_44c = (LPVOID)(param_4 - 1);
      local_43c = param_6 & 2;
      local_444 = (uint *)(local_454 + (int)local_458);
      puVar2 = local_448;
      do {
        pvVar10 = local_440;
        pvVar5 = local_440;
        if (local_43c == 0) {
          pvVar5 = local_44c;
        }
        puVar7 = (uint *)((int)param_2 + (int)pvVar5 * param_5);
        lpBuffer = puVar2;
        if (0 < (int)param_3) {
          SVar12 = param_3;
          if (param_9 == 0x20) {
            do {
              *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar7 + 2);
              *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)puVar7 + 1);
              *(char *)puVar2 = (char)*puVar7;
              *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)puVar7 + 3);
              if (param_8 == 0x20) {
                puVar2 = puVar2 + 1;
              }
              else {
                puVar2 = (uint *)((int)puVar2 + 3);
              }
              SVar12 = SVar12 - 1;
              puVar7 = puVar7 + 1;
              lpBuffer = local_448;
            } while (SVar12 != 0);
          }
          else {
            do {
              *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar7 + 2);
              *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)puVar7 + 1);
              *(char *)puVar2 = (char)*puVar7;
              if (param_8 == 0x20) {
                *(undefined1 *)((int)puVar2 + 3) = 0;
                puVar2 = puVar2 + 1;
              }
              else {
                puVar2 = (uint *)((int)puVar2 + 3);
              }
              puVar7 = (uint *)((int)puVar7 + 3);
              SVar12 = SVar12 - 1;
            } while (SVar12 != 0);
          }
        }
        if (local_45c == (HANDLE)0x0) {
          FUN_0044c490(local_444,lpBuffer,SVar11);
          local_444 = (uint *)((int)local_444 + SVar11);
        }
        else {
          BVar3 = WriteFile(local_45c,lpBuffer,SVar11,&local_460,(LPOVERLAPPED)0x0);
          if ((BVar3 == 0) || (local_460 != SVar11)) {
            pvVar10 = (LPVOID)0x0;
            break;
          }
        }
        local_440 = (LPVOID)((int)pvVar10 + 1);
        local_44c = (LPVOID)((int)local_44c - 1);
        pvVar10 = local_450;
        puVar2 = lpBuffer;
      } while ((int)local_440 < param_4);
    }
    HeapFree(DAT_00542264,0,local_448);
  }
LAB_0047cbc3:
  if (param_1 == (LPCWSTR)0x0) {
    if (pvVar10 == (LPVOID)0x0) {
      FUN_004236b0(local_458);
      return (LPVOID)0x0;
    }
    return local_458;
  }
  CloseHandle(local_45c);
  if (pvVar10 != (LPVOID)0x0) {
    return pvVar10;
  }
  DeleteFileW(param_1);
  return (LPVOID)0x0;
}


