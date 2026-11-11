// Function: FUN_00455396
// Entry: 00455396
// Size: 114 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_00455396(__uint64 *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  
  piVar1 = *(int **)(param_1 + 2);
  *(int **)(param_1 + 2) = piVar1 + 1;
  uVar3 = *(uint *)((int)param_1 + 0x24);
  pcVar4 = (char *)*piVar1;
  *(char **)(param_1 + 6) = pcVar4;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0x7fffffff;
  }
  bVar2 = __crt_stdio_output::is_wide_character_specifier<char>
                    (*param_1,*(char *)((int)param_1 + 0x2d),*(length_modifier *)(param_1 + 5));
  if (bVar2) {
    if ((undefined1 (*) [32])pcVar4 == (undefined1 (*) [32])0x0) {
      *(wchar_t **)(param_1 + 6) = L"(null)";
      pcVar4 = (char *)L"(null)";
    }
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = FUN_0044bf32((short *)pcVar4,uVar3);
  }
  else {
    if ((undefined1 (*) [32])pcVar4 == (undefined1 (*) [32])0x0) {
      pcVar4 = "(null)";
      *(char **)(param_1 + 6) = "(null)";
    }
    uVar3 = FUN_0044c0e2((undefined1 (*) [32])pcVar4,uVar3);
  }
  *(uint *)((int)param_1 + 0x34) = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


