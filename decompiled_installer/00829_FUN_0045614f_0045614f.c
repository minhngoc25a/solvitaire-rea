// Function: FUN_0045614f
// Entry: 0045614f
// Size: 116 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_0045614f(__uint64 *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  piVar1 = *(int **)(param_1 + 2);
  *(int **)(param_1 + 2) = piVar1 + 1;
  uVar3 = *(uint *)((int)param_1 + 0x24);
  pwVar4 = (wchar_t *)*piVar1;
  *(wchar_t **)(param_1 + 6) = pwVar4;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0x7fffffff;
  }
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x2e),*(length_modifier *)(param_1 + 5));
  if (bVar2) {
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"(null)";
      *(wchar_t **)(param_1 + 6) = L"(null)";
    }
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = FUN_0044bf32(pwVar4,uVar3);
  }
  else {
    if (pwVar4 == (wchar_t *)0x0) {
      *(char **)(param_1 + 6) = "(null)";
    }
    uVar3 = FUN_004561c3(param_1,uVar3);
  }
  *(uint *)((int)param_1 + 0x34) = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


