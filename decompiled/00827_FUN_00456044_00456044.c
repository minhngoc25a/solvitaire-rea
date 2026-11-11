// Function: FUN_00456044
// Entry: 00456044
// Size: 168 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_00456044(__uint64 *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  LPWSTR pWVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 local_8;
  
  puVar7 = *(undefined2 **)(param_1 + 2);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined2 **)(param_1 + 2) = puVar7 + 2;
  uVar1 = *puVar7;
  local_8 = param_1;
  bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x2e),*(length_modifier *)(param_1 + 5));
  if (bVar4) {
    puVar7 = *(undefined2 **)(param_1 + 0x88);
    if (*(undefined2 **)(param_1 + 0x88) == (undefined2 *)0x0) {
      puVar7 = (undefined2 *)((int)param_1 + 0x3c);
    }
    *puVar7 = uVar1;
  }
  else {
    piVar2 = *(int **)(param_1 + 1);
    local_8 = (__uint64 *)(CONCAT22(local_8._2_2_,uVar1) & 0xffff00ff);
    if ((char)piVar2[5] == '\0') {
      FUN_0044ef90(piVar2);
    }
    pWVar5 = *(LPWSTR *)(param_1 + 0x88);
    if (*(LPWSTR *)(param_1 + 0x88) == (LPWSTR)0x0) {
      pWVar5 = (LPWSTR)((int)param_1 + 0x3c);
    }
    uVar6 = FUN_0048476e(pWVar5,(byte *)&local_8,*(uint *)(piVar2[3] + 4),piVar2);
    if ((int)uVar6 < 0) {
      *(undefined1 *)((int)param_1 + 0x2c) = 1;
    }
  }
  iVar3 = (int)param_1[0x88];
  iVar8 = (int)param_1 + 0x3c;
  if (iVar3 != 0) {
    iVar8 = iVar3;
  }
  *(int *)(param_1 + 6) = iVar8;
  *(undefined4 *)((int)param_1 + 0x34) = 1;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


